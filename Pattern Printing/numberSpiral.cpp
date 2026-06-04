#include<iostream>
using namespace std;
//nst nsp concept

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    // 1 1 1 1
    // 1 2 2 2
    // 1 2 3 3
    // 1 2 3 4

    // sir's soln

    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            int b=j;
            if(a>n) a=2*n-i;   // to keep a , b upto 4 only
            if(b>n) b=2*n-j;
            int x = n - min(a,b) + 1 ;

            cout<<" "<<x;
        }
        cout<<endl;
    }
   //mY SOLN
    
    // for(int i=1;i<=n;i++){
    //     int h=1;  
    //     for(int j=1;j<=2*n-1;j++){

    //             if(j<=n){
    //                 cout<<" "<<min(i,j);
    //             }
    //             else{
    //                 int col = n-h;
    //                 h++;
    //                 cout<<" "<<min(i,col);
    //             }
    //         }
    //     cout<<endl;
    //     }


    // int v = 0;
    // int row;
    // for(int i=n+1;i<=2*n-1;i++){
    //     v++;
    //     row = n-v;
    //     int t=1;
    //     for(int j=1;j<=2*n-1;j++){
            
    //         if(j<=n){
    //         cout<<" "<<min(row,j);
    //         }else{
    //             int col = n-t;
    //             t++;
    //             cout<<" "<<min(row,col);
    //         }
    //     }
    //     cout<<endl;

    //     }




}