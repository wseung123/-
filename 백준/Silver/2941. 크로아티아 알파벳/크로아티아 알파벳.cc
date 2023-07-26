#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

vector<string>alphas = { "c=","c-","dz=","d-","lj","nj","s=","z=" };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string w;
    cin >> w;
    for (auto alpha : alphas)
    {
        while (true) 
        {

            int pos = w.find(alpha);
            if (pos == string::npos) 
            {
                
                break;
            }


            w.replace(pos, alpha.size(), "1");
           
               

            
        }
    }


    cout << w.size();

    return 0;
}