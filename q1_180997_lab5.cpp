#include "bankAccount.h"


bankAccount :: bankAccount(string name,int account_no)
{
	username=name;
	transize=10;
	accountno=account_no;
	transactions=new int[transize];
	transactions=nullptr;
	balance=0;
	total_no_of_transactions=0;
	balancelimit=200000;
}
void bankAccount :: print()
{
	cout<<"Account holders name is :"<<username<<endl;
    cout<<"Account number is : "<<accountno<<endl;
    cout<<"the amount in account is : "<<balance<<endl;
	cout<<"balance limit is: "<<balancelimit<<endl;
	cout<<"Total number of transactions is: "<<total_no_of_transactions<<endl;
    cout<<"transaction no: "<<transactions<<endl;
}
void bankAccount :: withdraw(float amout)
{
	if(total_no_of_transactions<transize && amout<balance)
	{
	balance=balance-amout;
	cout<<"balance is "<<balance<<endl;
	if(amout<balancelimit && amout<balance)
	{
		cout<<"transaction successful."<<endl;
		total_no_of_transactions++;
	}
	else
	{
		cout<<"insufficient balance"<<endl;
	}
	}
	cout<<"no of transactions are "<<total_no_of_transactions<<endl;
}

void bankAccount :: depositamnt(float deposit)
{
	balance=balance+deposit;
	if(balance<balancelimit)
	    {
			cout<<"transaction successful"<<endl;
			cout<<"balance after deposit is : "<<balance<<endl;
			total_no_of_transactions++;
		}
	else
		{
			cout<<"transaction insuccessful"<<endl;
			cout<<"enter deposit amount less than 2,00,000"<<endl;
		}
	cout<<"no of transactions are "<<total_no_of_transactions<<endl;
}

void bankAccount :: tran_size_increase()
{
	if(total_no_of_transactions==transize)
	{
		int *array_wth_doublesize=new int[transize*2];
		for(int i=0;i<transize;i++)
		{
			array_wth_doublesize[i]=transactions[i];
		}
		delete[]transactions;
		transactions=nullptr;
		transactions=new int[transize*2];
		for(int i=0;i<transize;i++)
		{
			transactions[i]=array_wth_doublesize[i];
		}
	}



}


bankAccount :: ~bankAccount()
{
	delete []transactions;
	transactions=nullptr;
}
