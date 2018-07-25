#include <bits/stdc++.h>
#define INF 1000000
using namespace std;

typedef pair<int, int> ii;

bool validate(int x,int y,int dx,int dy){
  if(x+dx<8 && x+dx>=0 && y+dy<8 && y+dy>=0 ) return true;

  return false;
}

int bfs(int x1,int y1,int x2,int y2){
 int dist[8][8];
// ii parent[8][8];

 int v=1,z=2;
 int moves[][2]{{-z,v},{-v,z},{v,z},{z,v},{z,-v},{v,-z},{-v,-z},{-z,-v}};
 memset(dist,-1,sizeof dist);
 queue<ii> cola;
 ii tmp;
 tmp.first=x1;
 tmp.second=y1;
 dist[x1][y1]=0;
 cola.push(tmp);

 while(!cola.empty()){
    int x=cola.front().first;
    int y=cola.front().second;
    cola.pop();
    if(x==x2 && y==y2)return dist[x2][y2];

    for(int i=0;i<8;++i){
            int dx=moves[i][0],dy=moves[i][1];
        if(validate(x,y,dx,dy)){
                if(dist[x+dx][y+dy]==-1){
                    dist[x+dx][y+dy]=dist[x][y]+1;
                    tmp.first=x+dx;
                    tmp.second=y+dy;
                    cola.push(tmp);
                }
        }
    }

 }

    return 0;

}


int main()
{

char a[3],b[3];
 while(scanf("%s%s",a,b)!=EOF){
         int y1=a[0]-'a';
         int x1=a[1]-'1';
         int y2=b[0]-'a';
         int x2=b[1]-'1';
     //   cout<<x1<<" "<<y1<<" | "<<x2<<" "<<y2<<"\n";
        printf("To get from %s to %s takes %d knight moves.\n",a,b,bfs(x1,y1,x2,y2));

 }
    return 0;
}
