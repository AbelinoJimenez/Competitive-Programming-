#include <bits/stdc++.h>

using namespace std;


int toint(const string &s){
int c=0;
int len=s.length(),mult=1;
while(len--){
    c+=(s[len]-'0')*mult;
    mult*=10;

}
return c;

}

string tostring(int n){
stringstream s;
string cad;
s<<n;
s>>cad;
return cad;
}
int main()
{
cout<<tostring(toint("1242"));

    return 0;
}
