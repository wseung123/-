#include<iostream>
#include<vector> 
#include<stack>
#include<string>
#include<list>
using namespace std;

int n;
stack<int>s;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 

    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (a == 2)
        {
            if(s.size()>=1)
            {
               
                cout << s.top() << '\n';
                s.pop();
            }
            else 
            {
                cout << -1 << '\n';

            }
        }
        else if (a == 3)
        {
            cout << s.size() << "\n";
        }
        else if (a == 4)
        {
            s.empty() ? cout << 1<<"\n" : cout << 0<<"\n";

        }
        else 
        {
            !s.empty() ? cout << s.top()<<"\n" : cout << -1<<"\n";
        }

    }





    return 0;
}