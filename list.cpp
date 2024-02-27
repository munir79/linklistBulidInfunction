#include<bits/stdc++.h>
using namespace std;
int main(){


list <int> myList={10,20,30};

list<int> newList;
newList=myList;
for(int val: newList){
    cout<<val <<" ";
}
cout<<endl;
//1.pushBack and pushfront
myList.push_front(100);
for(int val : myList){
    cout<<val<<" ";
}

cout<<endl;

//2 pop_back and pop_front
myList.pop_front();
for(int val :myList){
    cout<<val<<" ";
}
cout<<endl;

//3. insert //Note if index is greater than size then this value will added cycle 
myList.insert(next(myList.begin(),2),1060);
for(int val : myList){
    cout<<val<<" ";
}
cout<<endl;


//4 insert from anpther list 
list<int>newList2={1,2,3,4};

myList.insert(next(myList.begin(),3),newList2.begin(),newList2.end());
for(int val :myList){
    cout<<val<<" ";

}
cout<<endl;

// 5 earase
myList.erase(next(myList.begin(),2));
for(int val:myList){
    cout<<val<<" ";
}
cout<<endl;
}