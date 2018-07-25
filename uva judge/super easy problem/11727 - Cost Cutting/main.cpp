#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,tt=0;

    scanf("%d",&t);
    vector<int> salarie(3,0);
    for(int tt=1;tt<=t;tt++){
        for(int i=0;i<salarie.size();++i)scanf("%d",&salarie[i]);
      sort(salarie.begin(),salarie.end());
      printf("Case %d: %d\n",tt,salarie[1]);

    }
    return 0;
}
