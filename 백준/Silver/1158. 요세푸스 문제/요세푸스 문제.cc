#include<list>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, k;
    cin >> n >> k;

    vector<int>nk(n);   //크기가 n인 배열 선언

    list<int>nklist;    //int 형 연결리스트 선언
    for (int i = 0; i < n; ++i)
    {
        nk[i] = i + 1;                    //nk[0]=1~ nk[n-1]=n 자연수 채워넣기
    }

    for (auto a : nk)
    {
        nklist.push_back(a);                     //배열을 nklist에 담아놓기
       
    }
    auto cursor = nklist.begin();
    cout << "<";

    while (n > 1) // 마지막 원소가 남을 때까지 반복
    {
        int jump = (k - 1) % n; // 현재 위치에서 k-1만큼 점프

        for (int i = 0; i < jump; ++i)
        {
            ++cursor;
            if (cursor == nklist.end())
            {
                cursor = nklist.begin();
            }
        }

        auto next_cursor = std::next(cursor);
        cout << *cursor;

        cursor = nklist.erase(cursor);
        if (cursor == nklist.end())
        {
            cursor = nklist.begin();
        }

        cout << ", ";
        n--;
    }

    cout << *nklist.begin() << ">";


 
    return 0;
}