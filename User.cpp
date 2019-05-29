#include "User.h"

string User::getAccount()
{
	return this->sAccount;
}
string User::getPass()
{
	return this->sPass;
}
void User::setAccount(string a)
{
	this->sAccount = a;
}
void User::setPass(string b)
{
	this->sPass = b;
}