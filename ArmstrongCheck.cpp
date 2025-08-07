#include <math.h>
#include <iostream>
using namespace std;

bool checkArmstrong(int num)
{
    string digits = to_string(num);
    int digitcount = digits.size();

    int number = num;
    int r = 0;
    int pal = 0;
    while (num > 0)
    {
        r = num % 10;
        pal = pow(r, digitcount) + pal;
        num = num / 10;
    }

    if (num == pal)
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
    int num;
    cin >> num;
    bool isArmstrong = checkArmstrong(num);
    if (isArmstrong)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
