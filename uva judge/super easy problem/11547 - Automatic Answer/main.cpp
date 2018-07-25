#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    scanf("%d",&t);
    while(t--){
        int n,rest;
        scanf("%d",&n);
        rest=((((((n*567/9)+7492)*235)/47)-498)%100)/10;
        if(rest<0)rest*=-1;
        printf("%d\n",rest);

    }
    return 0;
}
