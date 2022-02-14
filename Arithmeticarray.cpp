#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size \n";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0],curr_length=2,max_length=2,j=2;
    while (j<n)
    {
        if((arr[j+1]-arr[j])==pd){
            curr_length++;
        }
        else{
           pd= (arr[j+1]-arr[j]);
           curr_length=2;/* isliye lr rhe h kyuki 2 ka difference th lenge hi hamesha */
        }
        max_length=max(max_length,curr_length);
        j++;
    }

    cout<<"\n"<<max_length;
    
    return 0;
}