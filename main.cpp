#include<iostream>
#include<conio.h>

using namespace std;

unsigned long sumI(unsigned long n){
    unsigned long r(0);

    while (n > 0) {
        r += n--;
    }
    return r;
}
/* ----------------------------------------- */
unsigned long sumR(unsigned long n){
    if (n < 2){
        return n;
    }
    return n + sumR(n - 1);
}
/* ----------------------------------------- */
unsigned long factI(unsigned long  n){
    unsigned long r(1);

    while (n > 0){
        r *= n--;
    }
    return r;
}
/* ----------------------------------------- */
unsigned long factR(unsigned long n){
    if (n < 2){
        return 1;
    }
    return n * factR(n -1);
}
/* ----------------------------------------- */
unsigned long fibI(unsigned long n){
    unsigned long i(1), j(1), r(1);

    while (n > 1){
        r = j + i;

        i = j;
        j = r;

        n--;
    }
    return r;
} 
/* ----------------------------------------- */
unsigned long fibR(unsigned long n){
    if (n < 2){
        return 1;
    }
    return fibR(n - 1) + fibR(n - 2);
} 

int main(){
    unsigned long value;

    cout << "Dame un valor: ";
    cin >> value;

    cout << endl << endl;

    cout << "Sumatoria Iterativa de " << value << " es: " << sumI(value) << endl;
    cout << "Sumatoria Recursiva de " << value << " es: " << sumR(value) << endl;

    cout << endl <<endl;

    cout << "Factorial Iterativa de " << value << " es: "<< factI(value) << endl;
    cout << "Factorial Recursiva de " << value << " es: "<< factR(value) << endl;


    cout << endl <<endl;

    cout << "fibonacci Iteratuva de " << value << " es: " << fibI(value) << endl;
    cout << "fibonacci Recursivo de " << value << " es: " << fibR(value) << endl;






    getch();
    return 0;
}