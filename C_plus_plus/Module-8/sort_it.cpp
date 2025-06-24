#include <bits/stdc++.h>

using namespace std;

class Student{
    
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int english_marks;
    int total_marks;
};
int students_compare(Student s1, Student s2);
int main()
{
    // Write your code here
    
    int N;
    cin>>N;
    Student s[N];
    
    for(int i=0;i<N;i++){
        cin>>s[i].name >>s[i].cls >>s[i].section >>s[i].id >>s[i].math_marks >>s[i].english_marks;
        
        s[i].total_marks = s[i].math_marks + s[i].english_marks;
    }
    
    sort(s,s+N,students_compare);
    
    for(int i=0;i<N;i++){
        cout << s[i].name <<" " << s[i].cls << " " << s[i].section <<" " << s[i].id << " " << s[i].math_marks << " "<< s[i].english_marks <<endl;
    }

    return 0;
}

int students_compare(Student s1, Student s2){
    if (s1.total_marks>s2.total_marks){
        return 1;
    }
    else if(s1.total_marks<s2.total_marks){
        return 0;
    }
    else{
        return s1.id < s2.id;
    }
}
