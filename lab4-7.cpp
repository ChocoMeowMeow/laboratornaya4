#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(const string& str, char sep){
    string strr = str;
    vector<string> vec;
    int n = strr.find(sep);
    while (string::npos != n){
        string strrCopy = strr;
        string k = strrCopy.erase(n);
        strr.erase(0, 1);
        vec.emplace_back(k);
        strr.erase(n-k.size(), k.size());
        n = strr.find(sep);
    }
    vec.emplace_back(strr);
    return vec;
}

int main()
{
    string stroka;
    char sepp;
    cin >> stroka;
    cin >> sepp;
    vector<string> vect = split(stroka, sepp);
    for(int i=0; i<vect.size(); ++i){
        cout << vect[i] << endl;
    }
    
}