int i = 1;
#include <stdio.h>
#define PRINT "int i = 0;%c#include <stdio.h>%c#define PRINT %c%s%c%cint main(void) {%c    char name[64];%c    snprintf(name, sizeof(name), %cSully_%cd.c%c, i);%c    FILE *f = fopen(name, %cw%c);%c    if (f == NULL) return 1;%c    fprintf(f, PRINT, 10, 10, 34, PRINT, 34, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10);%c    fclose(f);%c    return 0;%c}%c"
int main(void) {
    char name[64];
    snprintf(name, sizeof(name), "Sully_%d.c", i);
    FILE *f = fopen(name, "w");
    if (f == NULL) return 1;
    fprintf(f, PRINT, 10, 10, 34, PRINT, 34, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10);
    fclose(f);
    return 0;
}
