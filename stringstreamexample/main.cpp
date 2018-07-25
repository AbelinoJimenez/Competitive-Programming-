#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    stringstream s;
    string cad;
    s<<23;
    s>>cad;
    s.clear();
    s<<42;
    s>>cad;
    cout << cad<< endl;
    return 0;
}
