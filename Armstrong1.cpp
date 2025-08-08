#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int num = n;
    string digit = to_string(n);
    int countdigit = digit.size();
    int lastd = 0;
    int sum = 0;
    while (n > 0)
    {
        lastd = n % 10;
        sum = pow(lastd, countdigit) + sum;
        n = n / 10;
    }
    if (sum == num)
        return true;
    else
        return false;
}

int main()
{
    int inputNumber = 43132;
    if (isArmstrong(inputNumber))
        cout << "true";
    else
        cout << "false";
    return 0;
}