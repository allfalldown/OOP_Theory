#include "Header.cpp"

int main(){
    cout << "== Phan Vector ==" << endl;
    Vector vec1 = Vector();
    Vector vec2 = Vector();
    cout << "Vector 1: " << endl;
    vec1.Nhap();
    vec1.Xuat(); 
    cout << "Vector 2: " << endl;
    vec2.Nhap();
    vec2.Xuat();
    cout << "Cong 2 vector: " << vec1.Cong(vec2) << endl;
    cout << "Tru 2 vector: " << vec1.Tru(vec2) << endl;
    cout << "Nhap k: "; int k; cin >> k;
    vec1.NhanK(k);
    cout << "Tich vo huong: " << vec1.TichVoHuong(vec2) << endl;
    cout << endl << "== Phan Matrix == " << endl;
    Matrix mat1 = Matrix();
    Matrix mat2 = Matrix();
    cout << "Matrix 1: " << endl;
    mat1.Nhap();
    mat1.Xuat();
    cout << "Matrix 2: " << endl;
    mat2.Nhap();
    mat2.Xuat();
    Vector tmp = multiply(mat1, vec1);
    Vector tmp1 = multiply(mat2, vec2);
    tmp.Xuat();
    tmp1.Xuat();
    return 0;
}