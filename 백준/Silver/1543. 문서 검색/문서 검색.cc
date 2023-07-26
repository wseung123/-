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

    
    string s1;
    string s2;

    getline(cin, s1);
    getline(cin, s2);
    int cnt = 0;

    int f = s1.find(s2);
    while (f != string::npos)
    {

        cnt++;
        f = s1.find(s2, f + s2.size());

    }
    cout << cnt;









    return 0;
}