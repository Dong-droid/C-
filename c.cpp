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
//국영수
#include<ostream>
#include <iostream>
#include <vector>
#include <algorithm> 
 using namespace std;
 static vector<pair<pair<string,int>,pair<int,int>>> v;
     bool sorting(pair<pair<string,int>,pair<int,int>> a,pair<pair<string,int>,pair<int,int>> b) {
    if (a.first.second == b.first.second){
          if(a.second.first==b.second.first){
          		if(a.second.second==b.second.second){
               return a.first.first<b.first.first;
          		}
                return a.second.second>b.second.second;
          }
           return a.second.first<b.second.first;
           }
     return a.first.second > b.first.second;  
    }
    int main() { 
    int n,k,e,m;
    string name;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name>>k>>e>>m;
        v.push_back(make_pair(make_pair(name,k),make_pair(e,m)));      
    }  
    
    sort(v.begin(),v.end(),sorting);
    for(auto x:v)
       cout<<x.first.first<<'\n';
   return 0;
}
