#include <iostream> <string> <cstring>  <algorithm> <cmath>
#include <vector>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int a, b, v, day = 0;

    cin >> a >> b >> v;

    int set = v - a;
    int h = a-b;
    int setdays = 0;

    setdays = set / h;
    if (set%h == 0)
    {
        setdays += 1;
    }
    else if (set%h != 0)
    {
        setdays += 2;

    }

    cout << setdays;





    return 0;
}