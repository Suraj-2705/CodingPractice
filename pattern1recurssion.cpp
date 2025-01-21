#include<iostream>
using namespace std;

void printn(int i)
{
    if(i==0)
        return;
    
    cout << "* ";
    printn(i-1);
}

void pattern(int n, int i)
{
    if(n==0)
        return;
    
    printn(i);
    cout << endl;

    pattern(n-1, i+1);
}

int main()
{
    int n = 5;
    pattern(5, 1);

    return 0;
}
