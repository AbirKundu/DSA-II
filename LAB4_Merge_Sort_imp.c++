
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int counter = 0;

void printArray(int arr[],int n){
    int i;
    for(i = 0; i<n ;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}
void merge_array(int arr[],int l ,int m, int r){
    int i,j,k;
    int a1 = m - l + 1;
    int a2 = r - m;

    int L_Array[a1], R_Array[a2];

    for(int i = 0; i < a1; i++){
        L_Array[i]=arr[l+i];
    }
    for(int j = 0; j < a2; j++){
        R_Array[j] = arr[ m + 1 + j ];
    }


    i = 0;
    j = 0;
    k = l;


    while(i < a1 and j < a2){
        if(L_Array[i] <= R_Array[j]){
            arr[k] = L_Array[i];
            i++;
        }
        else{
            arr[k] = R_Array[j];
            j++;
        }
        k++;
    }

    while( i < a1){
        arr[k] = L_Array[i];
        i++;
        k++;
    }
    while( j < a2){
        arr[k] = R_Array[j];
        j++;
        k++;
    }

}

void mergesort(int arr[],int l , int r){

    if(l < r){

    int m = l + (r - l ) / 2;

    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    counter += 2; // cont for the recursive call only
    merge_array(arr,l,m,r);
    }

}


// Searching the index that is lower than the target index

int binarySearch(int arr[], int l, int r, int x)
{
    if (l <= r) {
        int m = l + (r - l) / 2;


        if (arr[m] == x)
            return m;


        if (arr[m] > x){
           return   binarySearch(arr,l,m-1,x);}

        return binarySearch(arr,m+1,r,x);
    }
    return -1;
}


int main(){

int n;
cin>>n;
int arr[n];
int ckr[n];
 for(int i = 0;i<n;i++){
    cin>>arr[i];
    ckr[i]=arr[i];

 }

    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"\nGiven Array             : ";
    printArray(arr,len);
    mergesort(arr, 0, len - 1);

    cout<<"Array After Merged Sort : ";
    printArray(arr,len);

    cout<<"Number of calls         : "<<counter<<'\n';

    for(int i = 0; i < len ;i++){
        cout<< "The number of elements lower than "<<ckr[i]<<" is : "<< binarySearch(arr, 0, len, ckr[i])<<'\n';

        }

    return 0;


}

