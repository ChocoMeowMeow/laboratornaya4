#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

template<class T>
vector<T> generate_random_vector(size_t num, T min = -10, T max = 10)
{
    random_device rd;
    mt19937 e2(rd());
    uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist] () -> T { return dist(e2); };

    vector<T> result(num);
    generate_n(result.begin(), num, lambda);
    return result;
}

bool remove_first_negative_element(vector<int>& vec, int& removed_element)
{
    removed_element = 0;
    for(int i=0; i<vec.size(); ++i){
        if (vec[i]<0){
            removed_element = vec[i];
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> v = generate_random_vector<int>(10, -100, 100);
    int element = 0;
    int *el{&element};
    cout << remove_first_negative_element(v, *el) << endl;
    cout << element << endl;
}