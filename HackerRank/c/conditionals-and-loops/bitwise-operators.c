// https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

void calculate_the_maximum(int n, int k) {
    int max_and = 0; 
    int max_or = 0;
    int max_xor = 0;
    int x;
    for(int a = 1; a < n; a++){
        for(int b = a+1; b <= n; b++){
            x = a & b;
            //printf("%d and %d: %d\n",a,b,x);
            if(x > max_and && x < k) {
                max_and = x;
            }
            x = a | b;
            if(x > max_or && x < k) {
                max_or = x;
            }
            x = a ^ b;
            if(x > max_xor && x < k) {
                max_xor = x;
            }
        }
    }
    printf("%d\n",max_and);
    printf("%d\n",max_or);
    printf("%d",max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
