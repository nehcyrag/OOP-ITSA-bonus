#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cin >> word;

    if(word == "dog")
        cout << "狗";
    else if(word == "cat")
        cout << "貓";
    else if(word == "duck")
        cout << "鴨";
    else if(word == "cow")
        cout << "牛";
    else if(word == "fox")
        cout << "狐";
    else if(word == "狗")
        cout << "dog";
    else if(word == "貓")
        cout << "cat";
    else if(word == "鴨")
        cout << "duck";
    else if(word == "牛")
        cout << "cow";
    else if(word == "狐")
        cout << "fox";

    return 0;
}