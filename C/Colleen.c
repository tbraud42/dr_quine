#include <stdio.h>

char *getPrint() {
    return "#include <stdio.h>%c%cchar *getPrint() {%c    return %c%s%c;%c}%c%cint main(void) {%c    char *print = getPrint();%c    printf(print, 10, 10, 10, 34, print, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c%c    return 0;%c}%c";
}

int main(void) {
    char *print = getPrint();
    printf(print, 10, 10, 10, 34, print, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10);

    return 0;
}
