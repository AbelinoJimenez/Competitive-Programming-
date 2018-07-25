#include <bits/stdc++.h>
using namespace std;

typedef map<int,int>::iterator mpi;
typedef map<int,int>  mp;


int main()
{
freopen("C:\\Users\\wwwca\\Downloads\\A-small-attempt0.in","r+",stdin);
freopen("C:\\Users\\wwwca\\Downloads\\output.txt","w+",stdout);

int tt;
   scanf("%d",&tt);
   for(int t=1;t<=tt;t++){
    int n;
    mp citys;
    mp pars;
    scanf("%d",&n);

    int i=0;
    while(n--){
        int a,b;
        scanf("%d%d",&a,&b);
        if(citys.find(a)==citys.end()){
            citys[a]=i;
            i++;
        }
        if(citys.find(b)==citys.end()){
            citys[b]=i;
            i++;
        }
            pars[a]=b;

    }
 vector<int> counter(i+1,0);
            for(mpi it=pars.begin();it!=pars.end();it++){
                    mpi jt;
                   for(jt=citys.find(it->first);(jt->first)<(it->second);jt++)
                    {
                        counter[jt->second]+=1;
                    }
                    if((jt->first)==(it->second))
                     counter[jt->second]++;
            }
    int p;
    scanf("%d",&p);
    printf("Case #%d: ",t);
    while(p--){
        int num;
        scanf("%d",&num);
        if(p==0)
            printf("%d",counter[citys[num]]);
        else
            printf("%d ",counter[citys[num]]);
    }
    printf("\n");
    getchar();
   }

return 0;
}
