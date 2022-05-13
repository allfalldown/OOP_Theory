#include "Polygon.cpp"

class Pentagon: public Polygon{
	Coordinate A[1000];
    public:
	    Pentagon(){
		    A[0].x = A[0].y = 0;
	    }

	    ~Pentagon() {}

	    void Nhap(){
		    GetInput();
	    }

	    void Xuat(){
		    Output();
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