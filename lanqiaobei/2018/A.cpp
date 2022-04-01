#include <iostream>
#include <cstring>
using namespace std;
char mp[1005][1005];//地图
int vis[1005][1005];//标记，是否搜索过
int dir[4][2]={{0,-1},{-1,0},{0,1},{1,0}};//四个搜索方向，我是按左，上，右，下 来进行的。
int flag;
void dfs(int i,int j)
{
    vis[i][j]=1;
    if(mp[i][j-1]=='#'&&mp[i-1][j]=='#'&&mp[i][j+1]=='#'&&mp[i+1][j]=='#')//是否存在不挨着海的一部分岛屿、
        flag=1;
    for(int k=0;k<4;k++)//搜索四个方向，并标记
    {
        int x=i+dir[k][0];
        int y=j+dir[k][1];
        if(mp[x][y]=='#'&&vis[x][y]==0)
        {
            vis[x][y]=1;//标记搜索过
            dfs(x,y);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> mp[i][j];
        }
    }
    memset(vis,0,sizeof(vis));
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mp[i][j]=='#'&&vis[i][j]==0){//如果存在岛屿且没有被搜索过
                flag=0;
                dfs(i,j);
                if(!flag)ans++;//岛屿被淹没的数量
            }
        }
    }
    cout << ans << endl;
    return 0;
}

