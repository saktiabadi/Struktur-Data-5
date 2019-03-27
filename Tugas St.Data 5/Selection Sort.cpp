#include<iostream>
using namespace std;
int main(){
    int a,y,temp,arr[100];
    cout<<"Jumlah Angka ";
    cin>>y;
    for(int j=0;j<y;j++){

            cout<<"Angka ke- " <<j+1<<" : ";
            cin >> arr[j];
        }
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(a=0;a<5;a++){
        cout<<endl;
        cout<<arr[a];

    }
}
