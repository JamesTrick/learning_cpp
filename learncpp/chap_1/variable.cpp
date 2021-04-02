#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int width;
    int length;
    double depth;

    width = 5;

    cout << width;

    cout << "\nCalculating area:" << endl;

    length = 10;
    depth = 0.5;

    float area = width * length * depth;

    cout << area << endl;

    double exp_area = exp(area);

    cout << "The exponential of the area is: " << exp_area << endl;

}