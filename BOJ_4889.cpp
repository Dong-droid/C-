#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    bool flag = true;
    int num_of_dataset = 1;
  
    while(true){ 
        string input; 
        cin>>input; 
        stack<char> s;  
        int num_open_bracket = 0, num_close_bracket = 0;
        for(int i = 0; i < input.length(); i++){
            if(input[i] == '-') {flag = false; break;}
            if(!s.empty() && s.top()== '{' && input[i] == '}') s.pop();
            else s.push(input[i]);
        }
        if(!flag) break;
        while(!s.empty()){
            if(s.top() == '{') num_open_bracket++;
            else num_close_bracket++;
            s.pop();
        }
        cout<<num_of_dataset++<<". "<<(num_open_bracket + 1) / 2 + (num_close_bracket + 1) / 2 <<'\n';
    }
    return 0;
}