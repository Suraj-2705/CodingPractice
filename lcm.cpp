#include<iostream>
using namespace std;

int findGcd(int divisor, int divident)
{
    if(divisor == 0)
    {
        return divident;
    }

    findGcd(divident%divisor, divisor);
}

int product(int a, int b)
{
    if(a==0 || b==0)
    {
        return 0;
    }

    if(b==1)
    {
        return a;
    }

    return a + product(a, b-1);
}

int lcm(int a, int b)
{
    return product(a, b)/findGcd(a, b);
}

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int result = lcm(a, b);
    cout << "LCM is: " << result;
}