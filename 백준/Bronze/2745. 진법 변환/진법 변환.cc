#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int charToDigit(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
     if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 10;
    }
     if (c >= 'a' && c <= 'z') {
        return c - 'a' + 10;
    }
     return -1;

}

int todecimal(string number, int b) {
    int decimalValue = 0;
    int power = number.length() - 1;

    for (char c : number) {
        int digit = charToDigit(c);
       

        decimalValue += digit * pow(b, power);
        power--;
    }

    return decimalValue;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string number;
    int b;
    
    cin >> number >> b;
    
    int decimalValue = todecimal(number, b);
    if (decimalValue != -1) 
    {
        cout <<  decimalValue << endl;
    }



    return 0;
}