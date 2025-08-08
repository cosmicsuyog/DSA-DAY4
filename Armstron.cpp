#include <iostream>
#include <cmath>
using namespace std;

bool IsArmstrong(int n)
{
    string digit = to_string(n);
    int countdigit = digit.size();
    int lastd = 0;
    int sum = 0;
    while (n > 0)
        [lastd = n % 10;
            sum = sum + pow(lastd, countdigit);
            n = n / 10;
        ] if (sum == n)
        {
            return true;
        }
    else
    {
        return false;
    }
}