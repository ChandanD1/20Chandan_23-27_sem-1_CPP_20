#include <iostream>
using namespace std;

int main() {
    string name;
    // Input marks for 5 subjects
    double sub1, sub2, sub3, sub4, sub5;


    cout<<"Please enter Your Name:";
    cin>>name;
    cout << "Enter marks for 5 subjects:";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    // Calculate the average marks
    double averageMarks = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    // Determine the grade based on the average marks using if-else-if ladder

    if (averageMarks >= 90) 
    {
        cout<<name<<" "<< "You have grade: A";
    } 
    else if (averageMarks >= 80) 
    {
        cout<<name<<" "<< "You have grade: B";  
    } 
    else if (averageMarks >= 70)
    {
       cout<<name<<" "<< "You have grade: C";
    } 
    else if (averageMarks >= 60) 
    {
        cout<<name<<" "<< "You have grade: D";
    } 
    else 
    {
        cout<<name<<" "<< "You have grade: F";
    }

   
    return 0;
}
