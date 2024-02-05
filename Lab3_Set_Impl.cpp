#include <iostream>
#include <set> // Included set instead of bits/stdc++.h
#include<bits/stdc++.h>

using namespace std;

int main() {
    set<int, greater<int>> s1,s3;
    s1.insert(50);
    s1.insert(30);
    s1.insert(50);
    s1.insert(10);
    s1.insert(40);

    cout << "\nPrinting Set S1 : ";
    set<int, greater<int>>::iterator itr_s1; // Change iterator name
    for (itr_s1 = s1.begin(); itr_s1 != s1.end(); itr_s1++) {
        cout << *itr_s1 << " ";
    }
    //     for(auto i : s1){
    //     cout<<i<<" ";
    // }


    set<int> s2(s1.begin(), s1.end());
    s2.insert(100);

    cout << "\nPrinting set S2 : ";

    set<int>::iterator itr_s2; // Change iterator name
    for (itr_s2 = s2.begin(); itr_s2 != s2.end(); itr_s2++) {
        cout << *itr_s2 << " ";
    }
    // for(auto i : s2){
    //     cout<<i<<" ";
    // }

    cout<<"\nIS S1 is empty : "<<s1.empty();
    cout<<"\nIS S2 is not empty : "<<!s1.empty();

    cout<<"\nS1 Size : "<<s1.size();
        cout<<"\nS2 Size : "<<s2.size();


    s2.erase(s2.begin(), s2.find(40));
    cout << "\nPrinting Multiset S2 After Erasing till 40  : ";

    for (itr_s2 = s2.begin(); itr_s2 != s2.end(); itr_s2++) {
        cout << *itr_s2 << " ";
    }
    //    for(auto i : s2){
    //     cout<<i<<" ";
    // }
cout<<"\nS2 Size : "<<s2.size();
    cout << endl;

    cout << "S1 : Printing Lower Bound of 40 : ";
    cout << *s1.lower_bound(40);
    cout << "\nS1 : Printing Upper Bound of 40 : ";
    cout << *s1.upper_bound(40);

    cout << "\nS2 : Printing Lower Bound of 40 : ";
    cout << *s2.lower_bound(40);
    cout << "\nS2 : Printing Upper Bound of 40 : ";
    cout << *s2.upper_bound(40);

    cout<<"\nPrinting S3 : ";
for(auto i : s3){
         cout<<i<<" ";
    }
    cout<<endl;

   s3.swap(s1); // Swap the sets

    cout << "\nAfter Swapping S3 and S1:" << endl;

    cout << "Printing set S3 : ";
    for (const auto& element : s3) {
        cout << element << " ";
    }
    cout<<"\nAfter Swapping S1 : ";
     for (const auto& element : s1) {
        cout << element << " ";
    }

    cout << endl;
    // s2.swap(s1); // Swap the sets

    // cout << "\nAfter Swapping S32 and S1:" << endl;

    // cout << "Printing set S1 : ";
    // for (const auto& element : s3) {
    //     cout << element << " ";
    // }
    // cout<<"\nAfter Swapping S2 : ";
    //  for (const auto& element : s1) {
    //     cout << element << " ";
    // }

    // cout << endl;
}
