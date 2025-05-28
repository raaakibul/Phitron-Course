#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main(){
    // create object 
    Student s1;
    s1.roll = 10;
    s1.gpa = 4.5; 
    char temp[100] = "Abrar";
    strcpy(s1.name,temp);
    
    cout << s1.name << " "<< s1.roll << " " << s1.gpa <<endl;

    return 0;
}