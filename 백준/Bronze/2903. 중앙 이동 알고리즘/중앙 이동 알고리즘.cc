#include <iostream> <string> <cstring>  <algorithm> <cmath>
#include <vector>

using namespace std;

int poww(int b, int r)
{ 
    int res = b;


    while (r--)
    {
        res *= b;

    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
   
    int n;
    int ans;

    cin >> n;
   
    ans = (poww(2, n-1) + 1);

    ans*= ans;
    cout << ans;


    return 0;
}