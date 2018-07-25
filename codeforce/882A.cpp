#include <bits/stdc++.h>
using namespace std;
long long factorial(int a){
	if(a==2)return 2;
  return a*factorial(a-1);
}

int main(){
int a,b;
scanf("%d%d",&a,&b);
long long f=1;
for(int i=2;i<=min(a,b);i++)f*=i;
printf("%lld\n",f);
return 0;
}