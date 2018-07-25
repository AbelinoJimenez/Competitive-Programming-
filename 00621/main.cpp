#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    scanf("%d",&t);
    while(t--){
        string s;
        string positive[]={"1","4","78"};
        cin>>s;

        if(s==positive[0] || s==positive[1] || s==positive[2]){
            printf("+\n");
        }else if(s[s.size()-2]=='3' && s[s.size()-1]=='5'){
            printf("-\n");
        }else if(s[0]=='9' && s[s.size()-1]=='4'){
            printf("*\n");
        }else{
            printf("?\n");
        }

    }
        return 0;
}
