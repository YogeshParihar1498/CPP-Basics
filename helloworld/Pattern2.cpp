#include<iostream>
using namespace std;
int main() 
{ int rows =4;
    int col =4 ;
    for(int i=1 ;i<=rows;i++){
        for(int j=1; j<= col;j++){
            if(i==rows|| i==1 || j==1 || j==col){
                cout<< "*";
            }
            else{
                cout<< " ";
            }

        }
        cout<<endl;
    }
    return 0;
}