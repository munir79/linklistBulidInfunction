#include<bits/stdc++.h>
using namespace std;
int main(){

    //1. Remove 
    list <int>myList={1 ,2,3,4,5,10,10,10};
    myList.remove(10);
    for(int val :myList){
        cout<<val<<" ";
    }
    cout<<endl;

}