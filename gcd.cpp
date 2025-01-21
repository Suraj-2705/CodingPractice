#include<iostream>
using namespace std;

int findGcd(int divisor, int divident)
{
    if(divisor == 0)
        return divident;

    findGcd(divident % divisor, divisor);
}

int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << endl;
    cout << "Eneter the value of b: ";
    cin >> b;

    int res = findGcd(a, b);
    cout << " answer is: " << res;
    return 0;
}