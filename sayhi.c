#include <stdio.h>
#include <math.h>
#include <getopt.h>
#include <string.h>

void salem(char *str){
    if(!strcmp(str,"-r") || !strcmp(str,"--russian"))
        printf("privet");
    else if(!strcmp(str,"-k") || !strcmp(str,"--kazakh"))
        printf("salem");
    else if(!strcmp(str,"-e") || !strcmp(str,"--english"))
        printf("hi");
}

int main (int argc, char*argv[]) {
    if (argc == 1){
        if (!strcmp(argv[0], "./sayhi"))
            printf("hi\n");
        else if (!strcmp(argv[0], "./saysalem"))
            printf("salem\n");
        else if (!strcmp(argv[0], "./sayprivet"))
            printf("privet\n");
    } else if (argc == 2) {
        salem(argv[1]);
        printf("\n");
    } else if (!strcmp(argv[2], "--name")) {
        salem(argv[1]);
        printf(" %s\n", argv[3]);
    }
    return 0;
}
