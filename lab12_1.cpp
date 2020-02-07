#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}
void stat(const double A[], int N,double B[])
{
    for(int i=0; i<N; i++)
    {
        B[0]+=A[i];

    }
    B[0]=B[0]/N;
    double q;
    for(int j=0; j<N;j++)
    {
        q+=pow((A[j]-B[0]),2);
    }
    B[1]=sqrt(q/N);
    double max=A[0],min=A[0];
    for(int i=1; i<N;i++)
    {
        if(A[i]>max) max=A[i];
        if(A[i]<min) min=A[i];
    }
    B[2]=max;
    B[3]=min;

    
}
//Write definition of stat() here 