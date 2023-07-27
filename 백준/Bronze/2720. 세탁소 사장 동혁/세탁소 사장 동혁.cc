#include <iostream> <string> <cstring>  <algorithm> <cmath>
#include <vector>


using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
   
       
    int Quarter = 25;
    int Dime = 10;
    int Nickel = 5;
    int Penny = 1;
    int T, C;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> C;
        int a = C;
        int q = a / Quarter;
        a %= Quarter;
        int d = a / Dime;
        a %= Dime;
        int n = a / Nickel;
        a %= Nickel;
        int p = a;
        cout << q << " " << d << " " << n << " " << p << endl;
    }
   




    return 0;
}