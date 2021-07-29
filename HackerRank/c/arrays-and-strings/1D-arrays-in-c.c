// https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int a = 0; a < n;a++) {
        scanf("%d",arr+a);
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(arr+i);
    }
    printf("%d", sum);
    free(arr);
    return 0;
}
