#include <iostream>
using namespace std;

void nechet(int* arr, int n){
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            arr[i] = arr[i] + 1;
        }
    }
}

void see_arr(int* arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

bool check(int* arr, int n){
    int cnt = 0;
    for (int j = 0; j < n; j++){
        if (arr[j] % 2 == 0){
            cnt++;
        }
    }
    if (cnt > 0){
        return false;
    }
    else {
        return true;
    }
}

int main(){
    int N;
    cin >> N;
    int* arr = new int[N];
    for (int i =0; i < N; i++){
        cin >> arr[i];
    }
    see_arr(arr, N);
    nechet(arr, N);
    cout << "Check: " << check(arr, N) << endl;
    see_arr(arr, N);
}