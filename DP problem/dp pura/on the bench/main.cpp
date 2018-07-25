#include <bits/stdc++.h>
#define MODS 10e9 + 7
using namespace std;

int main()
{

    int n;
    scanf("%d",&n);
    vector<int> a(n);
    for(int i=0;i<n;++i)scanf("%d",&a[i]);
    vector<long long> dp(n+1,0);
    bool valcont=false;
    for(int k=1;k<=n;++k){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sri=sqrt(a[i]*a[j]),count=0;
                float srf=sqrt(a[i]*a[j]);

                 if(sri!=srf && i!=j){
                    dp[k]=(dp[k]+1)%(long long)MODS;
                 }else{
                     dp[k]=dp[k-1];
                 }
            }
        }
    dp[k]=dp[k]%(long long)MODS;

    }
    dp[n]=dp[n]%(long long)MODS;
    printf("%d\n",dp[n]);


    return 0;
}
