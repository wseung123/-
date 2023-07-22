#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1, s2;
    char ss1[26]={ };
    char ss2[26]={ };
    int count = 0;
    cin >> s1 >> s2;


    for (auto c : s1)
    {
        ss1[c - 'a']++;

    }
    for (auto c : s2)
    {

        ss2[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (ss1[i] != ss2[i])
        {
            
            count += abs(ss1[i] - ss2[i]);
        }
    }

    cout << count;






    return 0;
}