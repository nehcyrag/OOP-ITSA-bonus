#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x, y;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        int sum = x + y;
        cout << sum * sum << endl;
    }

    return 0;
}