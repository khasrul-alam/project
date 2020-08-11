#include<bits/stdc++.h>
using namespace std;
vector<int> v(1000),v2(1000);

int n;
double r;

void box();
void clrscr();
void gotoxy(int x,int y);
int findHigh(vector<int> ara);
int findLow(vector<int> ara);
double calculateMode(vector<int> & numbers);
double calculateMedian(vector<int> & numbers);
double calculateMean(vector<int> & numbers);
double calculatePercentile(vector<int> & numbers, int q);
double calculateDecile(vector<int> & numbers, int q);
double calculateQuartile(vector<int> & numbers, int q);
int range(vector<int> ara);
double mean_deviation(vector<int> ara);
double variance(vector<int> ara);
double standard_deviation(vector<int> ara);
double CV(vector<int> ara);
string pearson();
void histogram(vector<int> v);
void graph(vector<int> X,vector<int> Y);
void data_entry1();
void data_entry2();
void option();
void opt01();
void opt02();
void opt03();
void opt04();
void opt05();
void homepage();
void meet();
void thank_you();

int main()
{
    system("COLOR F1");
    homepage();
}

void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}
void clrscr()
{
    system("CLS");
}
void box()
{
    int i;
    system("CLS");
    gotoxy(23,2);
    for(i=0; i<75; i++)
        cout<<"=";
    for(i=0; i<20; i++)
    {
        gotoxy(23,3+i);
        cout<<"|";
        gotoxy(98,3+i);
        cout<<"|";
    }
    gotoxy(23,22);
    for(i=0; i<75; i++)
        cout<<"=";
}
double calculateMedian(vector<int> & numbers)
{
    sort(numbers.begin(), numbers.begin()+n);
    int  median;
    if(n%2==0)
    {
        median = (numbers[n/2-1] + numbers[n/2])/2;
    }
    else
    {
        median = numbers[n/2];
    }
    return median;
}
double calculateMode(vector<int> & numbers)
{
    int mode = 0;
    double val=0;
    map<int, int> freq;
    for(int i=0; i<n; i++)
    {
        freq[numbers[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(freq[numbers[i]]>1)
        {
            if(mode<freq[numbers[i]])
            {
                mode = freq[numbers[i]];
                val = numbers[i];
            }
        }
    }
    return val;
}
double calculateMean(vector<int> & numbers)
{
    double sum = 0, mean;
    for(int i=0; i<n; i++)
    {
        sum = sum + numbers[i];
    }
    mean = sum/n;
    return mean;
}


void opt01()
{
    system("CLS");
    box();
    gotoxy(42,4);
    cout<<"*********************************";
    gotoxy(42,5);
    cout<<"******** Mean_Median_Mode *******";
    gotoxy(42,6);
    cout<<"*********************************";
    gotoxy(37,11);
    cout<<"1| Mean:"<<calculateMean(v);
    gotoxy(37,12);
    cout<<"2| Median:"<<calculateMedian(v);
    gotoxy(37,13);
    cout<<"3| Mode:"<<calculateMode(v);
    int x;
    gotoxy(43,17);
    cout<<"[press 1 to go back, 0 for exit]";
    gotoxy(58,18);
    cin>>x;
    if(x==1)
        option();
    else if(0)
        thank_you();
    else
        opt01();

}
void opt02()
{
    int x;
    system("CLS");
    box();
    gotoxy(42,4);
    cout<<"*********************************";
    gotoxy(42,5);
    cout<<"********     Histogram    *******";
    gotoxy(42,6);
    cout<<"*********************************";
    gotoxy(37,11);
    histogram(v);


    gotoxy(43,19);
    cout<<"[press 1 to go back, 0 for exit]";
    gotoxy(58,20);
    cin>>x;
    if(x==1)
        option();
    else if(0)
        thank_you();
    else
        opt02();

}
void opt03()
{
    system("CLS");
    int x;
    box();
    gotoxy(42,4);
    cout<<"*********************************";
    gotoxy(42,5);
    cout<<"***Quartile,Decile ,Percentile***";
    gotoxy(42,6);
    cout<<"*********************************";

    gotoxy(37,11);
    cout<<"Enter the term to find quartile [0-3]: ";
    gotoxy(76,11);
    cin>>x;
    gotoxy(37,12);
    cout<<"1| Quartile  : "<<calculateQuartile(v,x);


    gotoxy(37,13);
    cout<<"Enter the term to find decline [0-9]: ";
    gotoxy(76,13);
    cin>>x;
    gotoxy(37,14);
    cout<<"2| Decile    : "<<calculateDecile(v,x);


    gotoxy(37,15);
    cout<<"Enter the term to find percentile [0-99]: ";
    gotoxy(80,15);
    cin>>x;
    gotoxy(37,16);
    cout<<"3| percentile: "<<calculatePercentile(v,x);

    gotoxy(43,18);
    cout<<"[press 1 to go back, 0 for exit]";
    gotoxy(58,19);
    cin>>x;
    if(x==1)
        option();
    else if(0)
        thank_you();
    else
        opt03();

}
void opt04()
{
    system("CLS");
    box();
    gotoxy(42,4);
    cout<<"*********************************";
    gotoxy(42,5);
    cout<<"**** Range,MD,Variance,SD,CV ****";
    gotoxy(42,6);
    cout<<"*********************************";
    gotoxy(37,11);
    cout<<"1| Range                   : "<<range(v);
    gotoxy(37,12);
    cout<<"2| Mean Deviation          : "<<mean_deviation(v);
    gotoxy(37,13);
    cout<<"3| Variance                : "<<variance(v);
    gotoxy(37,14);
    cout<<"4| Standard Deviation      : "<<standard_deviation(v);
    gotoxy(37,15);
    cout<<"4| Co-efficient of variance: "<<standard_deviation(v);


    int x;
    gotoxy(43,19);
    cout<<"[press 1 to go back, 0 for exit]";
    gotoxy(58,20);
    cin>>x;
    if(x==1)
        option();
    else if(0)
        thank_you();
    else
        opt04();

}

void opt05()
{
    system("CLS");
    box();
    gotoxy(38,4);
    cout<<"************************************************";
    gotoxy(38,5);
    cout<<"**** Karl Pearson s Correlation Coefficient ****";
    gotoxy(38,6);
    cout<<"************************************************";
   // data_entry2();
    gotoxy(37,11);
    string str=pearson();
    cout<<"           Corelation coefficient : "<<r<<endl;
    gotoxy(35,13);
    cout<<"( This indicates a "<<str<<"relation between variables ) ";
    int x;
    gotoxy(43,17);
    cout<<"[press 1 to go back, 0 for exit]";
    gotoxy(58,18);
    cin>>x;
    if(x==1)
        option();
    else if(0)
        thank_you();
    else
        opt05();

}
void option()
{
    int x;
    system("CLS");
    box();
    gotoxy(42,4);
    cout<<"*********************************";
    gotoxy(42,5);
    cout<<"********     Options      *******";
    gotoxy(42,6);
    cout<<"*********************************";
    gotoxy(45,8);
    cout<<"[ press for desired option ]";
    gotoxy(37,11);
    cout<<"1| Mean,Median,Mode";
    gotoxy(37,12);
    cout<<"2| Histogram ";
    gotoxy(37,13);
    cout<<"3| Quartile , Decile, Percentile";
    gotoxy(37,14);
    cout<<"4| Range , Mean Deviation, Variance , Standard deviation ,";
    gotoxy(37,15);
    cout<<"   Co-efficient of variance";
    gotoxy(37,16);
    cout<<"5| Karl Pearsons Correlation Coefficient";


    gotoxy(45,20);
    cout<<"[ 0 for go back -1 for exit ]";
    gotoxy(58,9);
    cin>>x;
    if(x==0)
        data_entry1();
    else if(x==1)
        opt01();
    else if(x==2)
        opt02();
    else if(x==3)
        opt03();
    else if(x==4)
        opt04();
    else if(x==5)
        data_entry2();
    else if(x==-1)
        thank_you();
    else
        option();

}
void data_entry1()
{
    system("CLS");
    box();
    gotoxy(42,4);
    cout<<"*********************************";
    gotoxy(42,5);
    cout<<"********    Data Entry    *******";
    gotoxy(42,6);
    cout<<"*********************************";

    gotoxy(50,8);
    cout<<"Number of Element: ";
    gotoxy(57,9);
    cin>>n;
    gotoxy(48,11);
    cout<<"Enter all "<<n<<" Element: ";
    gotoxy((58-n),12);
    for(int i=0; i<n; i++)
        cin>>v[i];
    option();
}
void data_entry2()
{
    system("CLS");
    box();
    gotoxy(42,4);
    cout<<"******************************************";
    gotoxy(42,5);
    cout<<"**2nd Data Entry for finding co-relation**";
    gotoxy(42,6);
    cout<<"******************************************";


    gotoxy(48,11);
    cout<<"Enter all "<<n<<" Element: ";
    gotoxy((58-n),12);
    for(int i=0; i<n; i++)
        cin>>v2[i];
    opt05();

}



void homepage()
{
    system("CLS");
    box();
    gotoxy(42,4);
    cout<<"*********************************";
    gotoxy(42,5);
    cout<<"******** STATICAL TOOLBOX *******";
    gotoxy(42,6);
    cout<<"*********************************";
    gotoxy(47,10);
    cout<<"[ press 1 to Enter ]"<<endl;
    gotoxy(47,11);
    cout<<"[ press 0 to Exit  ]"<<endl;
    gotoxy(43,14);
    cout<<"[ press 2 to Meet the team ]"<<endl;
    gotoxy(56,12);
    int press;
    cin>>press;
    if(press==2)
        meet();
    else if(press==1)
       data_entry1();
    else if(press==0)
    {
        system("CLS");
        return;
    }
}
void thank_you()
{
    system("CLS");
    box();
    gotoxy(42,10);
    cout<<"*********************************";
    gotoxy(42,11);
    cout<<"********     Thank You    *******";
    gotoxy(42,12);
    cout<<"*********************************\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

double calculatePercentile(vector<int> & numbers, int q)
{
    sort(numbers.begin(), numbers.begin()+n);
    double percentile = (q*(n+1))/100.0;
    double frac,val;
    int x;
    x = (int)percentile;
    frac = percentile-x;
    if(frac>0.0)
    {
        val = numbers[x-1]+frac*(numbers[x]-numbers[x-1]);
        return val;
    }
    else
    {
        return val = numbers[x-1];
    }
}


double calculateDecile(vector<int> & numbers, int q)
{
    sort(numbers.begin(), numbers.begin()+n);
    double decile = (q*(n+1))/10.0;
    double frac,val;
    int x;
    x = (int)decile;
    frac = decile-x;
    if(frac>0.0)
    {
        val = numbers[x-1]+frac*(numbers[x]-numbers[x-1]);
        return val;
    }
    else
    {
        return val = numbers[x-1];
    }
}

double calculateQuartile(vector<int> & numbers, int q)
{
    sort(numbers.begin(), numbers.begin()+n);
    double quartile = (q*(n+1))/4.0;
    double frac,val;
    int x;
    x = (int)quartile;
    frac = quartile-x;
    if(frac>0.0)
    {
        val = numbers[x-1]+frac*(numbers[x]-numbers[x-1]);
        return val;
    }
    else
    {
        return val = numbers[x-1];
    }
}
int findHigh(vector<int> ara)
{
    int x=ara[0],n=ara.size();
    for(int i=0; i<n; i++)
        x=max(x,ara[i]);
    return x;
}
int findLow(vector<int> ara)
{
    int x=ara[0],n=ara.size();;
    for(int i=0; i<n; i++)
        x=min(x,ara[i]);
    return x;
}

int range(vector<int> ara)
{
    return (findHigh(ara)-findLow(ara));
}
double mean_deviation(vector<int> ara)
{
    double n=ara.size(),x=0,x_mean=calculateMean(ara);
    for(int i=0; i<n; i++)
    {
        x+=abs(ara[i]-x_mean);
    }
    return (double)(x/n);
}
double variance(vector<int> ara)
{
    double n=ara.size(),x=0,x_mean=calculateMean(ara);
    for(int i=0; i<n; i++)
    {
        x+=((ara[i]-x_mean)*(ara[i]-x_mean));
    }
    x=sqrt(x/n);

    return x;
}
double standard_deviation(vector<int> ara)
{
    double x=variance(ara);
    return sqrt(x);
}
double CV(vector<int> ara)
{
    return (standard_deviation(ara)*100)/calculateMean(ara);
}
string pearson()
{
    string str="";
    double x_mean=calculateMean(v),y_mean=calculateMean(v2),X=0,Y=0,Z=0;
    for(int i=0; i<n; i++)
    {
        X=X+((v[i]-x_mean)*(v2[i]-y_mean));
        Y=Y+((v[i]-x_mean)*(v[i]-x_mean));
        Z=Z+((v2[i]-y_mean)*(v2[i]-y_mean));
    }
    Y=sqrt(Y);
    Z=sqrt(Z);
    r= X/(Y*Z);
    if(r>0)
        return "positively ";
    else if (r<0)
        return "Negatively ";
    if(r>=0.81 || r<= -0.81)
        return "Very High ";
    else if(r>=0.60 || r<= -0.60)
        return "High Moderate";
    else if(r>=0.41 || r<= -0.41)
        return "Moderate ";
    else if(r>=0.21 || r<= -0.21)
        return "low ";
    else
        return "Very low ";

}
void meet()
{
    clrscr();
    box();
    gotoxy(42,4);
    cout<<"*********************************";
    gotoxy(42,5);
    cout<<"********  Meet the Team  *******";
    gotoxy(42,6);
    cout<<"*********************************";

    gotoxy(40,10);
    cout<<"Tanjil Rahman             ||  191-15-12536";
     gotoxy(40,11);
    cout<<"Rubaiya Tasnim Sholi      ||  191-15-12361";

     gotoxy(40,12);
    cout<<"Md. Foysal Ahmed Roni     ||  191-15-12180";
     gotoxy(40,13);
    cout<<"S.M. Khasrul Alam Shakil  ||  191-15-12180";

    gotoxy(43,18);
    cout<<"[press 1 to go home, 0 for exit]";
    gotoxy(58,19);
    int x;
    cin>>x;
    if(x==1)
        homepage();
    else if(x==0)
        thank_you();
    else
        meet();
}
void histogram(vector<int> ara)
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

    gotoxy(45,10);
    printf("**X axis=frequency||Y axis=Entry**\n\n");
    start=low;
    int po=12;
    for(i=0; i<numOfCls; i++)
    {
        cnt=0;
        gotoxy(40,po++);
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
    gotoxy(40,po++);
    for(i=0; i<9; i++)
        cout<<"-----";

    gotoxy(40,po++);
    cout<<"       |";
    for(i=1; i<10; i++)
        printf("%4d",i);
    cout<<endl<<endl;

}
