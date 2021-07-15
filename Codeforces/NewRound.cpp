// https://codeforces.com/problemset/problem/158/A
#include <iostream>
using namespace std;

int main() {
    int n, k; cin >> n >> k; 
    int arr[50];
    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    }

    int counter = 0; // this keeps track of how many participants move on

    /* since negative scores are not allowed, if kth place does not have a score of 0
    the scores in front of it cannot be equal to 0
    2 cases
    1. kth place = 0
    - find out how many participants ahead of it has a positive score
    2. kth place > 0
    - find how many participants behind kth place have the same score
    - the ones before kth place move on
    */

    if (arr[k - 1] == 0) { // checks if the kth place has a score of 0
        for (int i = 0; i < k-1; i++) { // checks from 1st to kth place only
            if (arr[i] > 0) { // if score is positive, participant moves on
                counter += 1;
            }
            /* a bit faster method
            if (arr[i] == 0) {
                counter = i;
            }
            */

        }
    }  else { // not equal to 0 = greater than 0
        counter = k; // the number of participants that move on have to be at least k
        for (int i = k; i < n; i++) { 
            if (arr[i] == arr[k - 1]) { // checks if score is equal to kth score
                counter += 1;
            }
        }
    }
    cout << counter;
}