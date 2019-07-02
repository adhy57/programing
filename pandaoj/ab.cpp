#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int N, v_sum =0;
    int temp;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>temp;
        v_sum += temp;
    }
    cout<<v_sum;

    return 0;
}