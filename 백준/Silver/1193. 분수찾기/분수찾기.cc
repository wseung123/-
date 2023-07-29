#include <iostream> <string> <cstring>  <algorithm> <cmath>
#include <vector>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    cin >> x;

    int i = 1;
    while (x > i)
    { 
        //3 4
        x -= i;  //x=3    2 i=2 x=4 ->x=3 i=2 x=1 i=3
        i++;

    }

    if (i % 2 == 1)
    {
        cout << i + 1 - x << '/' << x << endl;
    }
    else {
        cout << x << '/' << i+1-x << endl;
    }



    return 0;
}