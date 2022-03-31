#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 110;
typedef pair<int, int> PII;
PII q[N*N],Prev[N][N];
int g[N][N], d[N][N];
int n, m;
int bfs()
{
    int hh = 0, tt = 0;
    q[0] = {0, 0};
    memset(d, -1, sizeof d);

    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    d[0][0] = 0;
    while(hh <= tt)
    {
        PII t = q[hh ++ ];
        for(int i = 0; i < 4; i ++ )
        {
            int x = dx[i] + t.first, y = t.second + dy[i];

            if(x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
            {
                d[x][y] = d[t.first][t.second] + 1;
                Prev[x][y] = t;
                q[++ tt] = {x, y};
            }
        }
    }
    int x = n - 1, y = m - 1;
    while(x || y)//有一个不d等于0
    {
        cout << x << ' ' << y << endl;
        PII t = Prev[x][y];
        x = t.first, y = t.second;
    }

    return d[n - 1][m - 1];
}
int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i ++ )
        for(int j = 0; j < m;j ++)
            cin >> g[i][j];

    cout << bfs() << endl;

    return 0;
}
