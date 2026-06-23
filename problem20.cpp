#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int w, h;
    cin >> w >> h;

    double hm = h / 100.0;
    double bmi = w / (hm * hm);

    cout << fixed << setprecision(2);
    cout << bmi << endl;

    return 0;
}