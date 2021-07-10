#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
	int x, y, m; cin >> x >> y >> m;
	int sum = 0;
	int max = 0;
	double y_max = floor(m / y);
	vector<int> v1;

	for (int i = 0; i <= y_max; i++) {
		sum = i * y;
		while (sum <= m) {
			v1.push_back(sum);
			sum = sum + x;
		}
		sum = 0;
	}
	for(int i=0; i < v1.size(); i++) {
		if (v1.at(i) > max){
			max = v1.at(i);
		}
	}
	cout << max;
}
