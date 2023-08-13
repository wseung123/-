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

    deque<int>dq;
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int b;
            cin >> b;
            dq.push_front(b);
        }
        else if (a == 2)
        {
            int c;
            cin >> c;
            dq.push_back(c);
        }
        else if (a == 3)
        {
            if (!dq.empty())
            {
               
                cout<<dq.front()<<'\n';
                dq.pop_front();
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else if (a == 4)
        {
            if (!dq.empty())
            {
               
                cout<<dq.back() << '\n';
                dq.pop_back();
            }
            else {
                cout << -1 << '\n';
            }

        }
        else if (a == 5)
        {
            cout << dq.size() << '\n';
        }
        else if (a == 6)
        {
            dq.empty() ? cout << 1 << '\n' : cout << 0 << '\n';
        }
        else if (a == 7)
        {
            !dq.empty() ? cout << dq.front() << '\n' : cout << -1 << '\n';
        }
        else if (a == 8)
        {
            !dq.empty() ? cout << dq.back() << '\n' : cout << -1 << '\n';
        }
    }



}