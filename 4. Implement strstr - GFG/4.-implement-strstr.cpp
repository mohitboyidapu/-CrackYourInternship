// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int n = s.length(), m = x.length(), ind = -1;
     for(int i=0; i<=n-m; i++){
         if(s[i] == x[0]){
             bool flag = true;
             for(int j=0; j<m; j++){
                 if(x[j] != s[i+j]){
                     flag = false;
                     break;
                 }
             }
             if(flag) {
                 ind = i;
                 break;
             }
         }
     }
     return ind;
}