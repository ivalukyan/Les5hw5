#include <iostream>
using namespace std;

int* arr_fith(int* arr, int n, const int V){
    int* arr_new = new int[n];
    for (int i = 0; i < n; i++){
        arr_new[i] = V - arr[i];
    }
    return arr_new;
}

void see_arr(int* arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "(enter :) )" << endl;
}

int main() {
    const int V = 12;
    int N;
    cin >> N;
    int* arr = new int[N];
    for (int j = 0; j < N; j++){
        cin >> arr[j];
    }
    see_arr(arr, N);
    int* arr_task_ten = new int;
    arr_task_ten = arr_fith(arr, N, V);
    see_arr(arr_task_ten, N);
    return 0; 
}