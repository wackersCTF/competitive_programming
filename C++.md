# C++ 
* Main Author: wyl3waK
* Contributers: xenonminer, prince-of-tennis 
* This is mostly for USACO competitive programming.
* This is in progress and not written by experts. There may be errors and mistakes.

A good start: https://www.w3schools.com/cpp/default.asp

## Some IDEs
* Visual Studio Code
* Eclipse
* Code::Blocks
* CLion
* Online one: https://ide.usaco.guide 

## Common Library Header Files 
**\#include\<iostream>**
* Include it at the top of each project

**using namespace std;**
* Include this too (necessary unless you want to do std::cin or std::cout)

**#include \<vector>**
* for vectors

## Syntax
* Semicolons after each line

## Input & Output (IO)
### cin
```cin >> inputVariable;```
*cin* considers spaces and new lines delimiters. 

Example: the input is 
```
1 22
333
```
To store them into 3 variables, the code would be 

```int a, b, c; cin >> a >> b >> c;```
a would be equal to 1, b would be equal to 22, and c would be equal 333.

### cout
```cout << outputVariable;```
Unlike Python's print(), cout will not separate the outputs with new lines or spaces.

Use “\n” for new line (endl is also an alternative).
Example:
```cout << outputVariable1 << " " << outputVariable2 << "\n";```

Another example:

Input: 1 2 3
```cpp
#include <iostream>
using namespace std;
 
int main() {
   int a, b, c; cin >> a >> b >> c;
   cout << c << " "  << b << " " << a << "\n";
   cout << "sum is " << a+b+c << "\n";
}
```
Output:

3 2 1

sum is 6

### File Input & Ouput
Old USACO problems used to take in files as input and output.
Example: 
```cpp
#include <cstdio>
freopen("file.in", "r", stdin);
freopen("file.out", "w", stdout);
```


Variables
Must specify type


Initialization: type variable = value;
Value is not necessary. You can omit it

Arrays
Basically a list with a defined size
You can set the size of it even without knowing the values
I set the size to the max size it should hold as specified in the problem
For example: lets say the problem said they will give N numbers where 0 < N < 100 and i want to put all those numbers in an array. I would set the array size to 100.
Array declaration: type arrayName[size] = {value};
Index starts from 0, so arr[0], arr[1], …
Value is optional. You’ll have empty values
To print array values, you can use a for loop or a ranged for loop


for (int i = 0; i < arraysize; i++) {
cout << i;
}



2D arrays 
Value is represented by arrayname[row][column]

Vectors

Loops

for (int i = 0; i < n; i++) {
	// code here
} else {
	// code
}

while (condition) {

}


FAQ
Where can I define variables? 
Define all variables in the main function. 
What's the difference between << “\n” and just having \n in the string?
It doesn’t matter. They are the same thing and both create a new line.
What’s the difference between using namespace std; and std::cout << "Hello World";?
It’s like importing a module
If you don't write using namespace std: you HAVE to write std::cout
if you do write using namespace std: you can write cout
Does usaco/codeforces take cpp code or does it have to be compiled?
They take in a cpp program and they compile it for you
How do I take the variable the problem gives as input?
int var; cin >> var; (Replace var with your variable)
(sometimes you need to take in the input into another data structure like an array)
