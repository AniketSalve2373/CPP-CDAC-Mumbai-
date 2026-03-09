#include <iostream>
#include <fstream>
using namespace std;

class Student2 {

    int roll;
    string name;
    float marks;

public:

    Student2(int r=0,string n="",float m=0) {
        roll=r;
        name=n;
        marks=m;
    }

    void input() {
        cout<<"Enter Roll Name Marks: ";
        cin>>roll>>name>>marks;
    }

    void writeFile(ofstream &f) {
        f<<roll<<" "<<name<<" "<<marks<<endl;
    }

    ~Student2() {
        cout<<"Destroying student "<<name<<endl;
    }
};

int main() {

    Student2 s[3];

    for(int i=0;i<3;i++)
        s[i].input();

    ofstream fout("students.txt");

    for(int i=0;i<3;i++)
        s[i].writeFile(fout);

    fout.close();

    ifstream fin("students.txt");

    string line;

    cout<<"\nFile Contents\n";

    while(getline(fin,line))
        cout<<line<<endl;

    fin.close();
}