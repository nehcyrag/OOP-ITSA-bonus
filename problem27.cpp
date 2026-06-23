#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = n - 1; i >= 2; i--){
        bool prime = true;

        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                prime = false;
                break;
            }
        }

        if(prime){
            cout << i << endl;
            break;
        }
    }

    return 0;
}