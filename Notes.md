# C++ 

good start: https://www.w3schools.com/cpp/default.asp
My github repo with c++ code for competitive programming: https://github.com/wyl3waK/competitive_programming 

Ides:
I use vscode (visual studio code)
Here’s a good online one: https://ide.usaco.guide 

Two Main Versions: 11 and 17


Modules 
#include <iostream>
Basically include it at the top of every program
It's just necessary, dont worry about it too much
using namespace std;
Include this too (necessary unless you want to do std::cin)
Its for cin and cout
#include <cmath>
#include <vector>
To use vectors, you need this

Syntax
Everything in in main() { code goes here }
Semicolons (;) after each line

Input & output
cin >> inputVariable;
Takes in all characters before a space or new line
example: input is bob 1241234 mmmmmm 78988
and i have 4 variables
variable 1 is bob
variable 2 is 1241234
variable 3 is mmmmmm
variable 4 is 78988 
cout << outputVariable;
You should put spaces between variables if there’s more than 1 or it will clump them together.
“\n” for new line
(you could use endl too but there’s a slight difference stick 
Ex: cout << variable << “\n”;
#include <cstdio>
Ok so this is for old usaco in particular
Old problems used to take in files as input and output
So you would have to use this but they dont do this anymore
freopen("file.in", "r", stdin);
freopen("file.out", "w", stdout);
Example: 
#include <iostream>
using namespace std;
 
int main() {
   int a, b, c; cin >> a >> b >> c;
   cout << c << " "  << b << " " << a << "\n";
   cout << "sum is " << a+b+c << "\n";
}
 

Input: 1 2 3
Output: 
3 2 1
sum is 6


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
