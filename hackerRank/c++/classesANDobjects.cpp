#include <bits/stdc++.h>
using namespace std;

class Student{
  int scores[5];
  int totalScore = 0;

public:
    void input(){
        int n;
        for (int i = 0; i < 5; i++) {
            cin >> n;
            scores[i] = n;
            totalScore += n;
        }
    }
    
    int get_total_score(){
        return totalScore;
    }
};


int main(){
    int nStudents;
    cin >> nStudents;
    
    Student st[nStudents];
    for (int i = 0; i < nStudents; i++) {
        st[i].input();
    }
    
    int kristen_score = st[0].get_total_score();
    int count = 0; 
    for(int i = 1; i < nStudents; i++){
        int total = st[i].get_total_score();
        if(total > kristen_score){
            count++;
        }
    }
    cout << count;
    
    return 0;
}
