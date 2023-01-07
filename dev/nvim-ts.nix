{ pkgs ? import <nixpkgs> { } }:

let
  extraGrammars = {
    tree-sitter-psql = {
      language = "psql";
      src = ../.;
      version = "0.0.0";
    };
  };

  tree-sitter = (pkgs.tree-sitter.override { inherit extraGrammars; });
  grammars = tree-sitter.withPlugins (g: [ g.tree-sitter-psql ]);

  nvim-treesitter = pkgs.vimPlugins.nvim-treesitter.withAllGrammars.overrideAttrs (oldAttrs: {
    passthru.dependencies = oldAttrs.passthru.dependencies ++ [
      (pkgs.runCommand "nvim-treesitter-psql-grammar" { } ''
        mkdir -p $out/parser
        ln -s ${grammars}/psql.so $out/parser/psql.so
      '')
    ];
    postPatch = ''
      ln -s ${extraGrammars.tree-sitter-psql.src}/queries queries/psql
    '';
  });

  luaRc = ''
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    parser_config.psql = {}

    require("nvim-treesitter.configs").setup({
      ensure_installed = { },
      sync_install = false,

      highlight = {
        enable = true,
      },

      indent = {
        enable = true,
      },
    })

    vim.g.catppuccin_flavour = "frappe"
    require("catppuccin").setup()
    vim.cmd([[colorscheme catppuccin]])
  '';

  neovim = pkgs.neovim.override {
    configure = {
      customRC = ''
        source ${./vimrc.vim}
        lua <<EOF
        ${luaRc}
        EOF
      '';

      packages.myPlugins.start = with pkgs.vimPlugins; [
        nvim-treesitter
        catppuccin-nvim
      ];
    };
  };
in
pkgs.runCommand "nvim-ts" { } ''
  mkdir -p $out/bin
  ln -s ${neovim}/bin/nvim $out/bin/nvim-ts
''
