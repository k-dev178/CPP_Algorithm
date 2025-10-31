#include <bits/stdc++.h>
using namespace std;

void printArr(const vector<int>& v,int num);

int main() {
    srand(time(NULL));

    vector<int> v;

    for(int i = 0; i < 10; i++){
        v.push_back(rand() % 100);
    }

    cout << "배열: ";
    printArr(v,10);
    cout << "\n";
    
    cout << "오름차순: ";
    sort(v.begin(), v.end());
    printArr(v,10);

    cout << "내림차순: ";
    sort(v.begin(), v.end(), greater<int>());
    printArr(v,10);

  return 0;
}

void printArr(const vector<int>& v,int num){
    for(int i = 0; i < num; i++){
        cout << v[i] << " ";
    }

    cout << "\n";
}