#include <iostream>
#include <cmath>
#include <vector>

using namespace std;





int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int x1, y1, x2, y2, x3, y3, X, Y;

    


    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (x1 == x2)
    {
        X = x3;

    }
    else if (x1 == x3)
    {
        X = x2;
    }
    else {
        X = x1;
    }
    if (y1 == y2)
    {
        Y = y3;
    }
    else if (y1 == y3)
    {
        Y = y2;
    }
    else
    {
        Y = y1;
    }
    cout << X << " "<<Y;

    return 0;
}