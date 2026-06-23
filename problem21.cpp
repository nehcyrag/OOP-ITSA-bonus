#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int m;
    cin >> m;

    double time = (m * 100.0) / (100 - 30 * 2.54);

    cout << (int)ceil(time) << endl;

    return 0;
}