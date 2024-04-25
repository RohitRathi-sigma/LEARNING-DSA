#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    cin.ignore();
    int charCount[26] = {0};

    for (int i = 0; i < n; i++)
    {
        string str;
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, str);

        for (char ch : str)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                charCount[ch - 'a']++;
            }
        }
    }

    int maxCount = 0;
    char mostFrequentChar = '\0';

    for (int i = 0; i < 26; i++)
    {
        if (charCount[i] > maxCount)
        {
            maxCount = charCount[i];
            mostFrequentChar = 'a' + i;
        }
    }

    if (maxCount > 0)
    {
        cout << "The character '" << mostFrequentChar << "' occurs most frequently with a count of " << maxCount << "." << endl;
    }
    else
    {
        cout << "No lowercase alphabetic characters were found." << endl;
    }

    return 0;
}