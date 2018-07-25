#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef vector<int> vi;
struct nodo{
  int d;
  int parent;
  int v;
  bool operator<(const state& s) const
  {
	return d<s.d;h

  }
};

typedef vector<int> vi;
typedef struct nodo state;
typedef priority_queue<state> pqi;
int main(){
int tt;
scanf("%d",&tt);
int t=tt;


while(t--){
int n;                           
scanf("%d",&n);
vi   g(n,vi());
vi dist(n,0);
vector<bool> vist(n,false);
       for(int c=0;c<n-1;c++){
	int u,v,d;
	scanf("%d%d%d",&u,&v,&d);
	        state n={d,-1,v};
		g[u].push_back(n);
		n={d,-1,u};
		g[v].push_back(n);
	}
	for(int c=0;c<n;c++){
	   if(vist[c]) continue;
		pqi q;
		q.push(g[i][0]);

		
	}         
 }

return 0;
}