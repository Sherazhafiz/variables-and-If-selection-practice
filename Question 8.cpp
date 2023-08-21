#include<iostream>
using namespace std;

int main(){
	float Rupees,dollar,euro,pond;
	cout<<"Enter the amount in Pak Rupees "<<endl;
	cin>>Rupees;
	dollar=Rupees/135;
	euro=Rupees/140;
	pond=Rupees/170;
	cout<<"Given amount in dollars = "<<dollar<<"dollars"<<endl;
	cout<<"Given amount in ponds = "<<euro<<"euro"<<endl;
	cout<<"Given amount in euros = "<<pond<<"pond"<<endl;
	return 0;
}
