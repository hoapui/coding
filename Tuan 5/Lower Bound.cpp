#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        vector<int>::iterator low = lower_bound(arr.begin(), arr.end(), x);
        if(arr[low - arr.begin()] == x) {
            cout << "Yes " << (low - arr.begin() + 1) << endl;
        } else {
            cout << "No " << (low - arr.begin() + 1) << endl;
        }
    } 
    return 0;
}
