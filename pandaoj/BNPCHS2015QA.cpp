#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int N, a, b;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a>>b;
        cout<<"Kasus #"<<i+1<<": "<<a*b<<endl;
    }
}