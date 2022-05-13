#include "Polygon.cpp"

class Triangle : public Polygon{
    private:
	    Coordinate A[1000];
    public:
	    Triangle(){
		    A[0].x = A[0].y = 0;
	    }

	    ~Triangle() {}

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