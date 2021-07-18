//난쟁이
//다른 사람
#include<cstdio>
#include<algorithm>
using namespace std;
int a[9];
int main() {
	for (int i = 0; i < 9; i++) scanf("%d", &a[i]);
	sort(a, a + 9);
	while (next_permutation(a, a + 9)) { //조합 next_permutation(,)
		int sum = 0;
		for (int i = 0; i < 7; i++) sum += a[i];
		if (sum == 100) {
			for (int i = 0; i < 7; i++) printf("%d\n", a[i]);
			break;
		}
	}
}
//조합 안 쓴
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n=9;
int num;
int sum=0;
vector<int> vec;
    while(n-->0){
        cin>>num;
        vec.push_back(num);
        sum+=num;
        }
    sort(vec.begin(), vec.end());   
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<9;j++)
        {
           if(sum-vec[i]-vec[j]==100)
            {
                for(int k=0;k<9;k++)
                {
                    if(k!=i&&k!=j)
                        cout<<vec[k]<<'\n';                 
                }
             return 0;
           }
        }
    }
}
//
#include<iostream>
#include<algorithm>
#include<string>
#include <stdlib.h>
using namespace std;

int main() {
	int n;
	int sum=0;
	string str;
	cin>>n;
	cin>>str;
	for(int i=0;i<n;i++){
		sum+=(int)str[i]-(int)'0';          //char -> int  or (C) scanf("%1d",&a);
	}
	cout<<sum;
	return 0;
}
//string -> int 변환 : atoi(str.c_str());

//
#include <string>
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0);
   int n,a,b;
   vector<pair<int,int>> v;
   cin>>n;
   while(n-->0){
    cin>>a>>b;
    v.push_back({a,b});
   }
    vector<pair<int,int>>::iterator iter;
    sort(v.begin(),v.end());  
    for(iter=v.begin();iter!=v.end();iter++)
        cout<<iter->first<<" "<<iter->second<<'\n';
	}			
		
