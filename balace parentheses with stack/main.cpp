#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

bool contrario(char stackval,char strval){
    if((strval=='}' && stackval=='{') || (strval==')' && stackval=='('))return true;
    else return false;
}

bool isbalancedParenth(const string str){
    stack<int> s;
    for(int i=0;i<str.size();++i){
        if(str[i]=='(' || str[i]=='{'){
            s.push(str[i]);
        }else if(str[i]==')' || str[i]=='}'){
            if(s.empty() || !contrario(s.top(),str[i])){
              return false;
            }
        }else{
            s.pop();
        }
    }
    return s.empty()?true:false;
}


int main()
{
    string cad;
    getline(cin,cad);
    if(isbalancedParenth(cad))printf("is balanced string");
    else printf("is not balanced string");

    return 0;
}
