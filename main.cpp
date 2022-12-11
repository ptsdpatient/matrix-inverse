#include <iostream>
using namespace std;
void input(){
    int matrix[2][2];
    cout<<"Enter first element";
    cin>>matrix[0][0];
    cout<<"Enter second element";
    cin>>matrix[0][1];
    cout<<"Enter third element";
    cin>>matrix[1][0];
    cout<<"Enter fourth element";
    cin>>matrix[1][1];
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) cout<<matrix[i][j];
}
void operation(){
    cout<<"Enter the following number according to your desired operation";
    
}
int main(){
    input();
    operation();
    return 0;
}