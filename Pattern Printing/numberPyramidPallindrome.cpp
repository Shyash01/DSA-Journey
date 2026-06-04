#include <iostream>
using namespace std;
// nst nsp concept

int main()
{
    int m;
    cout << "Enter number: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i; j++)
        {
            cout << " ";
        }
        int num = 1;
        for (int k = 1; k <= i; k++)
        {
            cout << num;
            num++;
        }
        if(i>1){
        for(int l=i-1;l>0;l--){
            cout<<l;
        }
        }
        
    cout << endl;
}
}