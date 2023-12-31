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

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

char board[1000][1000];
int dist[1000][1000][2];
int n, m;

bool OOB(int x, int y)
{
    return x < 0 || x >= n || y < 0 || y >= m;
}
int bfs()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dist[i][j][0] = dist[i][j][1] = -1;
           

        }
    }
    dist[0][0][0] = dist[0][0][1] = 1;
    queue<tuple<int, int, int>>q;
    q.push({ 0,0,0 });
    while (!q.empty())
    {
        int x, y, broke;
        tie(x, y, broke) = q.front();
        if (x == n - 1 && y == m - 1) return dist[x][y][broke];
        q.pop();
        int nextdist = dist[x][y][broke] + 1;
        for (int d = 0; d < 4; d++)
        {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (OOB(nx, ny))continue;
            if (board[nx][ny] == '0' && dist[nx][ny][broke] == -1)
            {
                dist[nx][ny][broke] = nextdist;
                q.push({ nx,ny,broke });
            }
            if (!broke && board[nx][ny] == '1' && dist[nx][ny][1] == -1)
            {
                dist[nx][ny][1] = nextdist;
                q.push({ nx,ny,1 });
            }
        }
    }
    return -1;


}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];

        }
    }
    cout << bfs();
    
}