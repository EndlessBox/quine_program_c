# quine_program_c<br/>

A quine is a computer program (a kind of metaprogram) whose output and source<br/>
code are identical. As a challenge or for fun, some programmers try to write the shortest<br/>
quine in a given programming language.<br/>
The operation that consist of simply opening the source file and displaying it is considered cheating. More generally, a program that uses any data entry cannot be considered<br/>
a valid quine. A trivial solution is a program whose source code is empty. Indeed, the<br/>
execution of such a program produces for most languages no output, that is to say the<br/>
source code of the program.<br/>
<br/>
## test using the following command>>
First  => - description :  When executed, the program display on the standard output an output identical to the source code of the file used to compile the program.<br/>
          - compile and run : `gcc -Wall -Wextra -Werror first.c; ./a.out > tmp; diff tmp first.c`<br/>

Second => - description :  When executed, the program writes in a file named Grace_kid.c/Grace_kid.s the source code of the file used to compile the program (it doesn't containe a main function, Three defines only)<br/>
          - compile and run : `clear;gcc -Wall -Wextra -Werror second.c; ./a.out; diff second.c second_kid.c`<br/>

Third =>  - description :  When executed the program writes in a file named Sully_X.c/Sully_X.s. The X will be an interger given in the source. Once the file is created, the program compiles this file and then runs the new                            program (which will have the name of its source file). Stopping the program depends on the file name : the resulting program will be executed only if the integer X is greater than or equal to 0.<br/>
          - compile and run : `clear; gcc -Wall -Wextra -Werror second.c; ./Sully; diff third.c Sully_0.c ; diff third.c Sully_1.c; diff third.c Sully_2.c; diff third.c Sully_3.c; diff third.c Sully_4.c`<br/>
