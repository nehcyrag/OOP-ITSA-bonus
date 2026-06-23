#include <iostream>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    cin >> h1 >> m1;
    cin >> h2 >> m2;

    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;

    int total = end - start;

    int halfHours = total / 30;

    int fee = 0;

    if(halfHours <= 4){
        fee = halfHours * 30;
    }
    else if(halfHours <= 8){
        fee = 4 * 30 + (halfHours - 4) * 40;
    }
    else{
        fee = 4 * 30 + 4 * 40 + (halfHours - 8) * 60;
    }

    cout << fee << endl;

    return 0;
}