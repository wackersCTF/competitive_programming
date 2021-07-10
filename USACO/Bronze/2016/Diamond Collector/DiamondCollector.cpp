#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
	int n, k; cin >> n >> k;
	vector<int> v;
	
	for (int i = 0; i < n; i++) { // takes in inputs and places them in the vector
		int inputt; cin >> inputt;
		v.push_back(inputt);
	}
	// sort did not work
	//sort(v.begin(), v.end()); 
	int total = 0;
	int max = 0;
	for (int i = 1; i <= 10000 - k; i++) { // all possible lengths of k
		for (int j = 0; j < v.size(); j++) { // iterates through the vector
			if (i <= v.at(j)) { // checks if the vector value fits
				if (v.at(j) <= i + k) {  // checks if the vector value fits
					total  = total + 1; // increases total if there is a value in between
					//cout << i << " " << v.at(j) << " " << k << '\n';
					//cout << "total: " <<  total <<'\n';
				}
			}
		}
		if (total > max){ // if total is greater than max, it replaces it
			max = total;
		}
		total = 0;
	}
	cout << max;
	return 0;
}