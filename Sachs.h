#pragma once
#include "DaTe.h"
using namespace std;
class DaTe;
class Sachs
{
private:
	string sMaSach, sTieuDe, sTacGia, sNXB;
	float fGia;
	int nNamPH, nSoTrang;
	DaTe xNgayNhapKho;
	int nTinhTrang;
public:
	string getMaSach();
	string getTieuDe();
	string getTacGia();
	string getNXB();
	float getGia();
	int getNamPH();
	int getSoTrang();
	void setMaSach(string sMS);
	void setTieuDe(string sTD);
	void setGia(float fGia);
	void setTacGia(string sTacGia);
	void setNXB(string sNXB);
	void setNamPH(int nNamPH);
	void setSoTrang(int nSoTrang);
	friend DaTe;
	void outputSach();
	Sachs(string sMaSach = "", string sTieuDe = "", string sTacGia = "", string sNXB = "",float fGia = 0.0, int nNamPH = 0, int nSoTrang = 0,int nTinhTrang = 0,int nNgay = 0, int nThang = 0, int nNam = 0): xNgayNhapKho(nNgay,nThang,nNam)
	{
		this->sMaSach = sMaSach;
		this->sTieuDe = sTieuDe;
		this->sTacGia = sTacGia;
		this->sNXB = sNXB;
		this->fGia = fGia;
		this->nNamPH = nNamPH;
		this->nSoTrang = nSoTrang;
		this->nTinhTrang = nTinhTrang;
	}
	~Sachs(void){};
};

