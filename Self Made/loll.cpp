// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {int n;
// cin>>n;

// while(n--)
// {
//    int p;
//    cin>>p;
//    int arr[p];
//    for(int i=0;i<p;i++)
//    {
//     cin>>arr[i];
//    }
//    int k;
//   cin>>k;
//   k=k%p;
//   while(k--)
//   {
//    int temp=arr[p-1];
// for(int i=p;i>0;i--)
// {
// arr[i]=arr[i-1];
// }
// arr[0]=temp;
//   }
// for(int i=0;i<p;i++)
//    {
//     cout<<arr[i]<<" ";
//    }
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y,z=INT_MAX;
        cin>>x>>y;
        for(int i=1;i<=10000;i++)
        {
            if(z>((x^i)+(y^i)))
            {
                z=((x^i)+(y^i));
            }
          
         }
         cout<<z<<endl;
        }
}
