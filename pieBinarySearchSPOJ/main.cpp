#include <bits/stdc++.h>
#define pi 3.141592654
using namespace std;
bool predicate(const vector<double> &piece,int f,double md){
    int valid=0;
    for(int i=0;i<piece.size();++i){
        valid+=piece[i]/md;
    }
    return valid>=f;
}

double GetCorectPies(const vector<double> &piece,int f){
double low=0.00;
double high=0.00;
double md;
for(int i=0;i<piece.size();++i)high=max(high,piece[i]);
while(high-low>10e-15){
    md=low+(high-low)/2.0;
    if(predicate(piece,f,md)){
            low=md;
    }else{
            high=md;
    }
}
return low;
}

int main()
{

    int t;
    scanf("%d",&t);
    while(t--){
        int n,f;
        scanf("%d %d",&n,&f);
        vector<double> piece(n);
        int temp;
        for(int i=0;i<n;++i){
                scanf("%d",&temp);
                piece[i]=pi*(double)(temp*temp);
        }
        printf("%0.4f\n",GetCorectPies(piece,f+1));


    }

    return 0;
}
