#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2,k1,k2;
    scanf("%d%d%d%d",&n1,&n2,&k1,&k2);
    vector<vector<int> > dp(n1,vector<int>(n2,0));
    for(int i=0;i<n1;i++)
        for(int j=0;j<n2;j++)
            printf("%d ",dp[i][j]);

    return 0;
}
