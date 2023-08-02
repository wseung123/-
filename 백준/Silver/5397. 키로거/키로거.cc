#include<list>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    
    int N;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        list<char>L;
        auto cursor = L.end();
        string s;
        getline(cin, s);

        for (auto a : s)
        {
            if (a == '<')
            {
                if (cursor != L.begin())
                {
                    cursor--;
                    
                }
            }
            else if (a == '>')
            {
                if (cursor != L.end())
                {
                    cursor++;
                }
            }
            else if (a == ' ')
            {
                if (cursor != L.begin())
                {
                    cursor--;
                    cursor = L.erase(cursor);

                }
            }
            else if (a == '-')
            {
                if (cursor != L.begin())
                {
                    cursor--;
                    cursor = L.erase(cursor);

                }
            }
            else {
                L.insert(cursor, a);
            }
        }
        for (auto a : L)
        {
            cout << a;

        }

        cout << '\n';
    }
    

    return 0;
}