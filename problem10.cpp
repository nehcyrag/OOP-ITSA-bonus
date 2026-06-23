#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << fixed << setprecision(1);

    for(int i = 0; i < n; i++){
        double w;
        cin >> w;

        double area = round(w * w * 10) / 10.0;

        cout << area << endl;
    }

    return 0;
}