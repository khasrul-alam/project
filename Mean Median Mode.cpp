#include<bits/stdc++.h>
using namespace std;

double calculateMedian(vector<double> & numbers, int n)
{
   sort(numbers.begin(), numbers.end());
   double median;
   if(n%2==0)
   {
       median = (numbers[n/2-1] + numbers[n/2])/2;
   }else
   {
       median = numbers[n/2];
   }
   return median;
}

double calculateMean(vector<double> & numbers,int n)
{
    double sum = 0, mean;
    for(int i=0; i<n; i++)
    {
        sum = sum + numbers[i];
    }
    mean = sum/n;
    return mean;
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
    int n;
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

    double mean = calculateMean(numbers,n);
    double median = calculateMedian(numbers,n);
    cout<<"The mean of this list is: "<<mean<<endl;
    cout<<"The median of this list is: "<<median<<endl;

    return 0;
}
