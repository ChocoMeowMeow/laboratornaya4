#include <iostream>
#include <string>
using namespace std;

string replace(const string& str, const string& old, const string& new_string){
    string strr = str;
    int n = strr.find(old);
    while (string::npos != n){
        strr.erase(n, old.size());
        strr.insert(n, new_string);
        n = strr.find(old);
    }
    return strr;
}

int main()
{
    string stroka;
    string old_str;
    string new_str;
    cin >> stroka;
    cin >> old_str;
    cin >> new_str;
    cout << replace(stroka, old_str, new_str) << endl;
    
}