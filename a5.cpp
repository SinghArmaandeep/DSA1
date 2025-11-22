//Q1
#include <iostream>
using namespace std;
int main() {
   int a[100], b, c, i, j, n;
    cout<<"enter the number of elements into the diagonal matrix:\n";
    cin>>n;
    cout<<"enter elements into the array:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<a[i]<<"\t";
            }
            else
            {
                cout<<"0\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}

//Q2
#include <iostream>
using namespace std;

int main() {
   int a[100], i, j, n, k, l;
    cout<<"enter the order of the tri-diagonal matrix:\n";
    cin>>n;
    cout<<"enter elements into the array diagonal wise:\n";
    for(i=0;i<(3*n-2);i++)
    {
        cin>>a[i];
    }

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
         {
        if (j == i-1) cout << a[j] << "\t";           
        else if (j == i) cout << a[n-1+i] << "\t";      
        else if (j == i+1) cout << a[2*n-1+i] << "\t";  
        else cout << "0\t";
            }
    cout << "\n";
    }
}

//Q3
#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,n,k;
    cout<<"enter the index of the Lower triangular matrix:\n";
    cin>>n;
    cout<<"enter the elements into the matrix diagonal wise:\n";
    for(i=0;i<n*(n+1)/2;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           
            if(j<=i)
            {
                
            }
            else{
                cout<<"0\t";
            }
            
        }
        cout<<endl;
    }

}

