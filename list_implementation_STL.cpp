#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void showlist(list<int> ll){
    list<int>::iterator it;
    for(it = ll.begin(); it!= ll.end();it++){
        cout<<*it<<' ';
    }
    cout<<endl;
        
    }



int main(){
   list<int> l1;
   
    list<int> l2;

    //l2.push_front(2);l2.push_front(20);l2.push_front(200);
    //l1.push_front(1);l1.push_front(10);l1.push_front(100);

    for(int i=0;i<9;i++){
        l1.push_front(i*2);
        l2.push_back(i*3);
    }

cout<<"list1 : "; showlist(l1);
cout<<"list2 : ";showlist(l2);
cout<<endl;

cout<<"First Element of 1st list: "<<l1.front()<<'\n';
cout<<"First Element of 2nd list : "<<l2.front()<<endl;

cout<<"last Element of 1st list: "<<l1.back()<<endl;
cout<<"last Element of 2nd lsit: "<<l2.back()<<endl;

cout<<"\nPopping 1st list : ";
l1.pop_front();
l2.pop_front();
showlist(l1);
// cout<<endl;
cout<<"popping 2nd list : ";
showlist(l2);
cout<<endl;

//insert value at a position : 

list<int>::iterator go;
go = l1.begin();
advance(go,3);
l1.insert(go,90);

cout<<"After insertion value : "; showlist(l1);

cout<<"Size list1 : " <<l1.size();
cout<<"\nSize list1 : "<<l2.size();

cout<<"\nreverse list1 : "; 
l1.reverse();
showlist(l1);

cout<<"\nreverse list2 : "; 
l2.reverse();
showlist(l2);

}