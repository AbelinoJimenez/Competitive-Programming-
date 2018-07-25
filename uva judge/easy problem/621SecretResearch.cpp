#include <bits/stdc++.h>
using namespace std;
int main(){
 int t;
scanf("%d",&t);
while(t--){
string num;
cin>>num;
	int sz=num.size()-1;
	if(num=="78" || num=="1"|| num=="4")
	            printf("+\n");
	else if(num[sz]=='5' && num[sz-1]=='3')
	           printf("-\n");
	else if(num[0]=='9' && num[sz]=='4')
	       		printf("*\n");
	else if(sz>=2 && num[0]=='1' && num[1]=='9' && num[2]=='0')
	        printf("?\n");
}          
return 0;
}