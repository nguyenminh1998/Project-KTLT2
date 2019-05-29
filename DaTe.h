#pragma once
#include <iostream>
#include <string>
using namespace std;
class DaTe
{
	int nNgay, nThang, nNam;
public:
	int getNgay();
	int getThang();
	int getNam();
	void setNgay(int nNgay);
	void setThang(int nThang);
	void setNam(int nNam);
	void outputDate();
	DaTe(int nNgay = 0, int nThang = 0, int nNam = 0)
	{
		this->nNgay = nNgay;
		this->nThang = nThang;
		this->nNam = nNam;
	}
	~DaTe(void){};
};

