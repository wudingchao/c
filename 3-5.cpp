#include<iostream>
using namespace std;
int main(){
	cout<<"please enter the model:(x is xiali,f is fukang, s is sangtana)"<<endl;
	char m;
	cin>>m;
	cout<<"please enter the distance:"<<endl;
	int n;
	cin>>n;
	if(n>0){
		switch(m){
			double k;
			case 'x':
			k=(n<=3)?7:(7+(n-3)*2.1);
			cout<<"the cost you need to pay is:"<<k<<endl; break;
			case 'f':
			k=(n<=3)?8:((n-3)*2.4+8);
			cout<<"the cost	you need to pay is:"<<k<<endl; break;
			case 's':
			k=(n<=3)?9:((n-3)*2.7+9);
			cout<<"the cost you need to pay is:"<<k<<endl; break;
			default: cout<<"no this car"<<endl;	
			}
		}
	else
		cout<<"error"<<endl;
	}