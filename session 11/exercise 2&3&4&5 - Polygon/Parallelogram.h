#include "Polygon.cpp"

class Parallelogram: public Polygon{
    Coordinate A[1000];
    int width, height;
    double degree;
    public:
	    Parallelogram(){
		    A[0].x = A[0].y = 0;
            width = height = 0;
            degree = 0;
	    }

	    ~Parallelogram() {}

	    void Nhap(){
		    cout << "Nhap toa do diem dau: "; cin >> Point[0].x >> Point[0].y;
            cout << "Chieu dai: "; cin >> width;
            cout << "Chieu rong: "; cin >> height;
            cout << "Goc nhon: "; cin >> degree;
            
            double tmp1 = height * cos(degree); //khoang cach lech
            double tmp2 = height * sin(degree); //chieu cao

            Point[1].x = Point[0].x + width;
            Point[1].y = Point[0].y;

            Point[2].x = Point[0].x - tmp1;
            Point[2].y = Point[0].y - tmp2;

            Point[3].x = Point[2].x + width;
            Point[3].y = Point[2].y;
	    }

	    void Xuat(){
		    cout << "Toa do cua hinh binh hanh: ";
		    for (int i = 0; i < 4; i++){
			    cout << endl << "Toa do Point thu " << i + 1 << ": ";
			    cout << Point[i].x << " " << Point[i].y;
		    }
		    cout << endl;
	    }

	    void Translate_n(){
		    Translate();
	    }

	    void Rotate_n(){
		    Rotate();
	    }

	    void ZoomIn_n(){
		    ZoomIn();
	    }

	    void ZoomOut_n(){
		    ZoomOut();
	    }
};