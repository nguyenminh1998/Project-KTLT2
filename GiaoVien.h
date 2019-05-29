#pragma once
#include "bandoc.h"
class GiaoVien :
	public BanDoc
{
	string sDC;
	int nSDT;
public:
	void output();
	GiaoVien(string sDC = "",int nSDT = 0,string sMaBD = "", string sHoTen = "", string sKhoa = "", int nNgay = 0, int nThang = 0, int nNam = 0): BanDoc(sMaBD,sHoTen,sKhoa,nNgay,nThang,nNam)
	{
		this->sDC = sDC;
		this->nSDT = nSDT;
	}
	~GiaoVien(void){};
};

