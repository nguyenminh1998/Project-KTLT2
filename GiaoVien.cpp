#include "GiaoVien.h"


void GiaoVien::output()
{
	BanDoc::xuatBD();
	cout << "Dia chi: " << this->sDC << endl;
	cout << "SDT: " << this->nSDT << endl;
}
