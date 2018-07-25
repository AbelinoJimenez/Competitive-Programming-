#include <bits/stdc++.h>

using namespace std;

int main()
{
int t;
scanf("%d",&t);
while(t--){
    int n;
    int l,r,tmp;
    scanf("%d",&n);
   // vector<int> ls(n,0);

    for(int i=0;i<n;++i){
            scanf("%d",&tmp);
        if(i!=0){
            if(r>tmp)r=tmp;
            if(l<tmp)l=tmp;
        }else{
            l=r=tmp;
        }
    }
    printf("%d\n",2*(l-r));

}
    return 0;
}
