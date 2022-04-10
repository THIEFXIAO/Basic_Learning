// 代码包含中文，需要一条中文注释，不然代码里的中文到git会乱码，不知道为什么

#include <iostream>

using namespace std;

class Point
{
    public:	

        void InputXY(double x = -1, double y = -1) {
            if (x != -1)Coordinate[0] = x;
            if (y != -1)Coordinate[1] = y;
        }

        double* ReadXY() {
            return &Coordinate[0];
        }

    private:
        double Coordinate[2] = { 0, 0 };
};

class Circle
{
    public:
        void InputXYR(double x = -1, double y = -1, double r = -1) {
            if (x != -1)Center.InputXY(x);
            if (y != -1)Center.InputXY(-1, y);
            if (r != -1)Radius = r;
        }

        double* ReadXYR() {
            circle[0] = *Center.ReadXY();
            circle[1] = *(Center.ReadXY() + 1);
            circle[2] = Radius;
            return &circle[0];
        }

        int PointPosition(Point a) {
            double distance = (*a.ReadXY() - *Center.ReadXY()) * (*a.ReadXY() - *Center.ReadXY())
                + ((*(a.ReadXY() + 1) - *(Center.ReadXY() + 1))) * ((*(a.ReadXY() + 1) - *(Center.ReadXY() + 1)));
            if (distance == Radius * Radius) return 0;
            if (distance < Radius * Radius) return 1;
            if (distance > Radius * Radius) return 2;
        }
	
    private:
        Point Center;
        double Radius = 0;
        double circle[3] = { 0 };
};

int main() {

    Point a;
    a.InputXY(0.5, 0.5);
    Circle b;
    b.InputXYR(0, 0, 1);

    double* point, * circle;
    point = a.ReadXY();
    for (size_t i = 0; i < 2; i++) cout << *point++ << "  ";
    cout << endl;
    circle = b.ReadXYR();
    for (size_t i = 0; i < 3; i++) cout << *circle++ << "  ";
    cout << endl;
    int Position = b.PointPosition(a);
    switch (Position)
    {
        case 0:
            cout << "在圆上" << endl;
            break;
        case 1:
            cout << "在圆内" << endl;
            break;
        case 2:
            cout << "在圆外" << endl;
            break;
        default:
            cout << "???" << endl;
            break;
    }

    return 0;
}