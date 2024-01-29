#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void showQ(priority_queue<int> qq){
    priority_queue<int> temp = qq;
    while(!temp.empty()){
        cout<<temp.top()<<"  "; // In PQ there will be top instead of Front;
        temp.pop();
    }
}

int main(){
    priority_queue<int> q1,q2;

    for(int i = 0;i<5;i++){
        q1.push(i*2);
        q2.push(i*2+1);
    }

    cout<<"Size of Q1 is : "<<q1.size();
    cout<<" and Queue1 is: ";showQ(q1);
    cout<<"\nSize of Q2 is : "<<q2.size();
    cout<<" and Queue2 is: ";showQ(q2);

cout<<"\nQ1 front : "<< q1.top();//<<" and Q1 back : "<<q1.back();
cout<<"\nQ2 front : "<< q2.top();//<<" and Q2 back : "<<q2.back();

cout<<"\nQ1 isw swapping by Q2 : ";q1.swap(q2);
showQ(q1);

//PUSH AND POP OPERATION : 

cout<<"\nPushed 500 : ";
q1.push(500);
showQ(q1);
cout<<"and Popped : "; q1.pop();
showQ(q1);

// simillar for q2;

}
