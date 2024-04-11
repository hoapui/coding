#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1, s2;
    cin >> s1 >> s2; 
    // Calculate lengths
    int len1 = s1.size();
    int len2 = s2.size();
    string concatenated = s1 + s2;
    swap(s1[0], s2[0]);
    cout << len1 << " " << len2 << endl;
    cout << concatenated << endl;
    cout << s1 << " " << s2 << endl;

    return 0;
}