#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;
float mean(const std::vector<float>&);
std::pair<float, float> minMax(const std::vector<float>&);
int argmax(const vector<float>&);
void sort(std::vector<float>&);
bool remove_first_negative_element(const std::vector<int>& vec, int& removed_element);
std::string replace(const std::string& str, const std::string& old, const std::string& new_string);
std::vector<std::string> split(const std::string&, char sep);
std::string join(const std::vector<std::string>&, const std::string& sep);