#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
scanf("%d",&t); 
while(t--){
int n;
getchar();
scanf("%d",&n);
int sum=0;
	for(int i=0;i<n;i++){
		int tmp;
		scanf("%d",&tmp);
		sum+=tmp;
	}
 	if(sum%n==0)printf("YES\n");
 	else printf("NO\n");
}
return 0;
}                   