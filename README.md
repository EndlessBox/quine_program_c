# quine_program_c

A quine is a computer program (a kind of metaprogram) whose output and source
code are identical. As a challenge or for fun, some programmers try to write the shortest
quine in a given programming language.
The operation that consist of simply opening the source file and displaying it is considered cheating. More generally, a program that uses any data entry cannot be considered
a valid quine. A trivial solution is a program whose source code is empty. Indeed, the
execution of such a program produces for most languages no output, that is to say the
source code of the program.

## test using the following command
First : `gcc -Wall -Wextra -Werror first.c; ./a.out > tmp; diff tmp first.c`
Second: `clear;gcc -Wall -Wextra -Werror second.c; ./a.out; diff second.c second_kid.c`
