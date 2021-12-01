#include<bits/stdc++.h>
const int MAX_SIZE = 100005;
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
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("output.txt","w",stdout);
	int input;
    int sum = 0;
    Stack stk;
    cin>>input;
    for(int i=0;i<input;i++){
        int nextinput;
        cin>>nextinput;
        if(nextinput!=0){
            stk.push(nextinput);
        }else{
            stk.pop();
        }
    }
    while(stk.empty()!=1){
        sum += stk.pop();
    }
    cout<<sum;
}
