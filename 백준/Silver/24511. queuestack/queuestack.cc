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

    int n, m;
    deque<int>dq;

    bool flag[100001];  //0이 큐 1이 스택
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> flag[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (flag[i] == false)
        {
            dq.push_back(x);
        }

    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        dq.push_front(y);
        cout << dq.back() << " ";
        dq.pop_back();
    }

    return 0;
}