#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    int count = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != s[i - 1])
        {
            count++;
        }
    }

    cout << "Number of times neighbouring characters are different: " << count << endl;
    return 0;
}