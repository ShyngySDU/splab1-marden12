//Fullname: Dayana Tezekbayeva
//Group: 3EN04B

#include <stdio.h>
#include <getopt.h>
#include <string.h>

int main(int argc, char *argv[]){
    int dictionary;
    int option_index = 0;
    int i,j,count;
    char str[25][25],temp[25];
    struct option long_options[] = {
        {"sorted",optional_argument,NULL,'s'},
        {"reverse",optional_argument,NULL,'r'}
    };
    
    if((dictionary = getopt_long(argc,argv,"sr",long_options,&option_index))!=-1){
        switch(dictionary){
            case 's':
                puts("Enter Strings one by one: ");
                for(i=0;i<=5;i++)
                    gets(str[i]);
                for(i=0;i<=5;i++)
                    for(j=i+1;j<=count;j++){
                        if(strcmp(str[i],str[j])>0){
                            strcpy(temp,str[i]);
                            strcpy(str[i],str[j]);
                            strcpy(str[j],temp);
                        }
                    }
                printf("Order of Sorted Strings:\n");
                for(i=0;i<=5;i++)
                    puts(str[i]);
                break;
            case 'r':
                
                break;
        }
    }
    return 0;
}
