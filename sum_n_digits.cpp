#include<iostream>
using namespace std;

int sumDigits(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return (n%10 + sumDigits(n/10));
}

int main()
{
    int n;
    cout << "enter the number: ";

    cin >> n;

    int result = sumDigits(n);

    cout << result;

return 0;    
}