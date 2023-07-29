#include <iostream> <string> <cstring>  <algorithm> <cmath>
#include <vector>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    while (true)
    {
        int a, b;
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            break;


        }

        if (b % a == 0)
        {
            cout << "factor" << endl;
            
        }
        else if (a % b == 0)
        {

            cout << "multiple" << endl;
          

        }
        else if (b % a != 0 && a % b != 0)
        {
            cout << "neither" << endl;
            

        }

       

    }

    return 0;
}