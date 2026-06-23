#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 1){
        cout << "    *" << endl;
        cout << "   * *" << endl;
        cout << "  *   *" << endl;
        cout << " *     *" << endl;
        cout << "*********" << endl;
    }
    else if(n == 2){
        cout << "    *" << endl;
        cout << "   ***" << endl;
        cout << "  *****" << endl;
        cout << " *******" << endl;
        cout << "*********" << endl;
    }
    else if(n == 3){
        cout << "*********" << endl;
        cout << " *******" << endl;
        cout << "  *****" << endl;
        cout << "   ***" << endl;
        cout << "    *" << endl;
    }

    return 0;
}