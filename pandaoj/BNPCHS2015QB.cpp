#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int N, a;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a;

        cout<<"Kasus #"<<i+1<<": ";
        if(a%2==1){
            cout<<"CINTA"<<endl;
        }else{
            cout<<"TIDAK CINTA"<<endl;
        }
        
    }
}