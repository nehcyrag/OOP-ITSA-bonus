#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    double fee = n * 0.9;

    if(n > 800 && n < 1500){
        fee = fee * 0.9;
    }
    else if(n >= 1500){
        fee = fee * 0.79;
    }

    cout << fixed << setprecision(1);
    cout << fee << endl;

    return 0;
}