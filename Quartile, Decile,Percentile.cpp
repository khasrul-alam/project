#include<bits/stdc++.h>
using namespace std;
double calculatePercentile(vector<double> & numbers, int n, int q)
{
    sort(numbers.begin(), numbers.end());
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
    else{
        return val = numbers[x-1];
    }
}


double calculateDecile(vector<double> & numbers, int n, int q)
{
    sort(numbers.begin(), numbers.end());
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
    else{
        return val = numbers[x-1];
    }
}

double calculateQuartile(vector<double> & numbers, int n, int q)
{
    sort(numbers.begin(), numbers.end());
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
    else{
        return val = numbers[x-1];
    }
}

void readnumber(vector<double> & numbers, int n)
{
    double num;
    for(int i=0; i<n; i++)
    {
      cin>>num;
      numbers.push_back(num);
    }
}

int main()
{
    int n,q,d,p;
    cout<<"How many numbers are there in the list"<<endl;
    cin>>n;
    if(n<1)
    {
        cout<<"Error value. Please enter the number again"<<endl;
        cin>>n;
    }
    vector<double> numbers;
    cout<<"Please enter "<<n<<" numbers."<<endl;
    readnumber(numbers,n);
    cout<<"Enter the term to find quartile: ";
    cin>>q;
    if(q>3)
    {
        cout<<"ERROR! Please enter valid value: ";
        cin>>q;
    }
    cout<<calculateQuartile(numbers,n,q)<<"\n\n";
    cout<<"Enter the term to find decile: ";
    cin>>d;
    if(d>9)
    {
        cout<<"ERROR! Please enter valid value: ";
        cin>>d;
    }

    cout<<calculateDecile(numbers,n,d)<<"\n\n";

    cout<<"Enter the term to find percentile: ";
    cin>>p;
    if(p>99)
    {
        cout<<"ERROR! Please enter valid value: ";
        cin>>p;
    }
    cout<<calculatePercentile(numbers,n,p)<<endl;

    return 0;
}
