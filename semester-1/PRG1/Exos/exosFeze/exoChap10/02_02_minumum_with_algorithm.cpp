#include <span>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// Function to find the index of the minimum element in a span
template<typename T>
size_t indice_min(span<T> s) {
    return min_element(s.begin(), s.end()) - s.begin();
}

// Selection sort function using span
template<typename T>
void tri(vector<T>& v) {
    span<T> s(v);
    for (size_t i = 0; i < v.size(); ++i) {
        size_t i_min = i + indice_min(s.subspan(i));
        swap(v[i], v[i_min]);
    }
}

int main() {
    vector<int> vec = {64, 25, 12, 22, 11};
    tri(vec);

    // Print sorted vector
    for (const auto& val : vec) {
        cout << val << " ";
    }

    return 0;
}
//
// Created by asus on 06.01.2025.
//
