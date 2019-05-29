#include "PhieuMuon.h"

BanDoc PhieuMuon::getBanDoc()
{
	return this->xBanDoc;
}
Sachs PhieuMuon::getSach()
{
	return this->xSach;
}
DaTe PhieuMuon::getNgayMuon()
{
	return this->xNgayMuon;
}
DaTe PhieuMuon::getNgayTra()
{
	return this->xNgayTra;
}
int PhieuMuon::getMaPH()
{
	return this->nMaPH;
}
int PhieuMuon::getTrangThai()
{
	return this->nTrangThai;
}
void PhieuMuon::setTrangThai(int nA)
{
	this->nTrangThai = nA;
}
void PhieuMuon::setSach(Sachs S)
{
	this->xSach = S;
}
void PhieuMuon::setBanDoc(BanDoc xBD)
{
	this->xBanDoc = xBD;
}
