#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    scanf("%d",&t);
    int sum=0;
    while(t--){
    string str;
        getline(cin,str);
        int donate=0;
        if(str=="report")printf("%d\n",sum);
        else{
            const char *s=str.c_str();
            sscanf(s,"donate %d",&donate);
             sum+=donate;
        }


    }
    return 0;
}
