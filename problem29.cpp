#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int bit[8];

    //2's complement
    if(n < 0){
        n = 256 + n;
    }
    for(int i = 7; i >= 0; i--){
        bit[i] = n % 2;
        n = n / 2;
    }
    for(int i = 0; i < 8; i++){
        cout << bit[i];
    }

    cout << endl;

    return 0;
}