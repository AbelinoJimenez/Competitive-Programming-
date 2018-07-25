#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
        while(t--){

            int f,a,b,c;
            int total=0;
            scanf("%d",&f);
            for(int i=0;i<f;++i){
             cin>>a>>b>>c;
             total+=a*c;
            }
            t>0?printf("%d\n",total):printf("%d",total);

        }
    return 0;
}
