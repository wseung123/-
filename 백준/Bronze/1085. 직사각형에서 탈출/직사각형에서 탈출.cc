#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    w -= x;
    h -= y;
    x = x >= w ? w : x;
    y = y >= h ? h : y;
    cout << (x >= y ? y : x);

    return 0;
}