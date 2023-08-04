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

    int n;
    cin >> n;

    vector<int>BH(n);
    vector<int>result(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> BH[i];
    }
    stack<int>index;
    for (int i = 0; i < n; i++)
    {
        while (!index.empty() && BH[index.top()] < BH[i])
        {
            index.pop();
        }
        if (!index.empty())
        {
            result[i] = index.top() + 1;
        }
        index.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";

    }
    cout << "\n";
    return 0;
}