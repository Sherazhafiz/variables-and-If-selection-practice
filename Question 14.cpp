#include<iostream>
using namespace std;

int main(){
	int x,y;
	cout<<"input first number."<<endl;
	cin>>x;
	cout<<"input second number.\n";
	cin>>y;
	if(x==y)
	cout<<x<<" is equal to "<<y<<endl;
	if(x!=y)
	cout<<x<<" is not equal to "<<y<<endl;
	if(x>y)
	cout<<x<<" is greater then "<<y<<endl;
	if(x<y)
	cout<<x<<" is less then "<<y<<endl;
	if(x<=y)
	cout<<x<<" is less or equal to "<<y<<endl;
	if(x>=y)
	cout<<x<<" is greater or equal to "<<y<<endl;
	
	return 0;
}
