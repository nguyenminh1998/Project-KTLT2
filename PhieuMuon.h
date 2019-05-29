#pragma once
#include <time.h>
#include "BanDoc.h"
#include "Sachs.h"
class BanDoc;
class Sachs;
class DaTe;
class PhieuMuon
{
	BanDoc xBanDoc;
	Sachs xSach;
	DaTe xNgayMuon, xNgayTra;
	static int nTongPM;
	int nMaPH;
	int nTrangThai;
public:
	friend BanDoc;
	friend DaTe;
	friend Sachs;
	BanDoc getBanDoc();
	Sachs getSach();
	DaTe getNgayMuon();
	DaTe getNgayTra();
	int getMaPH();
	int getTrangThai();
	void setTrangThai(int nA);
	void setSach(Sachs S);
	void setBanDoc(BanDoc xBD);
	PhieuMuon(int nMaPH,string, string sMaBD = "", string sMaSach = "",int a = 0, int b = 0, int c = 0, int d = 0, int e = 0, int f = 0, int nTrangThai = 0): xBanDoc(sMaBD), xSach(sMaSach), xNgayMuon(a,b,c), xNgayTra(d,e,f)
	{
		this->nTongPM++;
		this->nMaPH = this->nTongPM;
		this->nTrangThai = nTrangThai;
	}
	PhieuMuon(void)
	{
		nMaPH = 0;
	}
	PhieuMuon(string sMaBD = "",string sMaSach = ""): xBanDoc(sMaBD), xSach(sMaSach)
	{
		time_t rawtime;
		struct tm *info;
		time(&rawtime);
		info = localtime(&rawtime);
		xNgayMuon.setNgay(info->tm_mday);
		xNgayMuon.setThang(info->tm_mon + 1);
		xNgayMuon.setNam(info->tm_year + 1900);
		xNgayTra.setNgay(info->tm_mday + 7);
		xNgayTra.setThang(info->tm_mon + 1);
		xNgayTra.setNam(info->tm_year + 1900);
		this->nTongPM++;
		this->nMaPH = this->nTongPM;
		this->nTrangThai = 1;
	}
	~PhieuMuon(void){};
};

