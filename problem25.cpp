#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int day = n / 86400;
    n = n % 86400;

    int hour = n / 3600;
    n = n % 3600;

    int minute = n / 60;
    int second = n % 60;

    cout << day << " days" << endl;
    cout << hour << " hours" << endl;
    cout << minute << " minutes" << endl;
    cout << second << " seconds" << endl;

    return 0;
}