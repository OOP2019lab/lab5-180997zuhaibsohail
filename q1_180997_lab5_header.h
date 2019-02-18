#include <iostream>
#include <string>
using namespace std;

class bankAccount
{
	string username;//initializing username variable
	int accountno;//initialing account no variable
public:
	float balance;//initialing balance variable
	float balancelimit;//initializing balance limit variable
	int* transactions;//initializing transaction pointer
	int total_no_of_transactions;//initializing total no of transactions variable
	int transize;//initializing transaction size variable
	float withdrawl;//initializing amount to be withdrawn variable
	float deposit;//initializing amount to be deposit variable
	bankAccount(string name,int account_no);//initialing constructor
	void print();//prototype of function print
	void withdraw(float amout);//prototypr of function withdrawn
	void depositamnt(float deposit);//prototype of function deposit amount
	void tran_size_increase();
	~bankAccount();//initializing destructor



};