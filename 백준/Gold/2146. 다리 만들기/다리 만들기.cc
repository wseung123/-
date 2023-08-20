#include<iostream>
#include<vector> 
#include<stack>
#include<string>
#include<list>
#include<queue>
#include<deque>
#include<tuple>
using namespace std;
#define X first
#define Y second
#define MAX 101

int board[MAX][MAX], n = 0, ans = 1e9, my[] = { 1,-1,0,0 }, mx[] = { 0,0,1,-1 }, nx, ny, xx, yy;
vector<pair<int, int>>v;





void label_land(int y, int x, int idx)
{
    queue<pair<int, int>>q;
    q.push({ y,x });
    while (!q.empty())
    {
        bool edge = false;
        yy = q.front().X;
        xx = q.front().Y;
        board[yy][xx] = idx;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            ny = yy + my[i];
            nx = xx + mx[i];
            if (ny > 0 && ny <= n && nx > 0 && nx <= n && board[ny][nx] < 0)
            {
                board[ny][nx] = idx;
                q.push({ ny,nx });
            }
            else if (ny > 0 && ny <= n && nx > 0 && nx <= n && board[ny][nx] == 0) edge = true;

        }
        if (edge) v.push_back({ yy,xx });
    }
}
void distance_circulate()
{
    int temp = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        yy = v[i].X;
        xx = v[i].Y;
        for (int j = i + 1; j < v.size(); j++)
        {
            ny = v[j].X;
            nx = v[j].Y;
            if (board[yy][xx] > 0 && board[ny][nx] > 0 && board[yy][xx] != board[ny][nx]) {
                temp = abs(yy - ny) + abs(xx - nx) - 1;
                if (ans > temp) ans = temp;

            }
        }
    }
}


void input()
{
    int label = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> board[i][j];
            if (board[i][j] != 0) board[i][j] = -1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (board[i][j] < 0)
            {
                label_land(i, j, label++);
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    input();
    distance_circulate();
    cout << ans << '\n';
  
    
}