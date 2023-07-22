#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[2][6] = {0};

    int n, k, c, d;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    { 
        cin >> c >> d;
       
        a[c][d - 1]++;

    }
    
    int roomcount = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            roomcount += a[i][j]/k;
            if (a[i][j] % k > 0)
                roomcount++;
        }
    }

    cout << roomcount;

    return 0;
}