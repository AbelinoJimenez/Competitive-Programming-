#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);


    int n,t=0;

while(scanf("%d",&n)==1 && n>0){
    int emoogle,timesupposed=0;
    for(int i=0;i<n;++i){
            scanf("%d",&emoogle);
            if(emoogle)timesupposed++;
    }
  // int result=(n-timesupposed);
    printf("Case %d: %d\n",++t,2*timesupposed-n);

}

    return 0;
}
