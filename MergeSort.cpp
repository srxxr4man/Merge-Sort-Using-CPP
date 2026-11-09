#include <iostream>
#include <vector>
using namespace std;

void addElement(vector<int>&arr,int n){
    int e;
    for(int i=0;i<n;i++){
        cout<<"Enter the Element: ";
        cin>>e;
        arr.push_back(e);
    }
}

void display(const vector<int>&arr){
    for(int i:arr){
        cout<<i<<" ";
    }
}

void merge(vector<int> &arr,int low,int mid,int high){
    int l=mid-low+1;
    int r=high-mid;

    vector<int>left(l);
    vector<int>right(r);

    for(int i=0;i<l;i++){
        left[i]=arr[low+i];
    }
    for(int j=0;j<r;j++){
        right[j]=arr[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=low;

    while(i<l && j<r){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }

    while(i<l){
        arr[k]=left[i];
        i++;
        k++;
    }

    while(j<r){
        arr[k]=right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>&arr,int low,int high){
    if(low>=high){
        return;
    }

    int mid=(low+high)/2;

    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cout<<"Enter the Number of Elements: ";
    cin>>n;

    if(n<=0){
        cout<<"Invalid number of elements";
        return 0;
    }
    
    vector<int>arr;

    addElement(arr,n);

    cout<<"Original Array: ";
    display(arr);

    mergeSort(arr,0,arr.size()-1);
    cout<<"\nSorted Array: ";
    display(arr);

    cout<<endl;

    return 0;
}