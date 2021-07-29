// https://www.hackerrank.com/challenges/printing-tokens-/problem
/*
solution from https://www.educative.io/edpresso/splitting-a-string-using-strtok-in-c

references:
  https://www.cplusplus.com/reference/cstring/strtok/
  https://www.quora.com/What-does-mean-when-I-use-it-in-C-language
  https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char * token = strtok(s, " ");
    while(token != NULL ) {
      printf("%s\n", token); //printing each token
      token = strtok(NULL, " ");
   }
    return 0;
}
