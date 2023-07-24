#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[9][9] = { {0} };
    int Max = a[0][0];
    int Maxx = 0, Maxy = 0;

    for (int i = 0; i < 9; i++)
    {

        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];

            if (Max < a[i][j])
            {
                Max = a[i][j];
                Maxx = i;
                Maxy = j;

            }


        }
      
    }

    cout << Max << endl;
    cout << Maxx + 1 <<" "<< Maxy + 1;





    return 0;
}