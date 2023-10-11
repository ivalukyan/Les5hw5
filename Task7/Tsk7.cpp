#include <iostream>
#include <math.h>
using namespace std;

int* arr_mult(int* arr, int* arr_1, int n){
    int* arr_revers = new int[n];
    for (int i = 0; i < n; i++){
        arr_revers[i] = pow(arr[i], 2) * pow(arr_1[i], 0.5);
    }
    return arr_revers;
}

int main() {
    int N;
    cin >> N;
    int* arr = new int[N];
    int* arr_1 = new int[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
        cout << "Second mas: ";
        cin >> arr_1[i];
    }
    int* my_arr = new int;
    my_arr = arr_mult(arr, arr_1, N);
    for (int j = 0; j < N; j++){
        cout << my_arr[j] << " ";
    }
}