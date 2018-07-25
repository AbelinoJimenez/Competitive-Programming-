#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<b;i++)
using namespace std;


int main()
{
char letter[]={'1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','T','Y','U','I','O','P','[',']','\\',
                'A','S','D','F','G','H','J','K','L',';','\'',
                'Z','X','C','V','B','N','M',',','.','/',' '};


string str;

    while(getline(cin,str)){

        char *token=strtok((char *)str.c_str()," ");
        while(token){
           cout<<token<<" tamanyo:%d"<<;
            token=strtok(0," ");


        }
    }
    return 0;
}
