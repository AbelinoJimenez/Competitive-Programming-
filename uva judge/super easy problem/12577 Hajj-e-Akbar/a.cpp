#include <bits/stdc++.h>
using namespace std;

int main(){
string cad;
cin>>cad;
int t=1;
while(cad!="*"){
	if(cad=="Hajj")
		printf("Case %d: Hajj-e-Akbar\n",t);
	else 
		printf("Case %d: Hajj-e-Asghar\n",t);
	cin>>cad;
	t++;
}
return 0;
}