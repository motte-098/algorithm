#include <iostream>
#include <array>
using namespace std;

int main() {
    // Please write your code here.
    int n,q;
    cin>>n>>q;
    int   arr1[n];
    for (int i=0;i<n;++i){
        cin>>arr1[i];
    }

    for(int i=0;i<q;++i){
        int question, order, order2;
        cin>>question;
        if(question==1){
            cin>>order;
            cout<<arr1[order-1]<<endl;
        }
        else if(question==2){
            cin>>order;
            int count=-1;
            for(int j=0;j<n;++j){
                if(arr1[j]==order){
                    count=j;
                    break;
                }
            }
            if(count==-1){
                cout<<0<<endl;
            }
            else{
                cout<<count+1<<endl;
            }
        }
        else if (question==3){
            cin>>order>>order2;
            for(int i=order;i<=order2;++i){
                cout<<arr1[i-1]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}