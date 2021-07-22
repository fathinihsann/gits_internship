#include <iostream>
using namespace std;

int main(){
    string kata;
    int n, i;
    bool palindrome = true;
    cout << "Input Kalimat : ";
    getline(cin, kata);
    n = kata.length();

    for(i = 0; i < n; i++){
        if(kata[i] != kata[n-i-1])
        {
            palindrome = false;
            break;
        }
    }

    cout << "Hasil : ";
    if(palindrome == true)
        cout << "Kalimat ini Palindrom";
    else
        cout << "Kalimat ini Bukan Palindrom";

    cin.ignore();
    return 0;
}
