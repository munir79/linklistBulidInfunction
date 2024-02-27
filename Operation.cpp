#include<bits/stdc++.h>
using namespace std;
int main(){

//     //1. Remove 
    list <int>myList={100 ,2,3,4,5,10,10,10};
    myList.remove(10);
    for(int val :myList){
        cout<<val<<" ";
    }
    cout<<endl;

//     //2 sort ascending order sort
   myList.sort();
   for(int val:myList){
    cout<<val<<" ";
   }
   cout<<endl;

//    //3 decing order sort
   myList.sort(greater<int>());
   for(int val:myList){
    cout<<val<<" ";
   }
   cout<<endl;

//    //4. remove Duplicate  (Note : firstly need sort array)
   myList.sort();
   myList.unique();
   for(int val:myList){
    cout<<val<<" ";
   }
   cout<<endl;
  
//5.Reverse 
myList.reverse();
//  myList.sort();
//    myList.unique();
   for(int val:myList){
    cout<<val<<" ";
   }
   cout<<endl;



}