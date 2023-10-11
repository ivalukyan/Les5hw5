#include <iostream>
using namespace std;

void mult(int* arr, int n){
    for (int j = 0; j < n; j++){
        if (arr[j] % 2 == 0){
            arr[j] = arr[j] * 10;
        }
        else {
            arr[j] = 0;
        }
    }
}

void see_arr(int* arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int N;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    see_arr(arr, N);
    mult(arr, N);
    see_arr(arr, N);
}