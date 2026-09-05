#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Optimal Solution
int main(){
    
        vector<vector<int>> intervals = {{1,3},{14,18},{2,6},{13,15},{4,8},{9,12}};
        if(intervals.empty()) return {};

        sort(intervals.begin(),intervals.end());
        
        cout<<"{ ";
        for(int i=0;i<intervals.size();i++){
                cout<<"{"<<intervals[i][0]<<","<<intervals[i][1]<<"}"<<" ";
        }
        cout<<"}";


        

        vector<vector<int>> ans;
        ans.push_back(intervals[0]);

        int n = intervals.size();
        for(int i=1;i<n;i++){
            int st = intervals[i][0];
            int end = intervals[i][1];
            int j=ans.size()-1;

            if(ans[j][1]>=st ){
                ans[j][1] = max(ans[j][1],end);
            }
            else{
                ans.push_back({st,end});
            }

        }  
        
        cout<<endl;
        cout<<"{ ";
        for(int i=0;i<ans.size();i++){
                cout<<"{"<<ans[i][0]<<","<<ans[i][1]<<"}"<<" ";
        }
        cout<<"}";

        
}






// Brute Force Solution
// int main(){

//     vector<vector<int>> intervals = {{1,3},{14,18},{2,6},{13,15},{4,8},{9,12}};

//     sort(intervals.begin(),intervals.end());
    
//     cout<<"{ ";
//     for(int i=0;i<intervals.size();i++){
//             cout<<"{"<<intervals[i][0]<<","<<intervals[i][1]<<"}"<<" ";
//     }
//     cout<<"}";

//     int n = intervals.size();
//     vector<vector<int>> Ans;

//     for(int i=0;i<intervals.size();){
//         int start =intervals[i][0];
//         int end = intervals[i][1];

//         int j=i+1;
//         while(j<n && intervals[j][0]<=end){
//             end = max(end,intervals[j][1]);
//             j++;
//         }
        
//         Ans.push_back({start,end});
   
//         i=j;

        
//     }

//     cout<<endl<<endl;

//     cout<<"{ ";
//     for(int i=0;i<Ans.size();i++){
//             cout<<"{"<<Ans[i][0]<<","<<Ans[i][1]<<"}"<<" ";
//     }
//     cout<<"}";

    




    
// }