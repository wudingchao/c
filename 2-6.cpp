#include<iostream>
using namespace std;
int main(){
	int a=8,b;
	a+=a*=a+a;
	cout<<"a+=a*=a+a;的结果是:a="<<a<<endl;
	a=8;
	a+=a*=a+=a;
	cout<<"a+=a*=a+a;的结果是:a="<<a<<endl;
	cout<<"b="<<(b=a)<<endl;
	return 0;
}