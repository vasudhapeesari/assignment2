#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n+1;i=i+1){
        if(i%2==0){
            cout<<i<<endl;
        }
    }

    return 0;
}
