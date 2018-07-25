#include <bits/stdc++.h>
#define FORN(a,b) for(int i=a;i<b;i++)
using namespace std;
bool isvalid(const vector<int> &candy,int val,int k){
int cant=0;
for(int i=0;i<candy.size();++i)cant+=(candy[i]/val);

return cant>=k;
}

int getcandy(const vector<int> &candy,int k){
int low=1,high=1;
int md;
FORN(0,candy.size())high=max(high,candy[i]);

while(high-low>0){
    md=low+(high-low+1)/2;
    if(isvalid(candy,md,k)){
        low=md;
    }else{
        high=md-1;
    }

}

return low ;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
int t;
scanf("%d",&t);
while(t--){
int n,k;
scanf("%d %d",&n,&k);
    vector<int> candy(n);
    FORN(0,n)scanf("%d",&candy[i]);
    printf("%d\n",getcandy(candy,k));
}
    return 0;
}
