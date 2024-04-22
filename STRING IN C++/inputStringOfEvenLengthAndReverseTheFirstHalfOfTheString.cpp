#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string in even length : ";
    getline(cin, s);
    if (s.length() % 2 != 0)
    {
        cout << "Please enter the string in even length. ";
        return 1;
    }
    int n = s.length();
    int mid = n / 2;
    reverse(s.begin(), s.begin() + mid);
    cout << "Reversed the first half of string : " << s << endl;
    return 0;
}