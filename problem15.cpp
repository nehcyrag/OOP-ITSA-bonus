#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int m;

    for(int i = 0; i < n; i++){
        cin >> m;
        cout << m << " " << m * m << " " << m * m * m << endl;
    }

    return 0;
}