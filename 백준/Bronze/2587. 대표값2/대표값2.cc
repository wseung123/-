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

    int arr[5];
    int i = 0, sum = 0;


    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];

    }

    sort(arr, arr + 5);

    cout << sum / 5 << "\n" << arr[2];


   
    return 0;
}