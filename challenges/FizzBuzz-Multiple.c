/**
 * Program to start counting from 1 up-to the input number and print following according to each counter number.
 *
 *|==========|==========================|
 *| PRINT    | IF NUMBER IS MULTIPLE OF |
 *|----------|--------------------------|
 *| FizzBuzz | 3 and 5                  |
 *| Fizz     | 3                        |
 *| Buzz     | 5                        |
 *|==========|==========================|
 *
**/

#include <stdio.h>

int main()
{
    int kases;
    scanf("%d", &kases);
    while(kases--) {
        int N;
        scanf("%d", &N);

        for(int i = 1; i <= N; ++i) {
        
            if(i % 3 == 0 && i % 5 == 0) printf("FizzBuzz\n");
            else if(i % 3 == 0) printf("Fizz\n");
            else if(i % 5 == 0) printf("Buzz\n");
            else printf("%d\n",i);
        }
    }

    return 0;
}
