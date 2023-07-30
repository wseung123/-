#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int x_min = 20000, y_min = 20000, x_max = -20000, y_max = -20000;

    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;

        // 좌표 중 최소와 최대 값을 구합니다.
        x_min = min(x_min, a);
        y_min = min(y_min, b);
        x_max = max(x_max, a);
        y_max = max(y_max, b);
    }
   
    // 최소 크기의 사각형의 넓이를 구합니다.
    int width = x_max - x_min;
    int height = y_max - y_min;
    int area = width * height;

    cout << area << endl;

    return 0;
}