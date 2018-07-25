#include <bits/stdc++.h>

using namespace std;

int main()
{
string str;
int t=0;
while(cin>>str && str!="#"){
    t++;
    if(str=="HOLA"){
        printf("Case %d: SPANISH\n",t);
    }else if(str=="HELLO"){
        printf("Case %d: ENGLISH",t);
    }else if(str=="HALLO"){
        printf("Case %d: GERMAN\n",t);
    }else if(str=="BONJOUR"){
        printf("Case %d: FRENCH\n",t);
    }else if(str=="CIAO"){
        printf("Case %d: ITALIAN\n",t);
    }else if(str=="ZDRAVSTVUJTE"){
        printf("Case %d: RUSSIAN\n",t);
    }else{
        printf("Case %d: UNKNOWN\n",t);
    }
}

    return 0;
}
