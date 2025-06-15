#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};
int compare_students(Student a, Student b);
int main(){
    int n;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].roll>>s[i].marks;
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }

    sort(s,s+n,compare_students);
    
    for(int i=0;i<n;i++){
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }
    return 0;
}

int compare_students(Student s1, Student s2){
    if(s1.marks == s2.marks){
        return s1.roll < s2.roll;
    } 
    else{
        return s1.marks > s2.marks;
    }
}