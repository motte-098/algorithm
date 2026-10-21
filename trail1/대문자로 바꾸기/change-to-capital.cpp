#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int dif='A'-'a';
    for(int i=0;i<5;++i){
        char input;
        for(int j=0;j<3;++j){
            cin>>input;
            cout<<(char)(input+dif)<<" ";
        }
        cout<<endl;
    }
    return 0;
}