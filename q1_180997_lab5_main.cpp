// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "bankAccount.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{

	int a;
	int amout;
	int deposit;
	bankAccount accountinfo("myaccount",549002);
	accountinfo.print();
	cout<<"enter amount to be withdrawned : "<<endl;
	cin>>amout;
	accountinfo.withdraw(amout);
	cout<<"to deposit amount :"<<endl;

	//accountinfo.depositamnt(50000);
	for(int i=0;i<10;i++)
	{
		cout<<"amount to deposit"<<endl;
		cin>>a;
		accountinfo.depositamnt(a);

	}
	system("pause");
	return 0;
}

