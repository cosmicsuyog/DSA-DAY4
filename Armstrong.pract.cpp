#include <math.h>
#include <iostream>
using namespace std;

bool checkArmstrong(int n)
{
    string digits = to_string(n);
    int countdigit = digits.size();
    int num = n;
    int lastdigit = 0;
    int sum = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        sum = pow(lastdigit, countdigit) + sum;
        n = n / 10;
    }
    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    // Input a number to check if it is an Armstrong number
    cin >> number;
    bool isArmstrong = checkArmstrong(number);
    cout << isArmstrong;
    return 0;
}