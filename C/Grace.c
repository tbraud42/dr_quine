#include <stdio.h>
#define PRINT "#include <stdio.h>%c#define PRINT %c%s%c%c#define JOIN(a,b) a##b%c#define aMacro(a, b)int JOIN(ma,in)(void){ FILE *f = fopen(%cGrace_kid.c%c, %cw%c); if (f == NULL) return 1; fprintf(f, PRINT, 10, 34, PRINT, 34, 10, 10, 34, 34, 34, 34, 10, 10, 10, 10, 10, 10, 10);fclose(f);return 0;}%c%c/*%c   Comment%c*/%c%caMacro(ma, in)%c"
#define JOIN(a,b) a##b
#define aMacro(a, b)int JOIN(ma,in)(void){ FILE *f = fopen("Grace_kid.c", "w"); if (f == NULL) return 1; fprintf(f, PRINT, 10, 34, PRINT, 34, 10, 10, 34, 34, 34, 34, 10, 10, 10, 10, 10, 10, 10);fclose(f);return 0;}

/*
   Comment
*/

aMacro(ma, in)
