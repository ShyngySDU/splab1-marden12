//Fullname: Dayana Tezekbayeva
//Group: 3EN04B

#include <stdio.h>
#include <math.h>
#include <getopt.h>
int main(int argc, char **argv) {
    
    int c;
    int digit_optind = 0;
    
    while (1) {
        int this_option_optind = optind ? optind : 1;
        int option_index = 0;
        static struct option long_options[] = {
            { "kazakh", 2, NULL, 'k' },
            { "russian", 3, NULL, 'r' }
        };
        
        c = getopt_long(argc, argv, "rk",
                        long_options, &option_index);
        if (c == -1)
            break;
        
        switch (c) {
            case 'k':
                printf("Salem \n");
                break;
                
            case 'r':
                printf("Privet \n");
                break;
                
            case '?':
                break;
                
            default:
                printf("?? getopt returned character code 0%o ??\n", c);
        }
    }
    

    return 0;
}
