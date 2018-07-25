#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    scanf("%d",&t);
     string s;
    while(t--){
        cin>>s;
        if(s.size()==5){
            printf("3\n");
        }else if(s[0]=='t'){
            printf("2\n");
        }else{
            printf("1\n");
        }
    }
    return 0;
}
