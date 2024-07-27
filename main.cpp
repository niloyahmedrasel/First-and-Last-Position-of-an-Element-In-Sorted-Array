#include <iostream>

using namespace std;

int firstOccur(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
           ans=mid;
           end = mid - 1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid =start + (end-start)/2;
    }
    return ans;
}

int lastOccur(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
           ans=mid;
           start = mid + 1;
        }
        else if(arr[mid]<key){
            start= mid+1;
        }
        else{
            end = mid-1;
        }
        mid =start + (end-start)/2;
    }
    return ans;
}

int main() {
    int even[8]={2,3,4,6,6,6,8};
    int odd[5]={2,4,5,7,8};

    int result = firstOccur(even,8,6);
    int result2 = lastOccur(even,8,6);
    cout<<result << " " <<result2;

    return 0;
}
