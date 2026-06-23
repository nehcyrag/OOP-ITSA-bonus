#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int T, B, H;
    cin >> T >> B >> H;

    double area = (T + B) * H / 2.0;

    cout << fixed << setprecision(1);
    cout << "Trapezoid area:" << area << endl;

    return 0;
}