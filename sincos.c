//Fullname: Tezekbayeva Dayana
//Group: 3EN04B

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

int c, i;
double angle;

int main(int argc, char*argv[]) {
    
    for (i = 1; i < argc; i++)
        if (i == 1 && !strcmp(argv[1], "-s")) {
            angle = atof(argv[2]);
            printf("%f\n",sin(angle));
            break;
        } else if (i == 1 && !strcmp(argv[1], "-c")) {
               angle = atof(argv[2]);
                printf("%f\n",cos(angle));
            break;
               }
        else {
            angle = atof(argv[1]);
            printf("%f\n",sin(angle));
            printf("%f\n",cos(angle));
            break;
        }
    return 0;
}

