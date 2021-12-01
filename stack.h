const int MAX_SIZE = 10005;
typedef int element;class Stack{
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