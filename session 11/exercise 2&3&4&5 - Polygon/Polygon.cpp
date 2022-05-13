#pragma once
#include "Polygon.h"

Polygon::Polygon(){
	nPoint = 0;
	Point[0].x = Point[0].y = 0;
}

Polygon::Polygon(int n, Coordinate A[1000]){
	this->nPoint = n;
	this->Point[1000] = A[1000];
}

Polygon::~Polygon() {}

void Polygon::GetInput(){
	cout << "1.Tu giac: " << endl << "2.Ngu giac: " << "3.Tam giac: " << endl;
	cout << "Nhap option: "; cin >> sw;
	if (sw == 1){
		cout << "Toa do tung Point cua tu giac: " << endl;
		for (int i = 0; i < 4; i++){
			cout << "Toa do Point thu " << i + 1 << ": ";
			cin >> Point[i].x >> Point[i].y;
		}
	}
	else if (sw == 2){
		cout << "Toa do tung Point cua ngu giac: " << endl;
		for (int i = 0; i < 5; i++){
		    cout << "Toa do Point thu " << i + 1 << ": ";
			cin >> Point[i].x >> Point[i].y;
		}
	}
	else{
		cout << "Toa do tam giac: ";
		for (int i = 0; i < 3; i++){
			cout << endl << "Toa do diem thu " << i + 1 << ": ";
			cout << Point[i].x << " " << Point[i].y;
		}
		cout << endl;
	}
}

void Polygon::Output(){
	if (sw == 1){
		cout << "Toa dotu giac: ";
		for (int i = 0; i < 4; i++){
			cout << endl << "Toa do Point thu " << i + 1 << ": ";
			cout << Point[i].x << " " << Point[i].y;
		}
		cout << endl;

	} else if (sw == 2){
		cout << "Toa do ngu giac: ";
		for (int i = 0; i < 5; i++){
			cout << endl << "Toa do Point thu " << i + 1 << ": ";
			cout << Point[i].x << " " << Point[i].y;
		}
		cout << endl;
	}
	else{
		cout << "Toa do tam giac: ";
		for (int i = 0; i < 3; i++){
			cout << endl << "Toa do Point thu " << i + 1 << ": ";
			cout << Point[i].x << " " << Point[i].y;
		}
		cout << endl;
	}
}

void Polygon::Translate(){
	cout << "Nhap toa do Point tinh tien: ";
	int x, y;
	cin >> x >> y;
	if (sw == 1){
		cout << "Toa do cua cac Point sau khi tinh tien: ";
		for (int i = 0; i < 4; i++){
			cout << endl << "Toa do Point thu " << i + 1 << " Sau khi tinh tien la: ";
			cout << Point[i].x + x << " " << Point[i].y + y;
		}
		cout << endl;
	}
	else if (sw == 2){
		cout << "Toa do cua cac Point sau khi tinh tien: ";
		for (int i = 0; i < 5; i++){
			cout << endl << "Toa do Point thu " << i + 1 << " Sau khi tinh tien la: ";
			cout << Point[i].x + x << " " << Point[i].y + y;
		}
		cout << endl;
	}
	else{
		cout << "Toa do cua cac Point sau khi tinh tien: ";
		for (int i = 0; i < 3; i++){
			cout << endl << "Toa do Point thu " << i + 1 << " Sau khi tinh tien la: ";
			cout << Point[i].x + x << " " << Point[i].y + y;
		}
		cout << endl;
	}
}

void Polygon::Rotate(){
	if (sw == 1){
		int goc_Rotate;
		cout << "Nhap goc Rotate: "; cin >> goc_Rotate;
		cout << "Toa do cua cac Point sau khi Rotate: ";
		for (int i = 0; i < 4; i++){
			cout << endl << "Toa do Point thu " << i + 1 << " Sau khi Rotate la: ";
			cout << Point[i].x * cos(goc_Rotate) - Point[i].y * sin(goc_Rotate) << " " << Point[i].x * sin(goc_Rotate) + Point[i].y * cos(goc_Rotate);
		}
		cout << endl;
	} else {
		int goc_Rotate;
		cout << "Nhap goc Rotate: "; cin >> goc_Rotate;
		cout << "Toa do cua cac Point sau khi Rotate: ";
		for (int i = 0; i < 5; i++){
			cout << endl << "Toa do Point thu " << i + 1 << " Sau khi Rotate la: ";
			cout << Point[i].x * cos(goc_Rotate) - Point[i].y * sin(goc_Rotate) << " " << Point[i].x * sin(goc_Rotate) + Point[i].y * cos(goc_Rotate);
		}
		cout << endl; 
	}
}

void Polygon::ZoomIn()
{
	if (sw == 1){
		cout << "Nhap he so phong to: ";
		int k; cin >> k;
		for (int i = 0; i < 4; i++){
			cout << endl << "Toa do Point thu " << i + 1 << " Sau khi phong to la: ";
			cout << Point[i].x * k << " " << Point[i].y * k;
		}
		cout << endl;
	}
	else if (sw == 2){
		cout << "Nhap he so phong to: ";
		int k; cin >> k;
		for (int i = 0; i < 5; i++){
			cout << endl << "Toa do Point thu " << i + 1 << " Sau khi phong to la: ";
			cout << Point[i].x * k << " " << Point[i].y * k;
		}
		cout << endl;
	}else{
		cout << "Nhap he so phong to: ";
		int k; cin >> k;
		for (int i = 0; i < 3; i++){
			cout << endl << "Toa do Point thu " << i + 1 << " Sau khi phong to la: ";
			cout << Point[i].x * k << " " << Point[i].y * k;
		}
		cout << endl;
	}
}

void Polygon::ZoomOut()
{
    if (sw == 1){
		cout << "Nhap he so thu nho: ";
		int k; cin >> k;
		cout << "Toa do sau khi thu nho: ";
		for (int i = 0; i < 4; i++){
			cout << "\nToa do Point thu " << i + 1 << " Sau khi thu nho la: ";
			cout << Point[i].x / k << " " << Point[i].y / k;
		}
		cout << endl;
	}
	else if (sw == 2){
		cout << "Nhap he so thu nho: ";
		int k; cin >> k;
		cout << "Toa do sau khi thu nho: ";
		for (int i = 0; i < 5; i++){
			cout << endl << "Toa do Point thu " << i + 1 << " Sau khi thu nho la: ";
			cout << Point[i].x / k << " " << Point[i].y / k;
		}
		cout << endl;
	}
	else{
		cout << "Nhap he so thu nho: ";
		int k; cin >> k;
		cout << "Toa do sau khi thu nho: ";
		for (int i = 0; i < 3; i++){
			cout << endl << "Toa do Point thu " << i + 1 << " Sau khi thu nho la: ";
			cout << Point[i].x / k << " " << Point[i].y / k;
		}
		cout << endl;
	}
}