#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, int * num0, int * num1) {
    if (n == 0) {
        (*num0)++;
        return 0;
    } else if (n == 1) {
        (*num1)++;
        return 1;
    } else {
        return fibonacci(n-1,num0,num1) + fibonacci(n-2,num0,num1);
    }
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n,tmp;
    int num0 = 0,num1 = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        num0 = 0; num1 = 0;

        cin >> tmp;
        fibonacci(tmp,&num0,&num1);
        cout << num0 << " " << num1 << "\n";
    }

    return 0;
}