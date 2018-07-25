#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>=20 && b>=20 && c>=20){
            printf("good\n");
        }else{
            printf("bad\n");
        }
    }
    return 0;
}
