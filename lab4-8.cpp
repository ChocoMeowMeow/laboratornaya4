#include <iostream>
#include <string>
#include <vector>
using namespace std;

string join(const vector<string>& vec, const string& sep){
    string str;
    str.append(vec[0]);
    for(int i=1; i<vec.size(); ++i){
        str.append(sep);
        str.append(vec[i]);
    }
    return str;
}

int main()
{
    vector<string> vect = {"Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?"};
    string sepp;
    cin >> sepp;
    cout << join(vect, sepp) << endl;
    
}