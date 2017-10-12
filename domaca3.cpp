/*
Meno: Jan
Priezvisko: Stec
Praca: Domaca uloha vypocet trojuholniku
*/
#include <iostream>
#include <cmath>
using namespace std;


int main() {

    double a = 0, b = 0, c = 0;
    double s = 0, S = 0;

    cout << "Zadaj dlzky stran:\n";
    cin >> a >> b >> c;

    if (!cin.good() || a<=0 || b<=0 || c<=0) {  
        cout << "Zly Vstup.\n";
        return 0;
    } //if

    s = (a+b+c)/(2);
    S = sqrt(s*(s - a)*(s - b)*(s - c));

    if (S <= 0 || (a+b<c) || (a+c<b) || (b+c<a) ) {
        cout << "Trojuholnik nejdede zostrojit.\n";
        return 0;
    } //if 
    else {
        cout << "Trojuholnik ide zostrojit obsah je: " << S << endl;
    } //else
    
return 0;

} //int main

