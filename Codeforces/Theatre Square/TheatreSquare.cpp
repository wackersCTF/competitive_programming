#include <iostream>
using namespace std;

int main() {
    int n, m, a; cin >> n >> m >> a;
    unsigned long long int n_counter = 0; // counter for how many stones fits on side n
    while (n > 0) { // counts how many fits 
        n -= a;
        n_counter += 1;
    }
    unsigned long long int m_counter = 0; // counter for how many stones fits on side n
    while (m > 0) { // counts how many fits 
        m -= a;
        m_counter += 1;
    }

    cout << n_counter * m_counter;
}