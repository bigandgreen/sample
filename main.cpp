#include<bits/stdc++.h>
#include "stack.h"
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("output.txt","w",stdout);
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
