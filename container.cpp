#include <iostream>
#include <algorithm>

struct singly_ll_node
{
	int data;
	singly_ll_node* next;
};
class singly_ll
{
public:
	using node = singly_ll_node;
	using node_ptr = node*;
private:
	node_ptr head;
public:
	void push_front(int val) 
	{
		auto new_node = new node(val, NULL);
		if (head != NULL)
			new_node->next = head;
		head = new_node;
	}
	void pop_front()
	{
		auto first = head;
		if (head)
		{
			head = head->next;
			delete first;
		}
	}
};
struct singly_ll_iterator
{
private:
	node_ptr ptr;

public:
	singly_ll_iterator(node_ptr p) :ptr(p) {}

	int& operator*() { return ptr->data; }

	node_ptr get() { return ptr; }

	singly_ll_iterator& operater++()
	{
		ptr = ptr->next;
		return *this;

	}
	singly_ll_iterator& operater++(int)
	{
		singly_ll_iterator result = *this;
		++(*this);
		return result;
	}
	friend bool operator==(const singly_ll_iterator& left, const singly_ll_iterator& right)
	{
		return left.ptr == right.ptr;
	}
	firend bool operator!=(const singly_ll_iterator& left, const singly_ll_iterator& right)
	{
		return left.ptr != right.ptr;
	}
	singly_ll_iterator begin() { return singly_ll_iterator(head); }
	singly_ll_iterator end() { return singly_ll_iterator(NULL); }
	singly_ll_iterator begin() const{ return singly_ll_iterator(head); }
	singly_ll_iterator begin() const{ return singly_ll_iterator(NULL); }
};
singly_ll() = default;
singly_ll(const singly_ll& other) : head(NULL)
{
	if (other.head)
	{
		head = new node{ 0,NULL };
		auto cur = head;
		auto it = other.begin();
		while (true)
		{
			cur->data = *it;
			auto tmp = it;
			++tmp;
			if (tmp == other.end())
				break;

			cur->next = new node{ 0,NULL };
			cur = cur->next;
			it = tmp;
		}
	}
};
singly_ll(const std::initializer_list<int>& ilist) : head(NULL)
{
	for (auto it = std::rbegin(ilist); it != std::rend(ilist); it++)
		push_front(*it);
};
int main()
{

	singly_ll sll = { 1,2,3 };
	sll.push_front(0);

	std::cout << "첫번째 리스트:";
	for (auto i : sll)
		std::cout << i << " ";
	std::cout << std::endl;

	auto sll2 = sll;
	sll2.push_front(-1);
	std::push_front(-1);
	std::cout << "첫번째 리스트를 복사한 후,맨 앞에 -1을 추가";
	for (auto i : sll2)
		std::cout << i << ' ';
	std::cout << std::endl;
	std::cout << "깊은 복사 후 첫 번째 리스트:";

	for (auto i : sll)
		std::cout << i << ' ';
	std::cout << std::endl;

}

##vector,pair 연습
##첼시를 도와줘

#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    
    int a,b,n;
    string str;
    vector<pair<int,string>> v;
    cin>>n;
    while(n-->0){
        cin>>a;
        v.clear();    
        for(int i=0;i<a;i++){
        cin >> b>>str;
        v.push_back({b,str});
        }
        sort(v.begin(),v.end());
        vector<pair<int, string> >::iterator iter;
        iter=v.end()-1;
        cout<<iter->second<<'\n';
        
        }
	
#pair를 안 쓰면,
	#include<stdio.h>

int main(void){
	int n, m, i, j;
	char a[100][21] = {};
	scanf("%d", &n);
	for(i=0; i<n; i++){
		int b, l, max = 0;
		scanf("%d", &m);
		for(j=0; j<m; j++){
			scanf("%d %s", &b, a[j]);
			if(b > max){
				max = b;
				l = j;  //최대값 비교,정렬
			}
		}
		printf("%s\n", a[l]);
	}
}
