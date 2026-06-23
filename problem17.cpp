#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int mi;
    cin >> mi;

    double km = mi * 1.6;

    cout << fixed << setprecision(1);
    cout << "km=" << km;

    return 0;
}