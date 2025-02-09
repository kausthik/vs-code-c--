#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i < 4)
            {
                if (j == 0 || j == 5 || i == 0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << " ";
                }
            }
            if (i == 4 || i == 5)
                cout << " ";
            if (i >= 6)
            {
                if (j == 0 || j == 9 || i == 9)
                {
                    cout << "* ";
                }
                else
                    cout << " ";
            }
        }

        cout << endl;
    }
}
