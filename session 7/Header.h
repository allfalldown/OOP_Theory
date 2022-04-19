#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Matrix;
class Vector{
    private:
        double *coords;
        int n;
    public:
        Vector();
        Vector(int N, double x); // tạo vector có N chiều, mỗi ô có giá trị x
        Vector(const Vector &a);
        ~Vector();
        void Nhap();
        void Xuat();
        int Cong(const Vector &a); // return 1 nếu cộng được
        void NhanK(const double &k);
        int Tru(Vector a); // return 1 nếu trừ được
        double TichVoHuong(const Vector &a);
        friend Vector multiply(const Matrix &a, const Vector &b);
        
};

class Vector;
class Matrix{
    private:
        int m; // dòng
        int n; // cột
        double **elements; 
    public:
        Matrix();
        ~Matrix();
        Matrix(const Matrix & a);
        void Nhap();
        void Xuat();
        int Cong(const Matrix & a); // return 1 nếu cộng được
        void Nhan(const double & k);// Nhân với 1 số K
        int Nhan(const Matrix & a);// Nhân với 1 CMatrix, return 1 nếu nhân được
        friend Vector multiply(const Matrix &a, const Vector &b);
        
};

