#include "Pentagon.h"
#include "Quadrilateral.h"
#include "Triangle.h"
#include "Polygon.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"

int main(){
	Quadrilateral a;
	a.Nhap();
	a.Xuat();
	a.Translate_n();
	a.Rotate_n();
	a.ZoomIn_n();
	a.ZoomOut_n();

	Pentagon b;
	b.Nhap();
	b.Xuat();
	b.Translate_n();
	b.Rotate_n();
	b.ZoomIn_n();
	b.ZoomOut_n();

	Triangle c;
	c.Nhap();
	c.Xuat();
	c.Translate_n();
	c.Rotate_n();
	c.ZoomIn_n();
	c.ZoomOut_n();

	Rectangle d;
	d.Nhap();
	d.Xuat();
	d.Translate_n();
	d.Rotate_n();
	d.ZoomIn_n();
	d.ZoomOut_n();

	Square e;
	e.Nhap();
	e.Xuat();
	e.Translate_n();
	e.Rotate_n();
	e.ZoomIn_n();
	e.ZoomOut_n();

	Parallelogram f;
	f.Nhap();
	f.Xuat();
	f.Translate_n();
	f.Rotate_n();
	f.ZoomIn_n();
	f.ZoomOut_n();
	
    return 0;
}
