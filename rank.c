#include <stdio.h>
#include <string.h>
#include <getopt.h>

//compile gcc rank.c -o rank
//run [./rank] or [.rank -r]
//we ecan enter 5 strings
//and its will be sort it

int main (int argc, char **argv)
{
	int reversed = 0;
	int r;

  	while (1)
    {
      static struct option long_opt[] =
        {
          {"reverse", no_argument,0, 'r'},
          {0}
        };
      int opt = 0;
      r = getopt_long (argc, argv, "r",
                       long_opt, &opt);
      if (r == -1)
        break;

      switch (r){
        case 'r':
//If we will be reverse it
          reversed = 1;
          break;
        case '?':
          break;

        default:
          break;
        }
    }

  if (optind < argc)
    {
      printf ("non-option ARGV-elements: ");
      while (optind < argc)
        printf ("%s ", argv[optind++]);
      putchar ('\n');
    }
	
	printf("\n");
	char tname[10][8], name[10][8], temp[8];

    	int i, j;
	int n = 5;

    for (i = 0; i < n; i++){
//we enter 5 string for sorting
		scanf("%s", tname[i]);
		
		strcpy(name[i], tname[i]);
	}

    for (i = 0; i < n - 1 ; i++){
			for (j = i + 1; j < n; j++){
				if (strcmp(tname[i], tname[j]) > 0){
					strcpy(temp, tname[i]);
					strcpy(tname[i], tname[j]);
                    			strcpy(tname[j], temp);
				}
			}
	}

		if (reversed == 0){
			printf("\n");
			//not reverse just output
        	for (i = 0; i < n; i++){
            	printf("%s\n",tname[i]);
			}
		}
		else{
			//reverse
			printf("\n");
			for (i = n - 1; i >= 0; i--){
				printf("%s\n",tname[i]);
			}
		}
		return 0;
			
}
