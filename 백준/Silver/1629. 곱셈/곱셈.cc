#include<iostream>
#include<vector> 
#include<stack>
#include<string>
#include<list>

#define ll long long

using namespace std;

ll func(ll a, ll b, ll c) {
    if (b == 1)
    {
        return a % c;
    }

    long long val = func(a, b / 2, c);
    val = val * val % c;
    if (b % 2 == 0) return val;
    return val * a % c;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 

    ll a, b, c;
    cin >> a >> b >> c;
    ll result = func(a, b, c);
    cout << result;
    return 0;
}