//Implement Monte-carlo method
// program to implement monte carlo method to determine the probability of getting 3, 6, 9 heads in 10 flip of a coin.
//Implement MOnte-carlo method
// program to implement monte carlo method to determine the 
//probability of getting 3, 6, 9 heads in 10 flip of a coin.

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int i, j , n, h, t;
    double x;

    srand(time(NULL));

    printf("Enter number of iterations: ");
    scanf("%d", &n);

    t=h=0;

    for(i=0; i<n; i++)
    {
        h=0;
        for(j=0; j<10; j++)
        {
            x = (double)rand()/RAND_MAX;
            if(x<0.5)
            {
                printf("H");
                h++;
            }
            else
            {
                printf("T");
            }
        }
        printf("\n");
        if(h==3 || h==6 || h==9)
        {
            t++;
        }
    }

    double p = (double)t/n;
    printf("\nProbability of getting 3, 6, 9 heads in 10 flips of a coin is: %f\n", p);

    return 0;

}