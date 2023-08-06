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

    int n, t;
    cin >> t;
    while (t--)
    {
        string order, str;
        bool reverse = false, error = false;
        deque<int>dq;
        cin >> order >> n >> str;
        string s = "";
        int strl = str.length();
        for (int i = 0; i < strl; i++)
        {
            if (isdigit(str[i]))
            {
                s += str[i];
            }
            else {
                if (!s.empty())
                {
                    dq.push_back(stoi(s));
                    s = "";
                }
            }
        }
        for (auto o : order)
        {
            if (o == 'R')
            {
                if (reverse)
                    reverse = false;
                else
                    reverse = true;
                       
            }
            else 
            {
                if (dq.empty())
                {
                    cout << "error" << '\n';
                    error = true;
                    break;
                }
                if (reverse)
                    dq.pop_back();
                else
                    dq.pop_front();
               
            }
        }

        if (!error)
        {
            cout << '[';
        }
        if (reverse && !dq.empty())
        {
            for (auto it=dq.rbegin();it!=dq.rend();++it)
            {
                if (it == dq.rend() - 1)
                    cout << *it;
                else
                    cout << *it << ',';

            }
        }
        else if (!reverse && !dq.empty())
        {
            for (auto it = dq.begin(); it != dq.end(); ++it)
            {
                if (it == dq.end() - 1)
                    cout << *it;
                else {
                    cout << *it << ',';
                }
                   

            }
        }
        if (!error)
        {
            cout << "]\n";
        }
    }



}