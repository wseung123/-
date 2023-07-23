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
    
    long long a, b,s=0,big=0;
    cin >> a >> b;
    //14 8
    
    s = (a < b) ? a : b;
    big = (a > b) ? a : b;

    if (big - s == 1)
    {
        cout << "0" << endl;
       

   }
    else if (big == s)
    {
        cout << "0" << endl;
       
    }
 
    else
    {
        cout << big - s - 1 << "\n";
        for (unsigned long long i = s + 1; i < big; i++)
        {
            cout << i << " ";

        }


        

    }
    return 0;
}