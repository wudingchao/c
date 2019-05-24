#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int daysofmonth(int m);
int weekday,year;
void counthead(int m){
	cout<<"\n";
	int i;
	cout<<m<<"月    日   一   二   三   四   五   六"<<endl;
	cout<<"    ";
	for(i=0;i<weekday;i++){
		cout<<"     ";
	}
}
int firstday(int y){
	double s;
	s=floor(year-1+(year-1)/4-(year-1)/100+(year-1)/400+1);
	return (int)s%7;
}
int countmonth(int m){
	int i,days;
	counthead(m);

	days=daysofmonth(m);
	for(i=1;i<=days;i++){
		cout<<setw(5)<<i;
		weekday=(weekday+1)%7;
		if(weekday==0)cout<<"\n"<<"    ";
	}

}
int daysofmonth(int m){
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:return 31;
		case 4:
		case 6:
		case 9:
		case 11:return 30;
		case 2:
			if(((year%4==0&&year%100!=0)||year%400==0))
				return 29;
			else
				return 28;
		default:return 0;

		}

	}

int main(int argc,char* argv[]){
	cout<<"请输入年份："<<endl;
	cin>>year;
	weekday=firstday(year);
	cout<<"                       "<<year<<"                      "<<endl;
	for(int i=1;i<=12;i++){
		countmonth(i);
	}
	return 0;
}

