#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string text;
    while(getline(cin,text)){
        string ftext;
        bool qstart=true;
        for(int i=0;i<text.size();i++){
            if(text[i]=='"' && qstart){
                ftext.push_back('`');
                ftext.push_back('`');
                qstart=false;
            }else if(text[i]=='"'){
                ftext.push_back('\'');
                ftext.push_back('\'');
                qstart=true;
            }else{
                ftext.push_back(text[i]);
            }

        }
        cout<<ftext<<"\n";

    }

    return 0;
}
