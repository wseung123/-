#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;



int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[21] = { 0 };
    int a, b, aa, bb;

    for (int i = 0; i <= 20; i++)
    {
        arr[i] += i;

    }

    
    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;

        while (b - a > 0)
        {
             aa = arr[a];
             bb = arr[b];
            if (a == b)
            {
                
                break;

            }
            arr[a] = bb;
            arr[b] = aa;

            a++, b--;

        }

    }
  

    for (int i = 1; i < 21; i++)
    {
        cout << arr[i] << " ";

    }
    return 0;
}