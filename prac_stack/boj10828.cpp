#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 10005;
typedef int element;

class Stack{
private:
	element arr[MAX_SIZE];
	int now;
public:
	Stack(){
		now=0;
	}
	~Stack(){
		now=-1;
	}
	void push(element val){
		arr[now++]=val;
	}
	int pop(){
		return this->empty()?-1:arr[--now];
	}
	int size(){
		return now;
	}
	bool empty(){
		return now==0;
	}
	int top(){
		return this->empty()?-1:arr[now-1];
	}
};

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	freopen("output.txt","w",stdout);
	int i,j;
	int n;
	Stack stk;
	cin>>n;
	for(i=0;i<n;i++){
		string str;
		cin>>str;
		if(str=="push"){
			cin>>j;
			stk.push(j);
		}
		else if(str=="pop"){
			cout<<stk.pop()<<'\n';
		}
		else if(str=="size"){
			cout<<stk.size()<<'\n';
		}
		else if(str=="empty"){
			cout<<stk.empty()<<'\n';
		}
		else if(str=="top"){
			cout<<stk.top()<<'\n';
		}


	}
}