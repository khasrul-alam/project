void graph(int X[],int Y[],int ara_size)
{
    int i,j,k,lowX=findLow(X,n),highX=findHigh(X,n),lowY=findLow(Y,n),highY=findHigh(Y,n),xx,yy;
    int n=ara_size;
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

