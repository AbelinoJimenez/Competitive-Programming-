#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k,m,n;
    while(scanf("%d",&k)==1 && k>0){
        int x=0,y=0;
            scanf("%d %d",&n,&m);
        while(k--){
            scanf("%d %d",&x,&y);
            x-=n;
            y-=m;
            if(x==0 || y==0){
                printf("divisa\n");
            }else if(x>0 && y>0){
                printf("NE\n");
            }else if(y<0 && x>0){
                printf("SE\n");
            }else if(x<0 && y<0){
                printf("SO\n");
            }else if(x<0 && y>0){
                printf("NO\n");
            }
        }
    }
    return 0;
}
