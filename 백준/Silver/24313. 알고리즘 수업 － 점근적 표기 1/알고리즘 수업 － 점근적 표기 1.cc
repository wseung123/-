#include <iostream>
#include <cmath>
#include <vector>

using namespace std;




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int fn1,fn2;
    int c0, n0;
    int fnx, gnx;

    cin >> fn1 >> fn2;
    cin >> c0 >> n0;


    for (int i = n0; i <= 100; i++)
    {
        fnx = fn1 * i + fn2;
        gnx = c0 * i;

        if (fnx > gnx)
        {
            cout << 0;
            break;
        }

    }
    if (fnx <= gnx)
    {
        cout << 1;

    }





    return 0;
}