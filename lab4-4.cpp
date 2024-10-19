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

int argmax(const vector<float>& vec)
{
    if (vec.size() > 0){
        float maxx = 0;
        int maxIndex;
        for(int i=0; i<vec.size(); ++i){
            if (vec[i]>maxx){
                maxx = vec[i];
                maxIndex = i;
            }
        }
        return maxIndex;
    } 
    return -1;
}

void sort(vector<float>& vec)
{
    vector<float> vec1 (vec.size());
    for(int i=0; i<vec.size(); ++i){
        int maxx = argmax(vec);
        vec1[i] = vec[maxx];
        vec[maxx] = 0;
    }
    for(int i=0; i<vec.size(); ++i){
        cout << vec1[i] << endl;
    }
}

int main()
{
    vector<float> v = generate_random_vector<float>(10, 1, 100);
    sort(v);
}