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

    stack<int>waiting;
    queue<int>student;
    vector<int>after;
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        student.push(a);
    }
    int now = 1;
    while (!student.empty())
    {
        if (student.front() == now)
        {
            after.push_back(now);
            now++;
            student.pop();
        }
        else if (!waiting.empty() && waiting.top() == now)
        {
            waiting.pop();
            after.push_back(now);
            now++;
        }
        else
        {
            waiting.push(student.front());
            student.pop();
        }
    }
    while (!waiting.empty())
    {
        after.push_back(waiting.top());
        waiting.pop();
    }
    bool possible = true;
    for (int i = 0; i < after.size() - 1; i++)
    {
        if (after[i] > after[i + 1])
        {
            possible = false;
            break;
        }
    }
    if (possible)
    {
        cout << "Nice";

    }
    else {
        cout << "Sad";
    }
}