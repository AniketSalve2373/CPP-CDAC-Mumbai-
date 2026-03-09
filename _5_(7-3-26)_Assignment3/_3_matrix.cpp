#include <iostream>
using namespace std;

class Matrix3 {

    int rows,cols;
    int **arr;

public:

    Matrix3(int r=2,int c=2) {

        rows=r;
        cols=c;

        arr=new int*[rows];

        for(int i=0;i<rows;i++)
            arr[i]=new int[cols];
    }

    friend istream& operator>>(istream &in, Matrix3 &m) {

        for(int i=0;i<m.rows;i++)
            for(int j=0;j<m.cols;j++)
                in>>m.arr[i][j];

        return in;
    }

    friend ostream& operator<<(ostream &out, Matrix3 &m) {

        for(int i=0;i<m.rows;i++) {
            for(int j=0;j<m.cols;j++)
                out<<m.arr[i][j]<<" ";
            out<<endl;
        }

        return out;
    }

    Matrix3 operator+(Matrix3 &m) {

        Matrix3 temp(rows,cols);

        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                temp.arr[i][j]=arr[i][j]+m.arr[i][j];

        return temp;
    }

    bool operator==(Matrix3 &m) {

        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                if(arr[i][j]!=m.arr[i][j])
                    return false;

        return true;
    }

    ~Matrix3() {

        for(int i=0;i<rows;i++)
            delete[] arr[i];

        delete[] arr;
    }
};

int main() {

    Matrix3 m1(2,2),m2(2,2),m3;

    cout<<"Enter Matrix1\n";
    cin>>m1;

    cout<<"Enter Matrix2\n";
    cin>>m2;

    m3=m1+m2;

    cout<<"Result Matrix\n";
    cout<<m3;

    if(m1==m2)
        cout<<"Matrices are Equal\n";
    else
        cout<<"Matrices are Not Equal\n";

}