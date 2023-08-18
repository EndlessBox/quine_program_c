#include <stdio.h>

int main() {
char *code = "#include <stdio.h>%c%cint main() {%cchar *code = %c%s%c;%cprintf(code, 10 ,10, 10, 34, code, 34, 10, 10, 10);%c}%c";
printf(code, 10 ,10, 10, 34, code, 34, 10, 10, 10);
}