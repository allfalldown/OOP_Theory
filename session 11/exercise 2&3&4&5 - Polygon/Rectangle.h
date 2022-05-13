#include "Polygon.cpp"

class Rectangle: public Polygon{
    Coordinate A[1000];
    int width, height;
    public:
	    Rectangle(){
		    A[0].x = A[0].y = 0;
            width = height = 0;
	    }

	    ~Rectangle() {}

	    void Nhap(){
		    cout << "Nhap toa do diem dau: "; cin >> Point[0].x >> Point[0].y;
            cout << "Chieu dai: "; cin >> width;
            cout << "Chieu rong: "; cin >> height;

            Point[1].x = Point[0].x + width;
            Point[1].y = Point[0].y;

            Point[2].x = Point[0].x;
            Point[2].y = Point[0].y + height;

            Point[3].x = Point[0].x + width;
            Point[3].y = Point[0].y + height;
	    }

	    void Xuat(){
		    cout << "Toa do cua hinh chu nhat: ";
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