#include<bits/stdc++.h>
using namespace std;
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
double calculateMean(vector<int >  numbers)
{
    double sum = 0, mean,n=numbers.size();
    for(int i=0; i<n; i++)
    {
        sum = sum + numbers[i];
    }
    mean = sum/n;
    return mean;
}

void range(vector<int> ara)
{
    cout<<"Range:"<<(findHigh(ara)-findLow(ara))<<endl;
}
void mean_deviation(vector<int> ara)
{
    double n=ara.size(),x=0,x_mean=calculateMean(ara);
    for(int i=0;i<n;i++)
    {
        x+=abs(ara[i]-x_mean);
    }
    cout<<"Mean Deviation:"<<(double)(x/n)<<endl;
}
double variance(vector<int> ara)
{
    double n=ara.size(),x=0,x_mean=calculateMean(ara);
    for(int i=0;i<n;i++)
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
int main()
{
    vector<int> ara{1,2,3,4,5};
    range(ara);
    mean_deviation(ara);
    cout<<"variance:"<<variance(ara)<<endl;
    cout<<"Standard deviation:"<<standard_deviation(ara)<<endl;
    cout<<"Coefficient of variation fro population: "<<CV(ara)<<endl;

}
