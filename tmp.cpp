#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void printArr(int arr[],int num);

int main() {
    srand(time(NULL));

    int arr[10];

    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 100;
    }

    printArr(arr,10);
    sort(arr, arr+10);
    printArr(arr,10);

  return 0;
}

void printArr(int arr[],int num){
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
}