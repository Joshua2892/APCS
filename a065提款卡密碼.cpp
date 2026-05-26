//============================================================================
// Name        : apcs.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int s) {
	for(int i=0;i< s.size()-1;i++){
		int d=abs(s[i]-s[i+1]);
		cout<<d;
	} // @suppress("Method cannot be resolved")
	return 0;
}
