#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
	int n;
	string s;

	cout << "enter the size of string: ";
	cin >> n;

	vector<string> str;
	cout << "enter the  string: ";
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		str.push_back(x);
	}
	sort(str.begin(), str.end());

	for (int i = 0; i < n; i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	cout << "the longest common prefix is : ";

	for (int i = 0; i < min(str[0].size(), str[n - 1].size()); i++)
	{

		if (str[0][i] == str[n - 1][i])
		{

			s += str[0][i];
		}
	}
	cout << s;
}