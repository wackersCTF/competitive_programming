# Pointers in C
https://www.hackerrank.com/challenges/pointer-in-c/problem

# Solution
(Somewhat accidentally) I saw the solution by clicking on the discussion tab. It's honestly pretty straightforward. 

You only had to add two lines in the void function:
```
void update(int *a,int *b) {
    *a = *a + *b;
    *b = abs(*a-(2**b));    
}
```
The second line is kind of strange. Anything with a * in front of it is a pointer. ```abs(n)``` is simply the absolute value of n. 

```*a-(2**b)``` can be rewritten as ```a-(2*(*b))```. We are subtracting 2b from a since a is already a+b from our previous statement. Algebraically: ```(a+b)-2b``` gets you what was requested (```|a-b|```).

