#include <iostream>
#include <string>
using namespace std;


class Student{
private:
    int Age;
    string First_name;
    string Last_name;
    int Standard;

public:
    void set_age(int age){
        Age = age;
    }
    int get_age(){
        return Age;
    }
    
    void set_first_name(string fname){
        First_name = fname;
    }
    string get_first_name(){
        return First_name;
    }
  
    void set_last_name(string lname){
        Last_name = lname;
    }
    string get_last_name(){
        return Last_name;
    }
  
    void set_standard(int st){
        Standard = st;
    }
    int get_standard(){
        return Standard;
    }
    
    
    string toString(){
        string s = to_string(Age) + ',' + First_name + ',' + Last_name + ',' + to_string(Standard);
        return s;
    }
    
};


int main(){
    Student st1;
    
    int age;
    cin >> age;
    st1.set_age(age);
    
    string fname;
    cin >> fname;
    st1.set_first_name(fname);
    
    string lname;
    cin >> lname;
    st1.set_last_name(lname);
    
    int stand;
    cin >> stand;
    st1.set_standard(stand);
    
    cout << st1.get_age() << endl;
    cout << st1.get_last_name() << ", " << st1.get_first_name() << endl;
    cout << st1.get_standard() << endl << endl;
    
    cout << st1.toString();
    
    
    return 0;
}
