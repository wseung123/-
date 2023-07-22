#include <bits/stdc++.h>

int main()
{

    //최적화
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int N = 0;
    std::string a;
    std::string b;
    int First_String_Length = 0;
    int Last_String_Length = 0;
    int input1_cnt[26] = { 0, };
    int input2_cnt[26] = { 0, };
    
    std::cin >> N;
    

    for (int i = 0; i < N; i++)
    {
        std::cin >> a >> b;
        First_String_Length = a.length();
        Last_String_Length = b.length();
        //문자열 길이 체크
        if (First_String_Length == Last_String_Length)
        {
            //각 문자열에 등장한 알파벳의 개수를 센다
            for (int i = 0; i < a.size(); i++)
            {
                input1_cnt[a[i] - 'a']++;
            }
            for (int i = 0; i < b.size(); i++)
            {
                input2_cnt[b[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                if (input1_cnt[i] != input2_cnt[i])
                {
                    std::cout << "Impossible" << "\n";
                    break;
                }

                //알파벳의 개수가 다른것이 없을때
                if (i == 25)
                {
                    std::cout << "Possible" << "\n";
                }
            }
            std::fill(input1_cnt, input1_cnt + 26, 0);
            std::fill(input2_cnt, input2_cnt + 26, 0);
        }
        else
        {
            std::cout << "Impossible\n";
        }
    }


    return 0;
}
