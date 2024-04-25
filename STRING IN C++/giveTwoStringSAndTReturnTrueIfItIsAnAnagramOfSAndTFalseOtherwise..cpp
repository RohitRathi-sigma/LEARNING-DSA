#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    cout << "Enter the first string : ";
    getline(cin, s);
    cout << "Enter the second string : ";
    getline(cin, t);
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    bool isAnagram = (s == t);
    if (isAnagram)
    {
        cout << "The second string is an anagram of the first string." << endl;
    }
    else
    {
        cout << "The second string is not an anagram of the first string." << endl;
    }
    return 0;
}