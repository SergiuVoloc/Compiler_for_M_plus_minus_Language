# Processor for C/C++ programming language (M+- in this case), used to determine some quantitative informations of input programms.



To Run:
* Be sure to add Win_flex environment variable on your machine.
Example: D:\VsProjects\M+-\Win_flex.




The syntax of M+- is defined as follows:
============================================================
prog -> block

block -> declarations program_body.

declarations -> declaration SEMICOLON declarations |.

declaration -> var_declaration
| fun_declaration.

var_declaration -> VAR ID array_dimensions COLON type.

type -> INT
| REAL
| BOOL.

array_dimensions -> SLPAR expr SRPAR array_dimensions |.

fun_declaration -> FUN ID param_list COLON type CLPAR fun_block CRPAR.

fun_block -> declarations fun_body.

param_list -> LPAR parameters RPAR.

parameters -> basic_declaration more_parameters |.

more_parameters -> COMMA basic_declaration more_parameters |.

basic_declaration -> ID basic_array_dimensions COLON type.

basic_array_dimensions -> SLPAR SRPAR basic_array_dimensions |.

program_body -> BEGIN prog_stmts END.

fun_body -> BEGIN prog_stmts RETURN expr SEMICOLON END.

prog_stmts -> prog_stmt SEMICOLON prog_stmts |.

prog_stmt -> IF expr THEN prog_stmt ELSE prog_stmt
| WHILE expr DO prog_stmt
| READ identifier
| identifier ASSIGN expr
| PRINT expr
| CLPAR block CRPAR.

identifier -> ID array_dimensions.

expr -> expr OR bint_term | bint_term.

bint_term -> bint_term AND bint_factor | bint_factor.

bint_factor -> NOT bint_factor
| int_expr compare_op int_expr
| int_expr.

compare_op -> EQUAL | LT | GT | LE |GE.

int_expr -> int_expr addop int_term | int_term.

addop -> ADD | SUB.

int_term -> int_term mulop int_factor | int_factor.

mulop -> MUL | DIV.

int_factor -> LPAR expr RPAR
| SIZE LPAR ID basic_array_dimensions RPAR
| FLOAT LPAR expr RPAR
| FLOOR LPAR expr RPAR
| CEIL LPAR expr RPAR
| ID modifier_list
| IVAL
| RVAL
| BVAL
| SUB int_factor.

modifier_list -> LPAR arguments RPAR | array_dimensions.

arguments -> expr more_arguments |.

more_arguments -> COMMA expr more_arguments |.

============================================================
Terminals of M+-
"+" => ADD
"-" => SUB
"*" => MUL
"/" => DIV
"&&" => AND
"||" => OR
"not" => NOT

"=" => EQUAL
"<" => LT
">" => GT
"=<" => LE
">=" => GE
":=" => ASSIGN
"(" => LPAR
")" => RPAR
"{" => CLPAR
"}" => CRPAR
"[" => SLPAR
"]" => SRPAR
":" => COLON
";" => SEMICLON
"," => COMMA
"if" => IF
"then" => THEN
"while" => WHILE
"do" => DO
"read" => READ
"else" => ELSE
"begin" => BEGIN
"end" => END
"print" => PRINT
"int" => INT
"bool" => BOOL
"real" => REAL
"var" => VAR
"size" => SIZE
"float" => FLOAT
"floor" => FLOOR
"ceil" => CEIL
"fun" => FUN
"return" => RETURN

{alpha}[_{digit}{alpha}]* => ID (identifier)
{digit}+ => IVAL (integer)
{digit}*.{digit}+ => RVAL (real)
"false" => BVAL (booleans)
"true" => BVAL

where:

alpha = [a-zA-Z] /n
digit = [0-9]
