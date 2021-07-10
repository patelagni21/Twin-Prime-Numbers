//twin prime numbers
#include <stdio.h>
#include <stdlib.h>
 
int is_prime(int);

int main(int argc, char *argv[])
{
 
    int number;
 
 
    FILE* in_file  = fopen(argv[1], "r"); // read only 
       
        if (in_file == NULL)    //File can not be read.
        { 
            return 1;
        }

        // Read the next line and store the value in the "number" variable
        while ( fscanf(in_file, "%d", &number ) == 1 ) 
        {
            //printf("Input is: %d\n", number);
            if ( (is_prime(number)==0) && ( (is_prime(number-2)==0) || (is_prime(number+2)==0) ) ) 
            {
            	// write "yes" to console
                printf("%s\n", "yes");
            } else {
            	// write "no" to console
                 printf("%s\n", "no");
            }
        }
    fclose(in_file);
    return 0;
}
 
int is_prime(int num) {
    if(num < 2) {
        return 1;
    }
    for (int i = 2; i <= num / 2; ++i) {
        // condition for non-prime
        if (num % i == 0) {
            return 1;
        }
	}
    return 0;
}