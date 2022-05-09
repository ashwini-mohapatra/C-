#include <iostream>
using namespace std;

int ab[5]={1,2,3,4,5};
float res;
int main(){
    res=ab[1]+ab[2]+ab[3]+ab[4]+ab[5];
    res/=5;
    cout<<res<<"\n";
    return 0;
}