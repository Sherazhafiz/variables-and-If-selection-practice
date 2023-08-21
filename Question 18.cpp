#include<iostream>
using namespace std;

int main(){
	int a,b,c,d,e,f;
	cout<<"enter a four digit number ";
	cin>>a;
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	a=a/10;
	e=a%10;
	f= b*1000 + c*100 + d*10 +e;
	if(f%2==1)
	cout<<"the revers number is odd ";
	else
	cout<<"the revers number is even";
	
}
	
