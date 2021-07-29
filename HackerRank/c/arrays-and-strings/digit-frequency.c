// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
/*
code by johanirvall, marked up by me

references: https://stackoverflow.com/questions/43146375/why-is-scanf-always-returning-1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int* nums = (int*) malloc(10 * sizeof(int)); // make an array for just 10 integers
    char c;
    
    for(int i = 0; i < 10; i++) //fill up array with 0's
        *(nums+i) = 0;

    while(scanf("%c", &c) == 1) // take in each char
        if(c >= '0' && c <= '9') // if the character is an integer (ascii value between 0 and 9)
            (*(nums+(c-'0')))++; // increments the value at position (c-'0') of nums. If c is '0' then (c-'0') is 0, and so on
    
    for(int i = 0; i < 10; i++) // print all the values of nums
        printf("%d ", *(nums+i));
    
    return EXIT_SUCCESS;
}
