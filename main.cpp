#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long double db_fac(int x){
    long long tek_sum = 1;
    for (int k = x; k > 0; k -= 2){
        tek_sum *= k;
    }
    return tek_sum;
}


long double t(long double x){
    long double first_sum = 0, second_sum = 0;
    for (int k = 0; k <= 10; ++k){
        first_sum += (pow(x, 2 * k + 1)) / (db_fac(2 * k + 1));
    }
    for (int k = 0; k <= 10; ++k){
        second_sum += (x, pow(x, 2 * k)) / (db_fac(2 * k));
    }
    return first_sum / second_sum;
}


long double fst_func(long double y){
    return (7 * t(0.25) + 2 * t(1 + y))/(6 - t(y*y - 1));
}


int main(){
    long double numb;
    cout << "Введите число: ";
    cin >> numb;
    cout << fixed << setprecision(10) << fst_func(numb);
    return 0;
}