//Input a string of size n and update all the odd positions in the string to character ‘#’. 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    int n = s.length();
    for (int i = 0; i < n; i ++)
    {if (i % 2 == 0) 
        s[i] = '#';
    }
    
    cout << "Updated string : " << s << endl;

    return 0;
}