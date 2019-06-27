#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int N;
    cin>>N;
    int input[N];
    int output_size = 0;
    int output[N];
    for(int i=0;i<N;i++){
        cin>>input[i];
    }

    //output
    for (int i = 0; i < N;)
    {
        output[output_size+1] = input[i];
        output[output_size] =0;
        while (output[output_size]<255&&output[output_size+1]==input[i])
        {
            output[output_size]+=1;
            i++;
        }
        output_size += 2;
    }

    for (int i = 0; i < output_size; i++)
    {
        cout<<output[i]<<" ";
    }
    cout<<endl<<"out size"<<output_size;
    
    return 0;
}