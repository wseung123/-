#include<iostream>
#include<vector> 
#include<stack>
#include<string>
#include<list>
#include<queue>
#include<deque>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int>q;

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int a;
            cin >> a;
            q.push(a);
        }
        else if (s == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << '\n';
                q.pop();
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (s == "size")
        {
            cout << q.size() << '\n';
        }
        else if (s == "empty")
        {
            if (q.empty())
            {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (s == "front")
        {
            if (q.empty())
            {
                cout << -1 << '\n';

            }
            else {
                cout << q.front() << '\n';
            }
        }
        else
        {
            if (q.empty())
            {
                cout << -1 << '\n';

            }
            else {
                cout << q.back() << '\n';
            }
        }
    }




}