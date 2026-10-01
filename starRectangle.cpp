#include<iostream>
using namespace std;
int main(){
    // rectangle star printing
    int n ,y;
    cout<<"enter the len";
    cin>>n;
    cout<<"enter the bas";
    cin>>y;
    int i,j;
    for(i=1;i<=y;i++){
        for(j =1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}