#pragma once
#include "bandoc.h"
class SinhVien :
	public BanDoc
{
	int nKhoaHoc;
public:
	void output();
	SinhVien(int nKhoaHoc = 0,string sMaBD = "", string sHoTen = "", string sKhoa = "", int nNgay = 0, int nThang = 0, int nNam = 0): BanDoc(sMaBD,sHoTen,sKhoa,nNgay,nThang,nNam)
	{
		this->nKhoaHoc = nKhoaHoc;
	}
	~SinhVien(void){};
};

