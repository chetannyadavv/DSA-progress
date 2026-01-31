#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<char, int> count;
    string s;

    getline(cin, s); // Read full line including spaces

    // Count frequencies
    for (char ch : s)
    {
        count[ch]++;
    }

    // Find first non-repeating
    for (char ch : s)
    {
        if (count[ch] == 1)
        {
            cout << ch << endl;
            return 0;
        }
    }

    cout << "No non-repeating character\n";
}
