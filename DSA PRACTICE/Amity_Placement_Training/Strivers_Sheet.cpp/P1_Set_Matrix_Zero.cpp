#include <bits/stdc++.h> 
using namespace std;


int main() {
  vector<vector<int> > v = { {0,1,2,0}, {3,4,5,2},{1,3,1,5} };

  int m = v.size();
  int n = v[0].size();

  cout<<m<<" "<<n<<endl;


  vector<vector<int> > v1(m, vector<int> (n,0));

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(v[i][j]==0){
            v1[i][j] =1;
        }
    }
  }

 

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        
        if(v1[i][j]==1){
            
            for(int k=0;k<n;k++){
                v[i][k]= 0;
            }
            for(int l=0;l<m;l++){
                v[l][j]= 0;
            }
            
        }
    }
  }


}