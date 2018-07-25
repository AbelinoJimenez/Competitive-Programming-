#include <bits/stdc++.h>
#define MAX 102   
#define mp  make_pair   
#define INF 1e9                                                                     
using namespace std;
typedef pair<int,int> pii;

int tmouse[MAX][MAX];      
int tcat[MAX][MAX];
bool validm[MAX][MAX];
bool validc[MAX][MAX];

void bfsc(int x,int y,int n,int m){
queue<pii> q;
tcat[x-1][y-1]=0;
q.push(mp(x-1,y-1));
	while(!q.empty()){                                                                                          
		int xq=q.front().first;
		int yq=q.front().second;
		 q.pop();
		if(validc[xq][yq])continue;
		if(yq-1>=0 && !validc[xq][yq-1]){
			q.push(mp(xq,yq-1));
			tcat[xq][yq-1]=tcat[xq][yq]+1;
		}	
		if(xq-1>=0&& !validc[xq-1][yq]){
			q.push(mp(xq-1,yq));
			tcat[xq-1][yq]=tcat[xq][yq]+1;
		}             
		if(yq+1<m&& !validc[xq][yq+1]){
			q.push(mp(xq,xq+1));
			tcat[xq][yq+1]=tcat[xq][yq]+1;
		}
		if(xq+1<n && !validc[xq+1][yq]){
			q.push(mp(xq+1,yq));
			tcat[xq+1][yq]=tcat[xq][yq]+1;
		}	                               
		validc[xq][yq]=true;
	}	
}

void bfsm(int x,int y,int n,int m){
queue<pii> q;
tmouse[x-1][y-1]=0;
q.push(mp(x-1,y-1));
	while(!q.empty()){                                                                                          
		int xq=q.front().first;
		int yq=q.front().second; q.pop();
		if(validm[xq][yq])continue;
		if(yq-1>=0 && !validm[xq][yq-1]){
			q.push(mp(xq,yq-1));
			tmouse[xq][yq-1]=tcat[xq][yq]+1;
		}	
		if(xq-1>=0 && !validm[xq-1][yq]){
			q.push(mp(xq-1,yq));
			tmouse[xq-1][yq]=tcat[xq][yq]+1;
		}             
		if(yq+1<m && !validm[xq][yq-1]){
			q.push(mp(xq,xq+1));
			tmouse[xq][yq+1]=tcat[xq][yq]+1;
		}
		if(xq+1<n && !validm[xq+1][yq]){
			q.push(mp(xq+1,yq));
			tmouse[xq+1][yq]=tcat[xq][yq]+1;
		}	                               
		validm[xq][yq]=true;
	}	
}


bool isMovVald(int n,int m){
	for(int i=0;i<n;i++){
		if(tcat[i][0]<tmouse[i][0] || tcat[i][m-1]<tmouse[i][m-1])
			return true;
		if(tcat[0][i]<tmouse[0][i] || tcat[n-1][i]<tmouse[n-1][i])
			return true;
	}
return false;
	
}
                                                                                                          
int main(){
int n,m,k;
scanf("%d%d%d",&n,&m,&k);                                                 
while(k--){
 int rx,ry,mx1,my1,mx2,my2;
	scanf("%d%d%d%d%d%d",&rx,&ry,&mx1,&my1,&mx2,&my2);
	memset(tmouse,-1,sizeof tmouse);
	memset(tcat,-1,sizeof tcat);
	memset(validm,false,sizeof validm) ;
	memset(validc,false,sizeof validc);
	bfsc(rx,ry,n,m);
	bfsm(mx1,my1,n,m);
	if(isMovVald(n,m)){                                                                                            
		printf("YES\n");
		continue;
	}
	memset(tmouse,-1,sizeof tmouse);
	bfsm(mx2,my2,n,m);
	if(isMovVald(n,m))
		printf("YES\n");
	else 
		printf("NO\n");
}
            return 0;
}