#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<string> myset={"red","green","blue"};
    unordered_set<string>::const_iterator itr=myset.find("gren");
    if(itr!=myset.end())
        cout<<*itr<<"\n";
    else
        cout<<"error\n";
    myset.insert("yellow");
    vector<string> vec ={"purple","pink"};
    myset.insert(vec.begin(),vec.end());

    cout<<"load_factor= "<<myset.load_factor()<<"\n";
    string x="red";
    cout<<x<<" is in bucket #"<<myset.bucket(x)<<"\n";

    cout<<"Total bucket #"<<myset.bucket_count()<<endl;
    return 0;
}
