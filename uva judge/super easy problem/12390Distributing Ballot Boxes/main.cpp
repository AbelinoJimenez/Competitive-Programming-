#include <bits/stdc++.h>
#define FORN(a,b) for(int i=a;i<b;++i)

using namespace std;

bool asignation(const vector<int> &city,int md,int b){
//int valor=0;
for(int i=0;i<city.size();++i){
    if(city[i]/md==0)return 0;
        b-=city[i]/md;
}
return  b<=0;
}

int ballotbox(const vector<int> &city,int b){
 int low=1,high=1;
 FORN(0,city.size())high=max(high,city[i]);
 int md;
 while(high>low){
    md=low+(high-low+1)/2;
    if(asignation(city,md,b)){
        low=md;
    }else{
        high=md-1;
    }
 }
 return low;
}

int main()
{
 int n,b;
    while(scanf("%d %d",&n,&b) && n!=-1 && b!=-1) {
        vector<int> city(n);
        for(int i=0;i<city.size();++i)scanf("%d",&city[i]);
        printf("%d\n",ballotbox(city,b));
    }
    return 0;
}
