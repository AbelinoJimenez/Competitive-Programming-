#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str1,str2;
    cin>>str1>>str2;
    int position=0,step=0,cantdp=0;
    for(int i=0;i<str1.size();++i){
        if(str1[i]=='+')position++;
        else position--;

        if(str2[i]=='+')step++;
        else if(str2[i]=='-') step--;
        else cantdp++;
    }
   // cantdp=str2.size()-step;

    int odd=0,cant=0;
    for(int i=0;i<(1<<cantdp);++i){
         cant=0;
         for(int j=1;j<=cantdp;j++){
            if((i&1<<j)!=0)cant++;
            else cant--;
         }
        if(position==step+cant)odd++;
    }
    int divs=1<<cantdp;
    printf("%0.9f",(double)odd/(double)divs);
    return 0;
}
