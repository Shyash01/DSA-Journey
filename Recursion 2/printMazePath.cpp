#include<iostream>
using namespace std;


void printPath(int sr,int sc,int er,int ec,string s){
    if(sr>er||sc>ec) return ;
    if(sr == er && sc == ec){ // destination reached;
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+"R "); // right
    printPath(sr+1,sc,er,ec,s+"D "); //down
    return;
}
int main(){
    // cout<<maze(1,1,3,3);
    printPath(1,1,5,5,"");
}