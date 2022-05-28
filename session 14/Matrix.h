#include <iostream>
#include <iomanip>

using namespace std;

template <class T>
class Matrix{
    private:
        T **data;
        int nRows, nCols;
    public:
    Matrix();
    Matrix(int r, int c) ;
    ~Matrix() ;
    void Input();
    void setAt(int i, int j, T x) ;
    T getAt(int i, int j);
    void display() const;
    void resize(int r, int c);
    Matrix operator + (const Matrix &right);
    Matrix operator - (const Matrix &right);
};

template <class T>
Matrix<T>::Matrix(){
    nRows=nCols=0;
}

template <class T>
Matrix<T>::Matrix(int r, int c){
    nRows = r;
    nCols = c;
    data = new T*[nRows];
    for(int i=0;i < nRows;i++)
    *(data+i)= new T[nCols];
    }

template <class T>
Matrix<T>::~Matrix(){
    for(int i = 0; i < nRows; i++)
        delete[] data[i];
    delete[] data;
}

template <class T>
void Matrix<T>::Input(){
    for(int i=0;i<nRows;i++)
    for(int j=0;j<nCols;j++){
        cout << "e[" << i+1 << "][" << j+1 << "]: "; cin >> data[i][j];
        setAt(i,j,data[i][j]);
    }
}

template <class T>
void Matrix<T>::setAt(int i, int j, T x){
    data[i][j] = x;
}


template <class T>
T Matrix<T>::getAt(int i,int j){
    return data[i][j];
}

template <class T>  
void Matrix<T>::display() const{
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols;j++)
            cout  << data[i][j] << ' ';
        cout << endl;
    }
}

template <class T>
Matrix<T> Matrix<T>::operator + (const Matrix<T> &right){
    int common_row, common_col;
    if(right.nCols > nCols)
        common_col = right.nCols;
    else
        common_col = nCols;

    if(right.nRows > nRows)
        common_row = right.nRows;
    else
        common_row = nRows;
        Matrix sum(common_row, common_col);
        for(int i = 0; i < common_row; ++i)
            for(int j = 0; j < common_col; ++j)
                sum.data[i][j] = right.data[i][j] + data[i][j];
    return sum;
}

template <class T>
Matrix<T> Matrix<T>::operator - (const Matrix<T> &right){
    int common_row, common_col;
    if(right.nCols > nCols)
        common_col = right.nCols;
    else
        common_col = nCols;

    if(right.nRows > nRows)
        common_row = right.nRows;
    else
        common_row = nRows;
        Matrix sub(common_row, common_col);
        for(int i = 0; i < common_row; ++i)
            for(int j = 0; j < common_col; ++j)
                sub.data[i][j] = right.data[i][j] - data[i][j];
    return sub;
}