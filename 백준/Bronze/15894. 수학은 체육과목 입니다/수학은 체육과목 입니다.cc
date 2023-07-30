#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    long long  cnt = 4;

    for (int i = 1; i < n; i++)
    {
        cnt += 4;

    }
    cout << cnt;


    return 0;
}