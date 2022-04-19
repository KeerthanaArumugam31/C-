#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter x:";
	cin>>x;
	if(x>0){
		cout<<"Positive number";
	}
	else if(x==0){
		cout<<"Equal to zero";
	}
	else{
		cout<<"Negative number";
	}
	return 0;
}
