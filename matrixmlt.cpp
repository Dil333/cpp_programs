#include<iostream>
#include<conio.h>
using namespace std;
int main{
    int a[3][3]={{2,3,4},{5,6,4},{2,5,3}};
    int b[3][3]={{3,5,4},{5,8,7},{6,9,8}};
    int c[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int i,j,k;
    cout<<"matrix form 1:\n";
    fori=0;i<3;i++{
        forj=0;j<3;j++{
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"matrix form 2:\n";
    fori=0;i<3;i++{
        forj=0;j<3;j++{
            cout<<" "<<b[i][j];
        }
        cout<<"\n";
    }
    cout<<"multiply matrix form:\n";
    fori=0;i<3;i++{
        forj=0;j<3;j++{
            fork=0;k<3;k++{
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    fori=0;i<3;i++{
        forj=0;j<3;j++{
            cout<<" "<<c[i][j];
        }
        cout<<"\n";
    }
    return 0;
    getch;
}