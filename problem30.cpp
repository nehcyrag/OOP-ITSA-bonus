#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char hex[10];
    int i = 0;

    if(n == 0){
        cout << 0 << endl;
        return 0;
    }

    while(n > 0){
        int r = n % 16;

        if(r < 10)
            hex[i] = r + '0';
        else
            hex[i] = r - 10 + 'A';

        n /= 16;
        i++;
    }

    for(int j = i - 1; j >= 0; j--){
        cout << hex[j];
    }

    cout << endl;

    return 0;
}