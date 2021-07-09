#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> vec;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        vec.push_back(i + 1);
         cout << vec[i]; 
    }
        
    for (int i = 0; i < n; i++) {
        
        if (i == n - 1) {
            i = 0;
        }
        if (v.size() == n)
            break; 
        v.push_back(vec[k]);
        vec.erase(vec.begin() + (k-1));
    }
    for (int i = 0; i < v.size();i++) {
        if (i == 0)
            cout << "<" << v[i] << ",";
        else if (i == v.size()-1) cout << v[i] << ">";
        else cout << v[i] << ",";
    }
    return 0;
}