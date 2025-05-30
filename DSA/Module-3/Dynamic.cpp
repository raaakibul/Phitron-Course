#include<bits/stdc++.h>
using namespace std;
class Student{

    public:
    int roll;
    int cls;
    double gpa;
    
    Student(int roll,int cls,double gpa){
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

int main(){

    int roll,cls;
    double gpa;

    cin>>roll>>cls>>gpa;

    Student *s1 = new Student(roll,cls,gpa);
    getchar();
    
    char a[100];
    cin.getline(a,100);

    long long int num;
    cin>>num;
    
    cout<<"Name: "<<a<<"\nRoll: "<<s1->roll<<"\nClass: "<<s1->cls<<"\nGPA: "<<s1->gpa<<"\nNumber: "<<num;
    return 0;
}
