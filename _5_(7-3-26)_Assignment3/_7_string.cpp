#include <iostream>
#include <cstring>
using namespace std;

class String7 {

    char *str;

public:

    String7() {

        str=new char[1];
        str[0]='\0';
    }

    String7(const char *s) {

        str=new char[strlen(s)+1];
        strcpy(str,s);
    }

    String7(const String7 &s) {

        str=new char[strlen(s.str)+1];
        strcpy(str,s.str);
    }

    ~String7() {

        delete[] str;
    }

    String7& operator=(const String7 &s) {

        delete[] str;

        str=new char[strlen(s.str)+1];
        strcpy(str,s.str);

        return *this;
    }

    String7 operator+(String7 &s) {

        String7 temp;

        delete[] temp.str;

        temp.str=new char[strlen(str)+strlen(s.str)+1];

        strcpy(temp.str,str);
        strcat(temp.str,s.str);

        return temp;
    }

    friend ostream& operator<<(ostream &out,String7 &s) {

        out<<s.str;
        return out;
    }

    friend istream& operator>>(istream &in,String7 &s) {

        char temp[100];

        in>>temp;

        delete[] s.str;

        s.str=new char[strlen(temp)+1];

        strcpy(s.str,temp);

        return in;
    }
};

int main() {

    String7 s1,s2;

    cout<<"Enter String1: ";
    cin>>s1;

    cout<<"Enter String2: ";
    cin>>s2;

    String7 s3=s1+s2;

    cout<<"S1 = "<<s1<<endl;
    cout<<"S2 = "<<s2<<endl;
    cout<<"S3 = "<<s3<<endl;
}