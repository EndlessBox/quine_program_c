#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define command(x) "rm -rf Sully; gcc  "#x " -o Sully; ./Sully"
#define decode(t, n, a, k, e, t1) a##e##k##n
#define liJaBismillah decode(z, n, m, i, a, t)
int i = 4;
char str[100];

#define CLONE(x, y) int liJaBismillah() { char *ext = ".c"; char *filePrefix = "Sully_"; char *final = malloc(sizeof(filePrefix) + sizeof(ext) + 1); sprintf(str, "%d", --i); strncpy(final, filePrefix, 6); strncpy(final + 6, str, 1); strncpy(final + 7, ext, 2); void* ptr = fopen(final, "w"); fputs(x, ptr); fputs(str, ptr); fputs(y, ptr); fputs("\n\nCLONE("#x", "#y");", ptr); fclose(ptr); char* commandPref = "gcc  "; char* commandSuff = " -o Sully; ./Sully"; char *finalCommand = malloc(sizeof(commandPref) + sizeof(commandSuff) + (strlen(str) * sizeof(char)) + 1); strcpy(finalCommand, commandPref); strcpy(finalCommand +  strlen(commandPref), str); strcpy(finalCommand + strlen(commandPref) + strlen(str), commandSuff); if (i > 0) puts(finalCommand); }

CLONE("#include <stdio.h>\n#include <string.h>\n#include <stdlib.h>\n\n#define decode(t, n, a, k, e, t1) a##e##k##n\n#define liJaBismillah decode(z, n, m, i, a, t)\nint i = ", ";\nchar str[100];\n\n#define CLONE(x, y) int liJaBismillah() { char *ext = \".c\"; char *filePrefix = \"Sully_\"; char *final = malloc(sizeof(filePrefix) + sizeof(ext) + 1); sprintf(str, \"%d\", --i); strncpy(final, filePrefix, 6); strncpy(final + 6, str, 1); strncpy(final + 7, ext, 2); void* ptr = fopen(final, \"w\"); fputs(x, ptr); fputs(str, ptr); fputs(y, ptr); fputs(\"\\n\\nCLONE(\"#x\", \"#y\");\", ptr); fclose(ptr); if(i > 0) system(\"rm -rf Sully; gcc\" final \"-o Sully; ./Sully\");}");