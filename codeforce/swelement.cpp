#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
#define for1(a,n) for(int i=a;i<n;i++)
using namespace std;
typedef vector<int> vi;

int array[200002];
int n;        
string pos;
bool issortpos(){
   for1(1,n)
	if(pos[i]=='1' && array[i]>array[i+1])	
		return false;
return true;
}
bool poof(){ 
int num=array[0];
	forn(i,n){
		if(num>array[i])return false;	
		num=array[i];	
	}
 	return true;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);	
scanf("%d",&n);
	
	forn(i,n)scanf("%d",&array[i]); 
	cin>>pos;
	bool isvalid=true;
	while(!poof() && !issortpos()){
		for(int i=1;i<n-1;i++)
			if(pos[i-1]=='1' && array[i]<array[i+1])
				swap(array[i],array[i+1]); 
	}
	 if(poof())printf("YES\n");
	else printf("NO\n");	
	
	

return 0;
}