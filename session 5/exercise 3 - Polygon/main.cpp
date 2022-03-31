#include "Polygon.cpp"

int main(){
    Polygon list[100]; int n;
    list[0].getInput(n);
    list[0].display(n);

    cout << "----------" << endl;
    list[0].translation(n);
    cout << "After translation" << endl;
    list[0].display(n);

    cout << "----------" << endl;
    list[0].rotate(n);
    cout << "After rotating" << endl;
    list[0].display(n);

    cout << "----------" << endl;
    list[0].zoomIn(n);
    cout << "After zoom in" << endl;
    list[0].display(n);

    cout << "----------" << endl;
    list[0].zoomOut(n);
    cout << "After zoom out" << endl;
    list[0].display(n);

    return 0;
}