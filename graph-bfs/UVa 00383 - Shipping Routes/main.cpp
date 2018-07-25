#include <bits/stdc++.h>
#define MAXSIZE 30
using namespace std;
bool g[MAXSIZE][MAXSIZE];
int searchgraph(string nod,const vector<string> &wh){
    for(int i=0;i<wh.size();++i){
        if(nod==wh[i])
            return i;
    }

return -1;
}
int bfs(const vector<string> &wh,string source,string destin){
vector<int> dist(wh.size(),-1);
vector<bool> visit(wh.size(),0);
int s=searchgraph(source,wh);
dist[s]=0;
visit[s]=1;
queue<int> q;
q.push(s);
while(!q.empty()){
    s=q.front();q.pop();
    if(s==searchgraph(destin,wh))return dist[s];
    for(int i=0;i<wh.size();++i){
        if(g[s][i]==1 && visit[i]!=1){
            dist[i]=dist[s]+1;
            visit[i]=1;
            q.push(i);
        }
    }
}


return dist[searchgraph(destin,wh)];
}

int main()
{
int t;
scanf("%d",&t);
for(int tt=1;tt<=t;++tt){
    int m,n,p;
    memset(g,0,sizeof g);
    vector<string> wh;
    char str[3];
    scanf("%d%d%d",&m,&n,&p);
    for(int i=0;i<m;++i){
        scanf("%s",str);
        wh.push_back(string(str));
    }
    while(n--){
        char str1[3],str2[3];
            scanf("%s%s",str1,str2);
            g[searchgraph(string(str1),wh)][searchgraph(string(str2),wh)]=1;
            g[searchgraph(string(str2),wh)][searchgraph(string(str1),wh)]=1;
    }
    if(tt==1)printf("SHIPPING ROUTES OUTPUT\n");
    printf("\nDATA SET %d\n\n",tt);

    while(p--){
    int sz=1;
    char source[3],destin[3];
    scanf("%d %s %s",&sz,source,destin);
    sz*=100;
    int dist=bfs(wh,string(source),string(destin));
        if(dist>=0){
                sz*=dist;
                printf("$%d\n",sz);
        }else{
            printf("NO SHIPMENT POSSIBLE\n");
        }

    }


}
printf("\nEND OF OUTPUT");

    return 0;
}
