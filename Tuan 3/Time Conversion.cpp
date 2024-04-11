#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hours = stoi(s.substr(0, 2));
    int minutes = stoi(s.substr(3, 2));
    int seconds = stoi(s.substr(6, 2));
    string period = s.substr(8, 2);

    if (period == "PM" && hours != 12) {
        hours += 12;
    } else if (period == "AM" && hours == 12) {
        hours = 0;
    }

    // Format the result
    stringstream result;
    result << setfill('0') << setw(2) << hours << ":"
           << setw(2) << minutes << ":" << setw(2) << seconds;

    return result.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}