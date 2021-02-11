#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100005];
int mark[100005];
void DFS(int start,int color)
{
    mark[start]=color;
    for(int i=0;i<graph[start].size();i++)
    {
        int u=graph[start][i];
        if(mark[u] == 0)
            DFS(u,color);
    }
}
int main()
{
    int i,j,u,v,n,m,color=0;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
        if(!mark[i])
            DFS(i,++color);
    }
    for(i=1;i<=n;i++)
    {
        cout<<mark[i]<<"\t";
    }
    return 0;
}
