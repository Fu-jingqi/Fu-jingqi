#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int> 
typedef long long ll;
typedef unsigned long long ull;
const int INF=0x3f3f3f3f;
const int Mod=1e9+7;
const int maxn = 1011;
int w[maxn];
int fa[maxn][maxn];
struct node
{
    int l,r;
};
map<PII,int>s;
void dfs(int l,int r)
{
    PII now;
    now.first=l;
    now.second=r;
    if(r==l+2){
        int k=s[now];
        cout<<"Multiply A" << l<<","<<k-1<<" and A"<<k<<","<<r-1<<endl;
        return ;
    }
    else {
        int k=s[now];
        if(k>=l+2)
        dfs(l,k);
        if(r>=k+2)
        dfs(k,r);
        cout<<"Multiply A" << l<<","<<k-1<<" and A"<<k<<","<<r-1<<endl;
    }
    return ;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    memset(fa,INF,sizeof fa);
    for(int i=1;i<=n;i++)
        fa[i][i+1]=0;
    for(int i=1;i<=n+1;i++) cin>>w[i];
    for(int len=3;len<=n+1;len++)
    {
        for(int l=1;l+len-1<=n+1;l++)
        {
            int r=l+len-1;
            for(int k=l+1;k<r;k++)
            {
                PII now;
                now.first=l;
                now.second=r;
                if(fa[l][k]+fa[k][r]+w[l]*w[k]*w[r]<fa[l][r])
                {
                    s[now]=k;
                }
                fa[l][r]=min(fa[l][r],fa[l][k]+fa[k][r]+w[l]*w[k]*w[r]);
            }
        }
    }
	cout<<fa[1][n+1]<<endl;
    dfs(1,n+1);
    return 0;
}    

