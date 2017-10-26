#include <stdio.h>
#include <string.h>

int c, i;

int main(int argc, char*argv[]) {
    
    for (i = 1; i < argc; i++)
        if (i == 1 && !strcmp(argv[1], "-n"))
            c = 1;
        else
            printf("%s ",argv[i]);
    if (c)
        printf("\n");
    return 0;
}
