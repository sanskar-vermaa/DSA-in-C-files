// #include<iostream>
// #include<vector>
//  using namespace std;



// void merge(int arr[],int start, int mid, int end){
  
//    vector<int>temp(end-start+1);

//    int left=start, right= mid+1, index=0;

//    while(left<=mid && right<=end){
//     if(arr[left]<=arr[right]){
//         temp[index]=arr[left];
//         index++, right++;

//     }
    
//       else{
//         temp[index]=arr[right];
//         right++, index++;
//       }
//    }

//    // left array agar element bache hai to 

//    while(left<=mid){
//     temp[index]=arr[left];
//     index++,left++;
//    }

//    // right array me agar element bache hai to 

//    while(right<=end){
//     temp[index]=arr[right];
//     index++, right++;
//    }

//    index=0;

//    while(start<=end){
//     arr[start]=temp[index];
//     start++, index++;
//    }

// }

// void mergesort(int arr[], int start, int end){


//    int mid =start+(end-start)/2;
//    mergesort(arr, start,mid);
//    mergesort(arr,mid+1,end);

//    merge(arr, start, mid, end);
// }


//  int main(){
   
//    int arr[]={4,5,6,8,2,7,9,2};

//    mergesort(arr, 0,8);
//    cout<<" print sort values ";

//    for(int i=0;i<8;i++){
//     cout<<arr[i];
//    }
//    return 0;
//  }
#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    vector<int> temp(end - start + 1);

    int left = start, right = mid + 1, index = 0;

    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp[index] = arr[left];
            left++, index++;
        } else {
            temp[index] = arr[right];
            right++, index++;
        }
    }

    while (left <= mid) {
        temp[index] = arr[left];
        left++, index++;
    }

    while (right <= end) {
        temp[index] = arr[right];
        right++, index++;
    }

    index = 0;

    while (start <= end) {
        arr[start] = temp[index];
        start++, index++;
    }
}

void mergesort(int arr[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[] = {4, 5, 6, 8, 2, 7, 9, 2};

    mergesort(arr, 0, 7);
    cout << "Sorted values: ";

    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
