#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "*" << y << "=" << x * y << endl;
    cout << x << "-" << y << "=" << x - y << endl;

    int q = x / y;
    int r = x % y;

    if(r < 0){
        if(y > 0){
            q--;
            r += y;
        }
        else{
            q++;
            r -= y;
        }
    }

    cout << x << "/" << y << "=" << q << "..." << r << endl;

    return 0;
}