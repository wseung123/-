#include <iostream> <string> <cstring>  <algorithm> <cmath>
#include <vector>


using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    int b, len;
    long long result;
    char s;
    vector<char> a;
    vector<long long> exp;
    cin >> result >> b;
    long long v = 1;
    int time = 1;
    exp.push_back(1);
    while (true) {
        v = v * b;
        if (v <= result) {
            exp.push_back(v);
            time++;
        }
        else if (v > result) {
            len = time;
            break;
        }
    }
    for (int i = 0; i < len; i++) {
        int q = result / exp[len - i - 1];
        result = result - q * exp[len - i - 1];
        if (q > 9) {
            s = 'A' + (q - 10);
        }
        else {
            s = '0' + q;
        }
        a.push_back(s);
    }
    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
    }



    return 0;
}