#include<iostream>
#include<vector> 
#include<stack>
#include<string>
#include<list>
#include<queue>
#include<deque>
using namespace std;

int n, head, tail;

int q[10000001];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    cin >> n;
    if (head == tail)
    {
        for (int i = 0; i < n; i++)
        {
            q[tail++] = i + 1;
            /*   q[tail]=1
            *    q[tail+1]=2
            *    q[tail+2]=3
                 
                 tail++
            */

        }
    }
    while (tail-head >1)
    {
        head++;
        
        if (tail == head)
        {
            break;
        }
        q[tail] = q[head];
        head++;
        tail++;
      

    }

    cout << q[head];


}