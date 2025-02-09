#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int> &qu)
{
    int size = qu.size();
    int i = size;
    int k;
    while (i > 0)
    {
        k = qu.front();
        cout << k << " ";
        qu.pop();
        qu.push(k);
        i--;
    }
}
void reverse(queue<int> &qu)
{
    stack<int> st;
    int size = qu.size();
    int i = size;
    int k;
    while (i > 0)
    {
        k = qu.front();
        st.push(k);
        qu.pop();
        i--;
    }
    i = st.size();
    while (i > 0)
    {
        k = st.top();
        qu.push(k);
        st.pop();
        i--;
    }
    display(qu);
}
int main()
{
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    reverse(qu);
}