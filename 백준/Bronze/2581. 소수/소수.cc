#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int m, n, cnt = 0, sum = 0, j;
    vector<int> prime;
    cin >> m;
    cin >> n;

    for (int i = m; i <= n; i++)
    {
        cnt = 0; // cnt를 반복할 때마다 초기화해야 합니다.

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }

        if (cnt == 2)
        {
            prime.push_back(i);
            // prime 벡터에 원소를 추가할 때마다 최솟값을 갱신합니다.
            if (prime.size() == 1 || i < prime[0])
            {
                prime[0] = i;
            }
        }
    }

    if (prime.empty())
    {
        cout << -1 << "\n";
    }
    else
    {
        for (int i = 0; i < prime.size(); i++)
        {
            sum += prime[i];
        }
        cout << sum << "\n";
        cout <<  prime[0] << "\n";
    }

    return 0;
}