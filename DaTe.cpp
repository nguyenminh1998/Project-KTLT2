#include "DaTe.h"

int DaTe::getNgay()
{
	return this->nNgay;
}
int DaTe::getThang()
{
	return this->nThang;
}
int DaTe::getNam()
{
	return this->nNam;
}
void DaTe::setNgay(int nNgay)
{
	this->nNgay = nNgay;
}
void DaTe::setThang(int nThang)
{
	this->nThang = nThang;
}
void DaTe::setNam(int nNam)
{
	this->nNam = nNam;
}
void DaTe::outputDate()
{
	cout << this->nNam << " - " << this->nThang << " - " << this->nNam << endl;
}
