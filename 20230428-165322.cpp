#include<iostream>
using namespace std;
int main()
{
int num[10],sum,i,j,k;
float avg;
cout<<"enter ten numbers:";
for(i=0;i<10;i++)
cin>>num[i];
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(num[i]>num[j])
{
k=num[i];
num[i]=num[j];
num[i]=num[j];
num[j]=k;
}
}
}
for(i=0;i<10;i++)
cout<<num[i]<<" ";
for(i=0;i<10;i++)
sum+=num[i];
cout<<endl<<"sum="<<sum;
avg=sum/10.0;
cout<<endl<<"average"<<avg;
return 0;
}