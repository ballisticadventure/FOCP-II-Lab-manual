#include <iostream>
using namespace std;
class area {
public:
    float base, height;
    void areatriangle(float base,float height) {
        float areat = 0.5 * base * height;
        cout << "Area of triangle = " << areat << endl;
    }
};
int main() {
    area obj;
    obj.areatriangle(5, 10);
    return 0;
}
