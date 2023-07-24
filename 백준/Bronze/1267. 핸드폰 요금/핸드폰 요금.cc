#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int y(int t)
{
    int yf = 0;

    if (t < 30)
    {
        yf = 10;
        return yf;
    }
    else {
        yf = 10 + (t / 30) * 10;
        return yf;
    }

}

int m(int t)
{
    int mf = 0;

    if (t < 60)
    {
        mf = 15;
        return mf;

    }
    else 
    {
        mf = 15 + (t / 60) * 15;
        return mf;
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int msum=0, ysum = 0;

    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;

        cin >> t;
        msum += m(t);
        ysum += y(t);


    }
    
    if (msum<ysum)
    {
        cout << "M" << " " << min(msum, ysum);

    }

    else if (ysum<msum)
    {
        cout << "Y" << " " << min(msum, ysum);
   }
    else {
        cout << "Y" << " " << "M" << " "<<msum;

    }
    




 
    return 0;
}