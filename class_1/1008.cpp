#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b;

    cin >> a >> b;
    cout << fixed << setprecision(9) << (a/b) << '\n';
    cout << setprecision(9) << (a/b) << '\n';

    return 0;
}