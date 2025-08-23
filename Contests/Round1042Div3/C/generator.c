// Filename: generator.c
// Purpose: generates test cases for round1042C
// Author: syfer
// Date: August 10th, 2025

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 100000
#define CASES 10

int main(int argc, char *argv[]){

    if(argc != 2) return 0;

    srand((unsigned int)argv[1]);
    
    long t1 = CASES;
    printf("%ld\n", t1);
    while(t1--){
        long n = (rand() % MAX_SIZE) + 2;
        long k = (rand() % MAX_SIZE) + 2;

        long t[n];
        long s[n];

        for(long i = 0; i < n; i++){
            t[i] = (rand() % MAX_SIZE);
            if(rand()%2)
                s[i] = t[i] + (rand()% MAX_SIZE) * k + 1;
            else
                s[i] = fabs(t[i] - k) + (rand()% MAX_SIZE) * k;
        }
        printf("%ld %ld\n", n, k);
        for(long i = 0; i < n;i++)
            printf("%ld ", s[i]);
        printf("\n");
        for(long i = 0; i < n;i++)
            printf("%ld ", t[i]);
        printf("\n");
    }
    return 0;
}

