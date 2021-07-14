#include <iostream>
using namespace std;

int main() {
    int w; cin >> w; // takes in weight
    
    if (w % 2 == 0 && w != 2) { // checks to see if weight is even and not equal to 2
        // the reason it shouldnt be equal to 2 is because 2 is the only even number where it doesnt satisfy the requirements
        // you can only split it 1-1 because 2-0 is not allowed (the parts have to be positive)
        // 1-1 doesnt satisfy the requirement either (1 is not even)
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}