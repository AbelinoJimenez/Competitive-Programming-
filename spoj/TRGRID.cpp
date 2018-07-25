#include <bits/stdc++.h>
using  namespace std;
int main(){
 int t;                  
scanf("%d",&t);
while(t--){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<=m){
		if(n%2)
			printf("R\n");
		else 
			printf("L\n");
	}else{
		if(m%2)
			printf("D\n");
		else
			printf("U\n");
	}
}
return 0;
}