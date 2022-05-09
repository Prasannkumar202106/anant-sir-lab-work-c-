//Write a program to read a matrix of size mxn from the keyboard and display the same using function//
#include<iostream>
#include<iomanip>
using namespace std;
void matrix(int m,int n,int i)
{
    float **p;
    p=new float*[m];
    for(int i=0;i<m;i++)
    {
        p[i]=new float[n];
    }
    cout<<" Enter "<<m<<" by "<<n<<" matrix elements "<<endl;
    for(i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            float value;
            cin>>value;
            p[i][j]=value;
        }
    }
    cout<<" The given matrix is :"<<endl;
    for(i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j]<<"   ";
        }
        cout<<"\n";
    }
}

int main()
{
    int x,y,z;
    cout<<" Enter size of matrix : ";
    cin>>x>>y;
    matrix(x,y,z);
    return 0;
}


