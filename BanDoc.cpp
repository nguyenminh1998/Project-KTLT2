#include "BanDoc.h"

string BanDoc::getSoBD()
{
	return this->sMaBD;
}
void BanDoc::xuatBD()
{
	cout << "========================================\n";
	cout << "Ma ban doc: " << this->sMaBD << endl;
	cout << "Ho ten: " << this->sHoTen << endl;
	cout << "Khoa: " << this->sKhoa << endl;
	cout << "Ngay DK: "; 
	this->xNgayDK.outputDate();
	cout << endl;
}