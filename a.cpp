
#include <bits/stdc++.h>
using namespace std;
#define forl(i,a,n) for(int i=a;i<n;i++)
#define rfor(i,n,a) for(int i=n;i>=a;i--)
#define fore(i,a,n) for(int i=a;i<=n;i++)
int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

void xyzz()
{
    int array[10];
    for(int i=0;i<10;i++)
    {
        //cout<<array[i];
        array[i]=addition(i,i+1);
    }
}

void swap(int*, int*) ;

void bubbleSort(int*, int);

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int p1,p2;
    cin>>p1>>p2;
    //cout<<p1<<" "<<p2;
    if(p1<p2)
        swap(&p1,&p2);
    if(p1==p2)
    {
        cout<<0;
        return 0;
    }
    int zzzz=100;
    int arr[zzzz]={0};
    for(int i=0;i<zzzz;i++)
        arr[i]=i+1;
    bubbleSort(arr,zzzz);
    map<int,int> m,mp;
    for(int i=0;i<zzzz;i++)
        mp[arr[i]]++;
    int counting=0;
    //cout<<addition(p1,p2);
    while(p1!=1)
    {
        counting++;
        int f=0;
        int addd=addition(p1,p2);
        for(int i=2;i*i<=p1;i++)
        {
            if(p1%i==0)
            {
                //cout<<i<<" ";
                f=i;
                break;
            }
        }
        if(f)
            p1=p1/f;
        else
            p1=1;
        //cout<<p1<<" ";
        m[p1]=counting;
    }
    for(int i=0;i<zzzz;i++)
        mp[arr[i]]++;
    int countings=0;
    while(!m.count(p2))
    {
        countings++;
        int f=0;
        for(int i=2;i*i<=p2;i++)
        {
            if(p2%i==0)
            {
                f=i;
                //cout<<i<<" ";
                break;
            }
        }
        if(f)
            p2=p2/f;
        else
            p2=1;
    }
    cout<<countings+m[p2];
    return 0;
}   
void swap(int *p1, int *p2) 
{ 
    int temp = *p1; 
    *p1 = *p2; 
    *p2 = temp; 
} 

void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
} 
