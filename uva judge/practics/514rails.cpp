#include <bits/stdc++.h>
#define INF 10000;
using namespace std;

int main(){
int n;
while(scanf("%d",&n) && n!=0){        
	while(true){

	int prev=0,rprev=INF;
	bool israils=true,isrrails=true,inside=true;
		for(int i=0;i<n;i++){
			int tmp;
			scanf("%d",&tmp);
			if(tmp==0){   
				inside=false;
				break;
			}
			if(prev<tmp)prev=tmp;
			else israils=false;	
			if(rprev>tmp)rprev=tmp;
			else isrrails=false;
		}

		if(!inside)break;
		if(israils || isrrails)printf("Yes\n");
		else printf("No\n");



	}	
}

return 0;
}