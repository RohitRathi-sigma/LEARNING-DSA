#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    int sum = 0;
    int digit;
    while (num != 0)
    {
        digit = num % 10;
        if (num % 2 == 0)
        {
            sum += digit;
        }
        num /= 10;
    }
    cout << "Sum of even digit is :" << sum << endl;
    return 0;
}