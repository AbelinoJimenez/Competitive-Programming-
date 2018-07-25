#include <bits/stdc++.h>

using namespace std;


int rev(string &x){
stringstream s;
string num;
int numeric;
bool istrailingzero=true;
for(int i=x.size()-1;i>=0;--i){
	if(istrailingzero==false || x[i]!='0'){
		num.push_back(x[i]);
		istrailingzero=false;
	}
}
s<<num;
s>>numeric;
return numeric;


}

int main() {
int t;
scanf("%d",&t);
while(t--){
int x,y,res;
string x1,y1,res1;
stringstream s;
	scanf("%d %d",&x,&y);
	s<<x;
	s>>x1;
	x=rev(x1);
	s.clear();
	s<<y;
	s>>y1;
	y=rev(y1);
	//printf("%d %d",x,y);
	res=x+y;
	s.clear();
	s<<res;
	s>>res1;
	printf("%d ",rev(res1));

}
	return 0;
}
