#include<iostream>
using namespace std;

void linearSearch(int a[],int n)
{
    int temp=-1;

    for(int i=0;i<10;i++){
        if(a[i]==n){
            cout<<"Element located at position "<<i+1<<endl;
            temp=0;
            break;
        }
    }
    if(temp==-1){
        cout<<"Element can't be located"<<endl;
    }
}

int main(){
    int arr[10];
    cout<<"Please enter 10 elements"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Please enter an element to search"<<endl;
    int num;
    cin>>num;

    linearSearch(arr,num);

    return 0;
}
