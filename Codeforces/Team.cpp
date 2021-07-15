// https://codeforces.com/problemset/problem/231/A
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n; // takes in n
    int a, b, c; 
    int sure = 0; // how many problems they are sure about
    for (int i = 0; i < n; i++) { // repeats n times
        cin >> a >> b >> c; 
        if (a+b+c > 1) { // sum = 2 or 3
            sure += 1; 
        }

    }
    cout << sure;
} 