#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        char value='A';
        //char value='A'+col-1;
        while(col<=n){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }


    return 0;
}