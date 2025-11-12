#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the num";
    cin>>num;
    
    for(int i=0;i<num;i++){
        for(int j=0; j<num;j++){
            if(i==0 || i==num-1 ||j==num-i-1){
                cout<<"Z";
            }
            else{
                cout<<" ";
            }
        }
       cout<< endl;
        
    }
    return 0;

}