#include<iostream>
#include<vector> 
#include<stack>
#include<string>
#include<list>
using namespace std;


stack<int> s;
int n;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 

    int n;
    cin >> n;
    vector<int>nums(n);
    vector<int>result(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && nums[s.top()] < nums[i])
        {
            result[s.top()] = nums[i];
            s.pop();
        }
        s.push(i);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}