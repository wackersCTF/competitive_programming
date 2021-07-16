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

Input: ```1 2 3```
```cpp
#include <iostream>
using namespace std;
 
int main() {
   int a, b, c; cin >> a >> b >> c;
   cout << c << " "  << b << " " << a << "\n";
   cout << "sum is " << a+b+c;
}
```
Output:
```
3 2 1
sum is 6
```

### File Input & Ouput
Old USACO problems used to take in files as input and output.
Example: 
```cpp
#include <cstdio>
freopen("file.in", "r", stdin);
freopen("file.out", "w", stdout);
```

## Variables

Initialization: ```type variableName = value;```
Assignment/value change: ```variableName = value;```
 
Value is optional. You can choose to omit it and assign it later.

### Variable Types
| Name | Description |
| --- | --- |
| int | Stores an integer |
| float | Stores a decimal |
| double | Stores a bigger decimal |
| string | Stores alphanumeric characters |
| char | Stores a character |
| bool | Stores true or false |

### Variable Modifiers
| Name | Description |
| --- | --- |
| short | Uses 2 bytes of storage |
| normal/none | Uses 4 bytes of storage |
| long long | Uses 8 bytes of storage |

Bools and char use 1 byte of storage.

| Name | Description |
| --- | --- |
| unsigned | Stores only nonnegative numbers. |
| signed | Stores all numbers (positive, 0, negative) |

To learn about the ranges, check out this [website](https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-160).

## Arrays
Intialization: ```type arrayName[size] = {value1, value2};```

Arrays have a determined size and the index starts from 0. Value is optional. 

To print array values, you can use a for loop or a ranged for loop


### 2D Arrays
Intialization: ```arrayName[row][column]```

## Vectors

## Loops
### For Loop
To repeat something n times, 
```cpp
for (int var = 0; var < n; var++) {
	// code here
}
```
### While Loop
while (condition) {

}

## Conditions

