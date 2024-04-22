#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    int n = s.length();
    for (int i = 0; i < n; i += 2)
    {
        s[i] = 'a';
    }
    cout << "Updated string : " << s << endl;

    return 0;
}