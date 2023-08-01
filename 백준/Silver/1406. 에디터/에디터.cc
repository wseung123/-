#include<list>
#include<iostream>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    //BOJ 1406 에디터
    string edit;
    cin >> edit;

    list<char> L;
    for (auto c : edit)L.push_back(c);
    auto cursor = L.end();
    int a;
    cin >> a;
    while (a--)
    {
        char o;
        cin >> o;
        if (o == 'P')
        {
            char add;
            cin >> add;
            L.insert(cursor, add);
        }
        else if (o == 'L')
        {
            if (cursor != L.begin()) cursor--;

        }
        else if (o == 'D')
        {
            if (cursor != L.end()) cursor++;
        }
        else {

            if (cursor != L.begin())
            {
                cursor--;
                cursor = L.erase(cursor);

            }
        }
    }

    for (auto c : L) cout << c;




    return 0;
}