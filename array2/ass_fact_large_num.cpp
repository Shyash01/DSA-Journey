#include<iostream>
#include<vector>

using namespace std;

void factorialLargeNum(int N){
    vector<int> ans(1,1);

    while(N>1){
        int carry = 0;
        int size = ans.size();
        int res;

        for(int i=0;i<size;i++){
            res = ans[i] * N + carry;
            carry = res/10;
            ans[i] = res%10;
        }

        while(carry){
            ans.push_back(carry%10);
            carry = carry/10;
        }
        N--;
    }

    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    

}

int main(){
    int N;
    cout<<"Enter number: ";
    cin>>N;
    cout<<"The factorial of "<<N<<" is: ";
    factorialLargeNum(N);
    

}