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

float mean(const vector<float>& vec)
{
    float summ = 0;
    for(int i=0; i<vec.size(); ++i){
        summ += vec[i];
    }
    return (summ/vec.size());
}

int main()
{
    vector<float> v = generate_random_vector<float>(10, 1, 100);
    cout << mean(v) << endl;
}