#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
    
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class student_compare{
    public:
    int operator()(Student s1, Student s2){
        if(s1.marks < s2.marks){
            return 1;
        }
        if(s1.marks > s2.marks){
            return 0;
        }
        return (s1.roll > s2.roll) ? 1 : 0;
    }
};

int main()
{
    // Write your code here    
    int size;
    cin >> size;
    
    priority_queue<Student, vector<Student>, student_compare>student_queue;
    for(int i=0;i<size;i++){
        string student_name;
        int student_roll, student_marks;
        
        cin >> student_name >> student_roll >> student_marks;
        
        Student student_object(student_name, student_roll, student_marks);
        
        student_queue.push(student_object);
    }
    
    int queries;
    cin >> queries;
    
    while(queries--){
        int command;
        cin >> command;
        
        if(command==0){
            string new_name;
            int new_roll, new_marks;
            cin >> new_name >> new_roll >> new_marks;
            
            Student new_student(new_name, new_roll, new_marks);
            
            student_queue.push(new_student);
            
            cout << student_queue.top().name << " " << student_queue.top().roll << " " << student_queue.top().marks <<
                endl;
        }
        else if(command==1){
            if (student_queue.empty()){
                cout << "Empty" << endl;
            }
            else{
                cout << student_queue.top().name << " " << student_queue.top().roll << " " << student_queue.top().marks
                << endl;
            }
        }
        else if(command==2){
            if (student_queue.empty()){
                cout << "Empty" << endl;
            }
            else{
                student_queue.pop();
                
                if(student_queue.empty()){
                    cout << "Empty" << endl;
                }
                else{
                    cout << student_queue.top().name << " " << student_queue.top().roll << " " << 
                    student_queue.top().marks << endl;
                }
            }
        }
    }

    return 0;
}