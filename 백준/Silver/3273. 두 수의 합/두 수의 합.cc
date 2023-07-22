#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n, x;

int arr[1000001]={ };
int brr[1000001]={ };
int br = 0;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        brr[arr[i]]++;

        
    }

    cin >> x;

    for (int i = 0; i < n; i++)
    {
        int r = x - arr[i];

        if (r >= 1 && r <= 1000000 && brr[r])
        {
            br += brr[r];
            brr[r] = 0;

        }

    }
    cout << br/2;

    






    return 0;
}