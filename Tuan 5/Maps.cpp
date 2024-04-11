#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, type;
    cin >> q;
    map<string,int> m;
    for(int i=0; i<q; i++){
        cin >> type;
        string name;
        switch(type) {
            case 1: 
                int marks;
                cin >> name >> marks;
                m[name] += marks;
                break;
            case 2:
                cin >> name;
                m.erase(name);
                break;
            case 3:
                cin >> name;
                cout << m[name] << "\n";
                break;
        }
    }
    return 0;
}