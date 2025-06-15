#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
    int id;
    char name[100];
    char section;
    int marks;

    Student(int i,char n[],char s, int m){
        this->id=i;
        strcpy(this->name,n);
        this->section=s;
        this->marks=m;
    }
};

int main(){
     
    int test_case;
    cin>>test_case;
    
    while(test_case--){
        
        int id, marks;
        char section;
        char name[100];
        
        cin >> id >> name >> section >> marks;
        Student s1(id, name, section, marks);
        
        cin >> id >> name >> section >> marks;
        Student s2(id, name, section, marks);
        
        cin >> id >> name >> section >> marks;
        Student s3(id, name, section, marks);
        
        int maximum=s1.marks;
    
        if(s2.marks > maximum || s3.marks > maximum){
            if (s2.marks > s3.marks){
                maximum = s2.marks;
            }else{
                maximum = s3.marks;
                }
            }
                
        if(maximum==s1.marks){
            cout << s1.id << " " << s1.name <<" " << s1.section << " " << s1.marks << endl;
        }
        else if(maximum==s2.marks){
            cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.marks << endl;
        }
        else if(maximum==s3.marks){
            cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.marks << endl;
        }
    }

    return 0;
}