#include<iostream>
using namespace std;
int main(){
	int a,b,kunci, x,y,arr[100];

	cout<<"Jumlah Angka ";
    cin>>y;
    for(int t=0;t<y;t++){

            cout<<"Angka ke- " <<t+1<<" : ";
            cin >> arr[t];
        }

    for (a = 1; a < y; a++) {
        kunci = arr[a];
        x = a - 1;

        while (x >= 0 && arr[x] > kunci) {
            arr[x + 1] = arr[x];
            x = x - 1;
        }
        arr[x + 1] = kunci;
    }

    for (a=0;a<y;a++){
        cout<<arr[a]<<endl;
    }
}
