#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 0, 5, 2}, {1, 3, 1, 5}};
  

        int m = matrix.size();
        int n = matrix[0].size();

          cout << m << " " << n << endl;
        bool firstRowZero = false;
        bool firstColZero = false;

        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (firstRowZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        if (firstColZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }

  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }


}








































// Better Approach - Using Extra Row and Column
//  vector<vector<int>> v = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

//   int m = v.size();
//   int n = v[0].size();

//   cout << m << " " << n << endl;

//   vector<int> row(m);
//   vector<int> col(n);

//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       if (v[i][j] == 0)
//       {

//         row[i] = -1;
//         col[j] = -1;
//       }
//     }
//   }

//   cout << endl;

//   for (int i = 0; i < m; i++)
//   {
//     cout << row[i] << " ";
//   }
//   cout << endl;
//   cout << endl;
//   for (int j = 0; j < n; j++)
//   {
//     cout << col[j] << " ";
//   }
//   cout << endl;



//   for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       if(row[i]==-1 || col[j]==-1){
//         v[i][j]=0;
//       }
//     }
//   }

  
  
//   for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//   }

// Slowest Approach - Brute Force Approach
//  vector<vector<int> > v = { {0,1,2,0}, {3,4,5,2},{1,3,1,5} };

//   int m = v.size();
//   int n = v[0].size();

//   cout<<m<<" "<<n<<endl;

//     for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         if(v[i][j]==0){

//             for(int k=0;k<n;k++){
//                 if(v[i][k]!=0){
//                     v[i][k]= INT_MIN;
//                 }

//             }
//             for(int l=0;l<m;l++){
//                 if(v[l][j]!=0){
//                     v[l][j]= INT_MIN;
//                 }
//             }
//         }
//     }
//   }

//    for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         if(v[i][j] ==INT_MIN){

//             v[i][j] = 0;
//         }
//     }
//   }

//   for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//   }

// My Solution  - Thinking is right for better Approach
//   vector<vector<int> > v = { {0,1,2,0}, {3,4,5,2},{1,3,1,5} };

//   int m = v.size();
//   int n = v[0].size();

//   cout<<m<<" "<<n<<endl;

//   vector<vector<int> > v1(m, vector<int> (n,0));

//   for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         if(v[i][j]==0){
//             v1[i][j] =1;
//         }
//     }
//   }

// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){

//         if(v1[i][j]==1){

//             for(int k=0;k<n;k++){
//                 v[i][k]= 0;
//             }
//             for(int l=0;l<m;l++){
//                 v[l][j]= 0;
//             }

//         }
//     }
//   }