#include <bits/stdc++.h>

using namespace std;

typedef map<string,int> mp;
typedef map<int,string> mpis;
typedef vector<vector<int> > vii;

vector<int> degree(10000,1);


void topologicasort(const vii &g, mpis &index){
   queue<int> q;
    int i=0;
    while(g[i][0]!=0){
        if(degree[i]==0){
            q.push(i);
            break;
        }
        i++;
    }
    printf("   %d   ",q.front());

    while(!q.empty()){
        int source=q.front();q.pop();
        int dist=g[source][0];
        degree[source]--;
        if(degree[source]==0){
               // string a=index[source];
               // string b=index[dist];
               // cout<<a<<"-"<<b;
               printf("hola \n");
            q.push(dist);

        }

    }
}


int main(){
int tt;
scanf("%d",&tt);
for(int t=1;t<=tt;t++){
int n;
mp name;
mpis index;
vii g(10002,vector<int>(1) );
scanf("%d",&n);
int i=0;
while(n--){
    string a,b;
    cin>>a>>b;
    if(name.find(a)==name.end()){
        name[a]=i;
        index[i]=a;
        i++;
    }else{
        degree[name[a]]++;
    }
    if(name.find(b)==name.end())
    {
        name[b]=i;
        index[i]=b;
        i++;
    }else{
        degree[name[b]]++;
    }
    g[name[a]][0]=name[b];
}
printf("Case #%d: ",t);
topologicasort(g,index);
}

return 0;
}
