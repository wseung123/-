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
    
    int len[5]={0};
    char a[5][16] = { };

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 16; j++)
        {

            if (a[i][j] == '\0')
            {
                len[i] = j;
                break;
            }
        }
        
    }

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (len[j] <= i)
            {
                continue;
            }
            else if (((a[j][i] != '\0') && (a[j][i] >= 'A' && a[j][i] <= 'Z'))
                    || (a[j][i] >= 'a' && a[j][i] <= 'z') 
                || (a[j][i] >= '0' && a[j][i] <= '9'))
             {   cout << a[j][i];
             }
        }



    }

    return 0;
}