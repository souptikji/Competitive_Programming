#include<iostream> 
using namespace std; 
int max(int a,int b) 
{ 
        if(a>b) 
                return a; 
        else 
                return b; 
} 

int main() 
{ 
        int n,k,cnt=0; 
        cout<<"\nEnter the count of numbers :"; 
        cin>>n; 
        //Set of Elements 
        cout<<"\nEnter the elements :"; 
        int A[n]; 
        for(int i = 0; i<n; i++) 
                cin>>A[i]; 
        //Input Sum Value 
        cout<<"\nEnter the value of k :"; 
        cin>>k; 
        //Matrix for holding boolean values for subproblems (max subproblems upto nk) 
        int **M; 
        M = (int **)new int[n]; 
        for(int i=0; i<n; i++) 
                M[i] = new int[k+1]; 
        //Populate all the values to false 
        for(int i=0; i<n; i++) 
                for(int j=0; j<=k; j++) 
                        M[i][j] = 0; 
        for(int i=0; i<n; i++) 
                M[i][0] = true; 
        for(int i=1; i<n; i++) 
                for(int j=0; j<=k; j++) 
                        if(j-A[i]>=0) 
                        { 
                                M[i][j] = max(M[i-1][j], M[i-1][j-A[i]]); 
                                if(M[i][j]==1) cnt++;
                        } 
        //if(M[n-1][k] == 1) 
//                cout<<"\nPossible Subset present"; 
//        else 
//                cout<<"\nPossible Subset not present"; 
        cout<<"cnt is "<<cnt;
        cin.get(); 
        int faal;
        cin>>faal; 
}
