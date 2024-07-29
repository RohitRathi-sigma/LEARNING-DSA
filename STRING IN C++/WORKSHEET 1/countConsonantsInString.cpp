//Input a string of length n and count all the consonants in the given string’

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string :";
    getline(cin, s);
    int count = 0;
    for (char ch : s){
      ch = tolower(ch);
        if ((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            count++;
        }
    }
       
    cout << "Number of consonants in string are : " << count << endl;
    return 0;
}