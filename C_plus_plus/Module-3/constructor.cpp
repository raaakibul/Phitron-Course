#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g){
        roll = r;
        cls = c;
        gpa = g;
    }

};
int main(){
    // Student s1(45,5,3.2);
    // Student s2(10,5,4.32);
    int r, c;
    double g;
    cin >> r >> c >> g;
    Student s1(r, c, g);
    Student s2(r,c,g);

    cout << s1.roll << " " << s1.cls << " " << s1.gpa << endl;
    cout << s2.roll << " " << s2.cls << " "
    << s2.gpa << endl;

    return 0;
}