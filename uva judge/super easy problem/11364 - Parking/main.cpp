#include <bits/stdc++.h>
#define REP(a,b)for(int i=a;i<b;++i)
using namespace std;

int main()
{
  // ios::sync_with_stdio(0);
   //cin.tie(0);
   int t;
  scanf("%d",&t);
   while(t--){
     int n;
     scanf("%d",&n);
     vector<int> x(n);
     REP(0,n)scanf("%d",&x[i]);
     int minval=x[0],maxval=x[0];
      REP(1,n){
         minval=min(minval,x[i]);
         maxval=max(maxval,x[i]);
      }

      printf("%d\n",2*(maxval-minval));

   }
    return 0;
}
