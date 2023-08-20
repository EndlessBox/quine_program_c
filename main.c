#include <stdio.h>

int toz(int taz) {
return taz * taz;
}

/*
this is the inside comment you fuckers want :D
*/

int main() {
/*
and this is the outside one.
*/
char *code = "#include <stdio.h>%c%cint toz(int taz) {%creturn taz * taz;%c}%c%c/*%cthis is the inside comment you fuckers want :D%c*/%c%cint main() {%c/*%cand this is the outside one.%c*/%cchar *code = %c%s%c;%cprintf(code, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, code, 34, 10, 10, 10, 10);%ctoz(1);%c}%c";
printf(code, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, code, 34, 10, 10, 10, 10);
toz(1);
}
