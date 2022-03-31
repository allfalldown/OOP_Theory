#include "Triangle.cpp"

int main(){
    Triangle tri = Triangle();
    tri.getInput();
    tri.display();

    cout << "----------" << endl;
    tri.translation();
    cout << "After translation" << endl;
    tri.display();

    cout << "----------" << endl;
    tri.rotate();
    cout << "After rotating" << endl;
    tri.display();

    cout << "----------" << endl;
    tri.zoomIn();
    cout << "After zoom in" << endl;
    tri.display();

    cout << "----------" << endl;
    tri.zoomOut();
    cout << "After zoom out" << endl;
    tri.display();

    return 0;
}