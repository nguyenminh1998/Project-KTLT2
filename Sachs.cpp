#include "Sachs.h"

void Sachs::outputSach()
{
	cout << "=============================================\n";
	cout << "Ma sach : " << this->sMaSach << "   Tieu de: " << this->sTieuDe << endl;
	cout << "Tac gia: " << this->sTacGia << endl;
	cout << "Nha xuat ban: " << this->sNXB << endl;
	cout << "Gia ban: " << this->fGia << endl;
	cout << "Nam phat hanh: " << this->nNamPH << endl;
	cout << "So trang: " << this->nSoTrang << endl;
	cout << "Ngay nhap kho: " << this->xNgayNhapKho.getNgay() << "/" << this->xNgayNhapKho.getThang() << "/" << this->xNgayNhapKho.getNam();
	cout << endl;
}
string Sachs::getTacGia()
{
	return this->sTacGia;
}
string Sachs::getNXB()
{
	return this->sNXB;
}
float Sachs::getGia()
{
	return this->fGia;
}
int Sachs::getNamPH()
{
	return this->nNamPH;
}
void Sachs::setGia(float fGia)
{
	this->fGia = fGia;
}
int Sachs::getSoTrang()
{
	return this->nSoTrang;
}
string Sachs::getMaSach()
{
	return this->sMaSach;
}
string Sachs::getTieuDe()
{
	return this->sTieuDe;
}
void Sachs::setMaSach(string sMS)
{
	this->sMaSach = sMS;
}
void Sachs::setTieuDe(string sTD)
{
	this->sTieuDe = sTD;
}
void Sachs::setTacGia(string sTacGia)
{
	this->sTacGia = sTacGia;
}
void Sachs::setNXB(string sNXB)
{
	this->sNXB = sNXB;
}
void Sachs::setNamPH(int nNamPH)
{
	this->nNamPH = nNamPH;
}
void Sachs::setSoTrang(int nSoTrang)
{
	this->nSoTrang = nSoTrang;
}