#include "Polygon.cpp"

int main(){
    Polygon poly; int n;
    poly.getInput(n);
    poly.display(n);

    cout << "----------" << endl;
    poly.translation(n);
    cout << "After translation" << endl;
    poly.display(n);

    cout << "----------" << endl;
    poly.rotate(n);
    cout << "After rotating" << endl;
    poly.display(n);

    cout << "----------" << endl;
    poly.zoomIn(n);
    cout << "After zoom in" << endl;
    poly.display(n);

    cout << "----------" << endl;
    poly.zoomOut(n);
    cout << "After zoom out" << endl;
    poly.display(n);

    return 0;
}