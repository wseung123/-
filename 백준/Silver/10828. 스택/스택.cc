#include<iostream>
#include<vector> 
#include<stack>
#include<string>
#include<list>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<int> s;

    int n;
    cin >> n;
    while (n--)
    {
        string x;
        cin >> x;

        if (x == "push")
        {
            int add;
            cin >> add;
            s.push(add);
        }
        else if (x == "pop")
        {
            if (s.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else if (x == "size")
        {
            cout << s.size() << '\n';
        }
        else if (x == "empty")
        {
            cout << s.empty() << '\n';
        }
        else if (x == "top")
        {
            if (s.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << s.top() << '\n';
            }
        }
    }

    return 0;
 
 
    return 0;
}