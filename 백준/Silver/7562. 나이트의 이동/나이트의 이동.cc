#include<iostream>
#include<vector> 
#include<stack>
#include<string>
#include<list>
#include<queue>
#include<deque>
#include<tuple>
using namespace std;
#define x first
#define y second

int board[301][301];
bool visit[301][301];

int dx[8] = { 1,2,-1,-2,1,2,-1,-2 };
int dy[8] = { 2,1,2,1,-2,-1,-2,-1 };
int t, n, i, j, aa, bb;



void bfs(int i, int j )
{
   
  
    queue<pair<int, int>>q;
    q.push({ i,j });
    visit[i][j] = 1;


    while (!q.empty())
    {
       
         
        pair<int, int>cur = q.front(); q.pop();

        if (cur.x == aa && cur.y == bb)
        {
            cout << board[cur.x][cur.y] << '\n';
            return;
        }
        for (int d = 0; d < 8; d++)
        {
            int nx = cur.x + dx[d];
            int ny = cur.y + dy[d];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (visit[nx][ny] || board[nx][ny]) continue;
            visit[nx][ny] = 1;
            board[nx][ny] = board[cur.x][cur.y] + 1;
            q.push({ nx,ny });
        }
       
    }
}


int main(void)

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t;
    while (t--)
    {
        cin >> n;
        
        cin >> i >> j;
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                board[x][y] = 0;
                visit[x][y] = false;

            }
          
         }
        cin >> aa >> bb;
        bfs(i, j);
    }

}