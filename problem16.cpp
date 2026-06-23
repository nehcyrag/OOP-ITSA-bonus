#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i;

    for(int j = 0; j < n; j++){
        cin >> i;

        if(i > 31)
            cout << "Value of more than 31" << endl;
        else
            cout << (1 << i) << endl;
    }

    return 0;
}