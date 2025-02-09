#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
  string s, m;
  int k;
  cout << "enter the first string : " << endl;
  cin >> s;
  cout << "enter the second string : " << endl;
  cin >> m;
  cout << "the k value is : ";
  cin >> k;
  int count = 0;
  if (m.size() == s.size())
  {
    for (int i = 0; i < m.size(); i++)
    {
      for (int j = 0; j < s.size(); j++)
      {
        if (m[i] == s[j])
        {
          count++;
          s[j] = '0';
          break;
        }
      }
    }
  }
  else
    cout << "bhai tu rhn de ";
  if ((s.size() - count) == k)
    cout << "it is k-anagram."
         << " and k= " << s.size() << count;
}
