#pragma once
#include <iostream>

using namespace std;
class Loai{
public:
	int loai;
	bool rh;
	bool rhesus[8];

	Loai(){
		rh = true;
		loai = 0;
	}

	Loai(const int &_loai){
		loai = _loai;
	}

	Loai(const bool &_rh){
		rh = _rh;
	}

	void setLoai(const int &_loai) { loai = _loai; }
	int getLoai() { return loai; }

	void setRH(const int &_rh) { rh = _rh; }
	int getRH() { return rh; }

	bool getRhesus(int index) { return rhesus[index]; }
	int getIndexRheus(){
		if (this->loai == 1) {
			if (this->rh == false) 
				return 0;
			else return 1;
		}
		if (this->loai == 2) {
			if (this->rh == false) 
				return 2;
			else return 3;
		}
		if (this->loai == 3) {
			if (this->rh == false) 
				return 4;
			else return 5;
		}
		if (this->loai == 4) {
			if (this->rh == false) 
				return 6;
			else return 7;
		}
		return -1;
	}

	void setRhesus(bool value, int index) { rhesus[index] = value; }

	virtual void NhapRH(){
		int temp;
		cout << "Nhap loai Rh (1. rh+, 0. rh-): ";
		cin >> temp;
		if (temp == 0) { rh = false; }
		if (temp == 1) { rh = true; }
	}

	virtual bool KiemTraChaMe(Loai* Cha, Loai* Me){
		return true;
	}
};

