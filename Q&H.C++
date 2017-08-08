//write a program for overlapping the Queen and Horse
// Actually this is for 1 time input check
#include <bits/stdc++.h>
using namespace std;
bool b[8][8];    //8*8 For horse
 int qx,qy;
    int hx,hy;
void DRqueen(int qx,int qy)
{
    if((qx>=0&&qx<8)&&(qy>=0&&qy<8))
    {
    if(b[qx][qy]==1)
    cout<<"("<<qx<<","<<qy<<")";
    DRqueen(qx+1,qy+1);
    }
}
void Dqueen(int qx,int qy)
{
    if((qx>=0&&qx<8)&&(qy>=0&&qy<8))
    {
    if(b[qx][qy]==1)
    cout<<"("<<qx<<","<<qy<<")";
    Dqueen(qx+1,qy);
    }
}
void Rqueen(int qx,int qy)
{
    if((qx>=0&&qx<8)&&(qy>=0&&qy<8))
    {
    if(b[qx][qy]==1)
    cout<<"("<<qx<<","<<qy<<")";
    Rqueen(qx,qy+1);
    }
}
void ULqueen(int qx,int qy)
{
    if((qx>=0&&qx<8)&&(qy>=0&&qy<8))
    {
    if(b[qx][qy]==1)
    cout<<"("<<qx<<","<<qy<<")";
    ULqueen(qx-1,qy-1);
    }
}
void Uqueen(int qx,int qy)
{
    if((qx>=0&&qx<8)&&(qy>=0&&qy<8))
    {
    if(b[qx][qy]==1)
    cout<<"("<<qx<<","<<qy<<")";
    Uqueen(qx-1,qy);
    }
}
void Lqueen(int qx,int qy)
{
    if((qx>=0&&qx<8)&&(qy>=0&&qy<8))
    {
    if(b[qx][qy]==1)
    cout<<"("<<qx<<","<<qy<<")";
    Lqueen(qx,qy-1);
    }
}
void DLqueen(int qx,int qy)
{
    if((qx>=0&&qx<8)&&(qy>=0&&qy<8))
    {
    if(b[qx][qy]==1)
    cout<<"("<<qx<<","<<qy<<")";
    DLqueen(qx-1,qy+1);
    }
}
void URqueen(int qx,int qy)
{
    if((qx>=0&&qx<8)&&(qy>=0&&qy<8))
    {
    if(b[qx][qy]==1)
    cout<<"("<<qx<<","<<qy<<")";
    URqueen(qx+1,qy-1);
    }
}

int main()
{
    cout<<"Enter the Queen position"<<endl;
    cin>>qx>>qy;
    assert(qx>=0&&qy<8);
    cout<<"Enter the Horse position"<<endl;
    cin>>hx>>hy;
    assert(hx>=0&&hy<8);
    b[hx+2][hy+1]=true;  // various possible move of horse
    b[hx-2][hy-1]=true;
    b[hx+1][hy+2]=true;
    b[hx-1][hy-2]=true;
    b[hx+2][hy-1]=true;
    b[hx-1][hy+2]=true;
    cout<<b[hx-1][hy+2];
    DRqueen(qx+1,qy+1);       // Down Right diagonal
    Dqueen(qx+1,qy);         //Down
    Rqueen(qx,qy+1);         //Right
    ULqueen(qx-1,qy-1);       // up left diagonal
    Uqueen(qx-1,qy);         // up
    Lqueen(qx,qy-1);         // left
    DLqueen(qx-1,qy+1);       //down left diagonal
    URqueen(qx+1,qy-1);       //up Right diagonal
    return 0;
}
