#include <bits/stdc++.h>
using namespace std;
int sumdivisor(int n){
int sum=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			sum+=i;
			if(i!=n/i)
				sum+=(n/i);
		}			         
	}
return sum;
}
bool isprime(int n){
   for(int i=2;i*i<=n;i++)
	if(n%i==0)return false;
return true;
}
void gen(){
 vector<int> sd;

	for(int i=1;i<1e6;i++){
		if(isprime(sumdivisor(i)))
			sd.push_back(i);
	}		
	printf("{");
	for(int i=0;i<sd.size();i++) printf("%d,",sd[i]);
	printf("}");

}

int main(){
int smd[]={2,4,9,16,25,64,289,729,1681,2401,3481,
	4096,5041,7921,10201,15625,17161,
	27889,28561,29929,65536,83521,85849,
	146689,262144,279841,458329,491401,531441,552049,579121,597529,
	683929,703921,707281,734449,829921};
int t,a,b;
scanf("%d",&t);
while(t--){
  scanf("%d%d",&a,&b);
   int cant=0;
	for(int i=0;smd[i]<=b;i++){
		if(smd[i]>=a && smd[i]<=b)
			cant++;
	}
	printf("%d\n",cant);
}	
return 0;
}