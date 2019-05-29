#pragma once
#include <iostream>
#include <string>
using namespace std;
class User
{
	string sAccount, sPass;
public:
	string getAccount();
	string getPass();
	void setAccount(string a);
	void setPass(string b);
	User(string sAccount = "", string sPass = "")
	{
		this->sAccount = sAccount;
		this->sPass = sPass;
	}
	~User(void){};
};

