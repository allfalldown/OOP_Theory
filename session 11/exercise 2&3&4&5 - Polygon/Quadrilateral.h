#include "Polygon.cpp"

class Quadrilateral: public Polygon{
    private:
	    Coordinate A[1000];
    public:
	    Quadrilateral(){
		    A[0].x = A[0].y = 0;
	    }
	    ~Quadrilateral() {}

	    void Nhap(){
		    int nPoint = 4;
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