//Fullname: Dayana Tezekbayeva
//Group: 3EN04B

#include <stdio.h>
#include <getopt.h>
#include <string.h>

int main(int argc, char*argv[]){
    int test = 0;
    int i;
    int j;

    for (i = 2; i < argc; i++){
        if(strncmp(argv[1],"-n",-1)==0 && i==1){
            test = 1;
        }else{
            printf("%s ",argv[i]);
        }
    }
    if(test == 0){
        printf("\n");
    }
    return 0;
}
