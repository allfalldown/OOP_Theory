#include "Header.h"

Vector::Vector(){
    coords = NULL;
    n = 0;
}

Vector::Vector(int N, double x){
    n = N;
    coords = new double[n];
    for (int i=0; i<n; i++){
        coords[i] = x;
    }
}

Vector::Vector(const Vector &a){
    n = a.n;
    coords = a.coords;
}

Vector::~Vector(){
    delete[] coords;
}

void Vector::Nhap(){
    cout << "Bac cua vector: "; cin >> n;
    coords = new double[n];
    for (int i=0; i<n; i++){
        cout << "Phan tu thu " << i+1 << ": "; cin >> coords[i];
    }
}

void Vector::Xuat(){
    for (int i=0; i<n; i++)
        cout << coords[i] << " ";
    cout << endl;
}

int Vector::Cong(const Vector & a){
    if (a.n != n)
        return 0;
    return 1;
}

void Vector::NhanK(const double &k){
    for (int i=0; i<n; i++){
        coords[i] *= k;
    }
    Xuat();
}

int Vector::Tru(Vector a){
    if (a.n != n)
        return 0;
    return 1;
}

double Vector::TichVoHuong(const Vector &a){
    if (n != a.n)
        return -1;
    int t1, t2, t3 ;
    t1 = t2 = t3 = 0;
    for (int i=0; i<n; i++){
        t1 += coords[i]*a.coords[i];
        t2 += coords[i]*coords[i];
        t3 += a.coords[i]*a.coords[i];
    }
    return (double)(t1 / (sqrt(t2) * sqrt(t3)));
}

Matrix::Matrix(){
    m = n = 0;  
}

Matrix::~Matrix(){
    delete[] elements;
}
        
Matrix::Matrix(const Matrix & a){
    m = a.m;
    n = a.n;
    elements = a.elements;
}
        
void Matrix::Nhap(){
    cout << "So cot: "; cin >> n;
    cout << "So dong: "; cin >> m;
    elements = new double*[m];
    for (int i=0; i<n; i++)
        elements[i] = new double[n];
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> elements[i][j];
}

void Matrix::Xuat(){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            cout << elements[i][j] << " ";
        cout << endl;
    }
}

int Matrix::Cong(const Matrix & a){
    if (m == a.m && n ==a.n)
        return 1;
    return 0;
}
        
void Matrix::Nhan(const double & k){
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            elements[i][j] *= k;
}

int Matrix::Nhan(const Matrix & a){
    if (n == a.m)
        return 1;
    return 0;
}

Vector multiply(const Matrix &a , const Vector &b){
    if (a.n != b.n){
        return Vector(0, 0);
    }
    Vector vec(a.m, 0);
    vec.n = a.m;
    for (int i = 0; i < a.m; i++){
        vec.coords[i] = 0;
        for (int j = 0; j < b.n; j++)
            vec.coords[i] = vec.coords[i] + b.coords[j] * a.elements[i][j];
    }
    return vec;
}

