#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int h,u,d,f;
    while(scanf("%d %d %d %d",&h,&u,&d,&f)==4){
            if(h==0)return 0;

        bool issuccess=false;
        double fatigue=((double)f/100.00)*(double)u;
        double uless=u;
        double height=0;
        int day=0;

        while(true){

            height+=uless;

            height-=d;
            uless-=fatigue;
            day++;
            if(height>=h){
                issuccess=true;
                break;

            }else if(height<0){
                issuccess=true;
                break;
            }

        }
        if(issuccess)printf("success on day %d",day);
        else printf("failure on day %d",day);

    }
    return 0;
}
