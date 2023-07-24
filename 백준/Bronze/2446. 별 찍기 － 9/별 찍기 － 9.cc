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
    
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < i ; k++)
            cout << " ";
        for (int k = 0; k <= 2 * (num - i - 1); k++)
        {
            cout << "*";
        }
        cout << " " << "\n";
        

    }
    
   
    for (int i = num-2; i >= 0 ; i--) 
    {
        for (int k = 0; k < i; k++)
            cout << " ";
        for (int k = 0; k <= 2 * (num - i - 1); k++)
        {
            cout << "*";
        }
        cout << " " << "\n";
        
    }


    return 0;
}