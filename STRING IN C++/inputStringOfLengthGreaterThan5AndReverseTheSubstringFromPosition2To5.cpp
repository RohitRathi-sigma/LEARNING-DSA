#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string greater than 5 : ";
    getline(cin, s);
    if (s.length() % 2 != 0)
    {
        cout << " Error: Please enter a string of length greater than 5.";
        return 1;
    }
    reverse(s.begin() + 1, s.begin() + 5);
    cout << "Reversed substring from position 2 to 5 : " << s;
    return 0;
}