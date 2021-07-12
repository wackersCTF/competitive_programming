#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int x = 0;
	int y = 0;
    int arrayx[5000];
    int arrayy[5000];
    while(x != n) {
        cin >> arrayx[x];
		x += 1;
	}
    while(y != n) {
        cin >> arrayy[y];
		y += 1;
	}

	int max = 0;
    int distance;
    int xmen;
    int ymen;
	for(int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            xmen = abs(arrayx[i] - arrayx[j]);
            ymen = abs(arrayy[i] - arrayy[j]);

            distance = xmen * xmen + ymen * ymen;

		    if (distance > max) {
                max = distance;
            }

        }

	}
    cout << max;
	return 0;
}
