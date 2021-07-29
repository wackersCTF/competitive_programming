# Array reversal
This one merits a writeup because I didn't really follow the directions for this challenge. You are meant to modify the array, instead I simply printed it out in reverse. In my mind, this is a somewhat legitimate answer as the end result is the same (though problems will arise when someone tries to access the supposedly-reversed array).

A better solution is as follows from *user65898588* from the problem discussion page on HackerRank.
```
int temp;
for (i = 0; i < num / 2; i++) {
  temp = (int) *(arr + num - i - 1);
  *(arr + num - i - 1) = *(arr + i);
  *(arr + i) = temp;
}    
```
