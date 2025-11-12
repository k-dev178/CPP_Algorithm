#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, int * arr) {
    int result;

    if (n == 0) {
        arr[0]++;
        return 0;
    } else if (n == 1) {
        arr[1]++;
        return 1;
    } else {
        return fibonacci(n-1,arr) + fibonacci(n-2,arr);
    }
    
}

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int t,n,result;
    int arr[2];

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        fill(begin(arr),end(arr),0);

        fibonacci(n,arr);  

        for(int j = 0; j < 2; j++){
            cout << arr[j] << " ";
        }
    }

    return 0;
}