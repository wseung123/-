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

    int n, sum = 0;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            if (!s.empty())
            {
                s.pop();
            }

        }
        else 
        {
            s.push(a);

        }



    }
 
    while (!s.empty())
    {
        

        int b = s.top();

        sum += b;
        s.pop();


    }
    cout << sum << endl;


    return 0;
}