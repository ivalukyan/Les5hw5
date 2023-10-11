#include <iostream>
using namespace std;

void see_arr(int* arr, const int n){
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] != 0 && cnt == 1){
            cout << i << " ";
        }
        else{
            if(arr[i] == 0){
                 cnt++;
            }
           
        }
    }
}


int main(){
    int N;
    cout << "Enter N:";
    cin >> N;
    int* arr = new int[N];
    for (int j = 0; j < N; j++ ){
        cout << "Enter: ";
        cin >> arr[j];
    }
    see_arr(arr, N);

}