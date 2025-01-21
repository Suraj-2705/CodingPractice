#include<iostream>
using namespace std;

int productOfNumber(int a, int b)
{
    if(a==0 || b==0)
    {
        return 0;
    }
    if(b==1)
        return a;

    return a + productOfNumber(a, b-1);
}

int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    int result = productOfNumber(a, b);
    cout << "Product is: " << result << endl;

    return 0;
}