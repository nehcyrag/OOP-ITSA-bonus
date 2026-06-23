#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t, s;
    cin >> t >> s;

    double pay;

    if(t <= 60){
        pay = t * s;
    }
    else if(t <= 120){
        pay = 60 * s + (t - 60) * s * 1.33;
    }
    else{
        pay = 60 * s + 60 * s * 1.33 + (t - 120) * s * 1.66;
    }

    cout << fixed << setprecision(1);
    cout << pay << endl;

    return 0;
}