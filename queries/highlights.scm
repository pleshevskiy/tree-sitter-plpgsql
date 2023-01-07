; Keywords
[
  (keyword_cascade)
  (keyword_constraint)
  (keyword_create)
  (keyword_default)
  (keyword_delete)
  (keyword_key)
  (keyword_not)
  (keyword_null)
  (keyword_on)
  (keyword_primary)
  (keyword_references)
  (keyword_table)
  (keyword_update)
] @keyword

; Identifiers
(column_definition name: (identifier) @variable)
(column_constraint name: (identifier) @variable)

(table_reference schema: (identifier) @namespace)
(table_reference name: (identifier) @constant)

; Types
[
  (keyword_smallint)
  (keyword_integer)
  (keyword_bigint)
  (keyword_smallserial)
  (keyword_serial)
  (keyword_bigserial)
  (keyword_real)
  (double)
  (decimal)
  (numeric)
  (keyword_uuid)
  (keyword_text)
  (char)
  (varchar)
  (keyword_json)
  (keyword_jsonb)
  (keyword_date)
  (keyword_datetime)
  (keyword_time)
  (keyword_timestamp)
  (keyword_timestamptz)
  (keyword_bytea)
  (keyword_money)
  (keyword_boolean)
  (keyword_xml)
] @type.builtin

; Literal
[(keyword_true) (keyword_false)] @boolean
(number) @number

; Comments
(line_comment) @comment.line
(block_comment) @comment.block

; Punctuation
[
  ";"
  "."
  ","
] @punctuation.delimiter
[
  "("
  ")"
] @punctuation.brackets
