#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    vector<vector<int> > g(n,vector<int>());
    vector<int> dist(n,-1);
    int w,x;
    while(m--){
        scanf("%d%d",&w,&x);
        g[w-1].push_back(x-1);
        g[x-1].push_back(w-1);
    }
    queue<int> q;
    dist[0]=0;
    q.push(g[0][0]);
    while(!q.empty()){
        int v=q.front();q.pop();
        for(int i=0;i<g[v].size();++i){
            int u=g[v][i];
            if(dist[u]==-1){
                dist[u]=dist[v]+1;
                q.push(u);
            }
        }
    }
    bool istree=true;
    for(int i=0;i<n;i++)
        if(dist[i]==-1)istree=false;

    if(istree)printf("YES\n");
    else printf("NO\n");
    return 0;
}
