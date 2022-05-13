#pragma once
#include <iostream>
#include <cmath>

using namespace std;

struct Coordinate{
	double x;
	double y;
};

class Polygon{
	public:
		int nPoint;
		Coordinate Point[1000];
		int sw;
		Polygon();
		Polygon(int n, Coordinate A[1000]);
		~Polygon();
		void GetInput();
		void Output();
		virtual void Nhap() = 0;
		virtual void Xuat() = 0;
		void Translate();
		void Rotate();
		void ZoomIn();
		void ZoomOut();
		virtual void Translate_n() = 0;
		virtual void Rotate_n() = 0;
		virtual void ZoomIn_n() = 0;
		virtual void ZoomOut_n() = 0;
};



