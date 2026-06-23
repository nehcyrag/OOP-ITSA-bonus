#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double c, f;
    cin >> c;

    f = c * 9.0 / 5.0 + 32;

    cout << fixed << setprecision(1);
    cout << f << endl;

    return 0;
}