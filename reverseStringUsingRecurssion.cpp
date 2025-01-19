#include<iostream>
#include<string>
using namespace std;


string reverse(string str, int len)
{
	if(len < 1)
	return "";

	if(len == 1)
	return string(1, str[0]);

	return str[len-1] + reverse(str , len-1);
}


int main()
{
	string s;

	cout << "Enter the string: ";
	cin >> s;

	cout << reverse(s, s.length());

	return 0;
}