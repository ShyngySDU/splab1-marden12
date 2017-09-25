//Fullname: Tezekbayeva Dayana
//Group: 3EN04B

#include <stdio.h>
#include <math.h>
#include <getopt.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    // insert code here...
    double val = M_PI / 180;
    int type;
    int type2;
    int index;
    double sinus,cosinus;
    int sflg = 0,cflg = 0;
    while ((type = getopt(argc, argv, "s:c:")) !=-1) {
        switch (type) {
            case 's':
                sflg = 1;
                float convertingSin = atof(optarg);
                sinus = sin(convertingSin*val);
                printf("%f\n",sinus);
                break;
            case 'c':
                cflg = 1;
                float convertingCos = atof(optarg);
                cosinus = cos(convertingCos*val);
                printf("%f\n",cosinus);
                break;
            case '?':
                break;
                
            default:
                fprintf(stderr,"getopt");
                break;
        }
        
    }
    for (index = optind; index < argc; index++){
        float convertingSinCos = atof(argv[index]);
        sinus = sin(convertingSinCos*val);
        cosinus = cos(convertingSinCos*val);
        printf("%f\n%f\n",cosinus,sinus);
    }
    return 0;
}



