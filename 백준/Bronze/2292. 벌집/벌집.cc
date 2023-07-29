#include <iostream> <string> <cstring>  <algorithm> <cmath>
#include <vector>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    int start = 2, end = 7;
    int multi = 6;
    int cnt = 1;

    while (true)
    {
        if (n == 1)
        {
            cout << 1;
            break;
        }
        else if (n >= start && n <= end)
        {
            cnt++;
            cout << cnt << endl;
            break;
        }
        else {
            cnt++;
            multi = 6 * cnt;
            start = end + 1;
            end = end + multi;


        }



    }




    return 0;
}