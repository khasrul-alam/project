
#include<bits/stdc++.h>
using namespace std;
int findHigh(vector<int> ara,int n)
{
    int x=ara[0];
    for(int i=0; i<n; i++)
        x=max(x,ara[i]);
    return x;
}
int findLow(vector<int> ara,int n)
{
    int x=ara[0];
    for(int i=0; i<n; i++)
        x=min(x,ara[i]);
    return x;
}
void graph(vector<int> X,vector<int> Y,int n)
{
    int i,j,k,lowX=findLow(X,n),highX=findHigh(X,n),lowY=findLow(Y,n),highY=findHigh(Y,n),xx,yy;
    int ara[13][13];
    int x=(highX-lowX),y=(highY-lowY);
    for(i=0;i<13;i++)
        for(j=0;j<13;j++)
            ara[i][j]=0;
    for(i=1;i<=10;i++)
    {
        ara[i][0]=lowY +(y/10)*i;
        ara[0][i]=lowX + (x/10)*i;
    }

    for(i=0;i<n;i++)
    {
        xx=((X[i]-lowX)*10)/x;
        yy= ((Y[i]-lowY)*10)/y;
        ara[xx][yy]=1;
    }
   
    printf("                 **Co-realtion between two variable**\n\n\n");
    for(i=10;i>=0;i--)
    {
        for(j=0;j<=10;j++)
        {
            if(i==0 && j==0)
                printf("    0");
            else if(ara[i][j]==0)
                printf("     ");
            else if(j==0 || i==0)
            printf("%5d",ara[i][j]);
            else
                printf("    .");

        }
        cout<<endl;
    }
}
int main()
{
    //int x[]= {14,16,12,15,18,22,19,25,23,18,23,17},y[]= {215,325,184,332,406,522,412,614,544,421,445,408};
   vector<int> x{1,2,3,4,5,6,7,8,9,10,11,12},y{1,2,3,4,5,6,7,8,9,10,11,12};
    graph(x,y,sizeof(x));

}
