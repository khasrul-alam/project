#include<bits/stdc++.h>
using namespace std;
void histogram(vector<int> ara,int n)
{
    int high=ara[0],low=ara[0],numOfCls,width,i,start,j,k,MAX=0,x,cnt;
    for(i=0; i<n; i++)
    {
        high=max(high,ara[i]);
        low=min(low,ara[i]);
    }

    for(numOfCls=0,x=1; x<=n;)
    {
    numOfCls++;
    x=x*2;
    }
    width=ceil((high-low)/(numOfCls*1.0));
    printf("         ** Histogram **\n**X axis=frequency||Y axis=Entry**\n\n");
    start=low;
    for(i=0; i<numOfCls; i++)
    {
        cnt=0;
        printf("%.3d-%.3d|",start,start+width-1);
        for(j=0; j<n; j++)
        {
            if(ara[j]>=start && ara[j]<=(start+width-1))
                cnt++;
        }
        MAX=max(cnt,MAX);
        for(k=0; k<cnt; k++)
            cout<<"::::";
        cout<<endl;
        start+=width;
    }
    for(i=0; i<10; i++)
        cout<<"-----";
    cout<<endl;
    cout<<"       |";
    for(i=1; i<10; i++)
        printf("%4d",i);
    cout<<endl<<endl;

}
int main()
{
    vector<int> ara{99,100,105,106,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127};
    int n=ara.size();

    histogram(ara,n);

}
