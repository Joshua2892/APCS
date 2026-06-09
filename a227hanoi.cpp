#include <iostream>
using namespace std;
void hanoi(int r,char s,char t,char g){
	if(r>0){
		hanoi(r-1,s,t,g);
		cout<<"move ring"<<r<<"from"<<s<<"to"<<t<<"\n";
		hanoi(r-1,t,s,g)
	}
}

int main() {
	int n;
	while(cin>>n){
		hanoi(n,'a','b','c');
		cout<<"\n";
	}
	return 0;
}
