#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> buildingHeight(n);
    vector<int> result(n, 0); // 초기화: 모든 수신 탑의 인덱스를 0으로 설정

    for (int i = 0; i < n; i++) {
        cin >> buildingHeight[i];
    }

    stack<int> indices; // 인덱스를 저장하는 스택
    for (int i = 0; i < n; i++) {
        while (!indices.empty() && buildingHeight[indices.top()] < buildingHeight[i]) {
            indices.pop(); // 현재 빌딩보다 낮은 높이의 빌딩은 수신할 수 없으므로 스택에서 제거
        }
        if (!indices.empty()) {
            result[i] = indices.top() + 1; // 현재 빌딩의 인덱스를 저장
        }
        indices.push(i); // 현재 빌딩의 인덱스를 스택에 저장
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << "\n";

    return 0;
}