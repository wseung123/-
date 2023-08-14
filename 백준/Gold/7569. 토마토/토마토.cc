#include<iostream>
#include<vector> 
#include<stack>
#include<string>
#include<list>
#include<queue>
#include<deque>
#include<tuple>
using namespace std;


int board[103][103][103];
int dist[103][103][103];
int n, m, h;
int dx[6] = { 0,0,1,-1,0,0 };
int dy[6] = { 1,-1,0,0,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };

queue<tuple<int, int, int>> q;


int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    cin >> m >> n >> h;
  
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                int tmp;
                cin >> tmp;
                board[j][k][i] = tmp;
                if (tmp == 1) q.push({ j,k,i });
                if (tmp == 0) dist[j][k][i] = -1;

            }
        }
    }
    while (!q.empty())
    {
        auto cur = q.front(); q.pop();
        int curx, cury, curz;
        tie(curx, cury, curz) = cur;
        for (int dir = 0; dir < 6; dir++)
        {
            int nx = curx + dx[dir];
            int ny = cury + dy[dir];
            int nz = curz + dz[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) continue;
            if (dist[nx][ny][nz] >= 0) continue;
            dist[nx][ny][nz] = dist[curx][cury][curz] + 1;
            q.push({ nx, ny, nz });

        }
    }
    int cnt = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (dist[j][k][i] == -1)
                {
                    cout << -1 << '\n';
                    return 0;
                }
                cnt = max(cnt , dist[j][k][i]);
            }
        }
    }

    cout << cnt << '\n';
    return 0;
}