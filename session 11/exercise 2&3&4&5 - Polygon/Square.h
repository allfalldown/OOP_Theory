#include "Polygon.cpp"

class Square: public Polygon{
    Coordinate A[1000];
    int side;
    public:
	    Square(){
		    A[0].x = A[0].y = 0;
            side= 0;
	    }

	    ~Square() {}

	    void Nhap(){
		    cout << "Nhap toa do diem dau: "; cin >> Point[0].x >> Point[0].y;
            cout << "Canh: "; cin >> side;

            Point[1].x = Point[0].x + side;
            Point[1].y = Point[0].y;

            Point[2].x = Point[0].x;
            Point[2].y = Point[0].y + side;

            Point[3].x = Point[0].x + side;
            Point[3].y = Point[0].y + side;
	    }

	    void Xuat(){
		    cout << "Toa do cua hinh vuong: ";
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