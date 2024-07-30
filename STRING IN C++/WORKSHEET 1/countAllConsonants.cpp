// Input a string of length n and count all the consonants in the given string’
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string :";
    getline(cin, s);
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
       char c = tolower(s[i]);     //To count both small & capital letters
        if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            count++;
        }
    }
    cout << "Number of consonants in string are : " << count << endl;
    return 0;
}