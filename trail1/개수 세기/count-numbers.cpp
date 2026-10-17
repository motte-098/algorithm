#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;++i){
        if(arr[i]==m){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}