#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[7];
    int cnt = 0, minv = 100, sumv = 0;




    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];

      
       if (arr[i] % 2 != 0)
       {
           sumv += arr[i];
           minv = min(minv, arr[i]);

           
       }
       


    }

    if (sumv == 0 && minv == 100)
    {
        cout << -1;

    }
    else
    {
        cout << sumv << "\n" << minv;

    }


    return 0;
}