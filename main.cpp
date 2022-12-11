#include <iostream>
#include <conio.h>
using namespace std;
int drawLine(){
    for(int l=0;l<60;l++){
        cout<<"-";
    }
    cout<<endl;
    return 0;
}
float determinant(){
  float a,b,c,d;
  float determinant=a*d-b*c;
  return determinant;
}
void adjoint(){

}
void inverse(){

}
void input(){
    drawLine();
    float matrix[2][2];
    cout<<"Enter first element\n";
    cin>>matrix[0][0];
    cout<<"Enter second element\n";
    cin>>matrix[0][1];
    cout<<"Enter third element\n";
    cin>>matrix[1][0];
    cout<<"Enter fourth element\n";
    cin>>matrix[1][1];
    for(int i=0;i<2;i++){ 
        for(int j=0;j<2;j++){
            cout<<matrix[i][j]<<"  ";    
        } 
        cout<<"\n";
}
}
void operationInput(){
    drawLine();
    int operation;
    cout<<"Enter the following number according to your desired operation\n"<<endl<<"[1] Determinant\n"<<endl<<"[2] Adjoint\n"<<endl<<"[3] Inverse\n";
    cin>>operation;
    switch(operation){
        case 1 :
               determinant();
               break;
        case 2 :
               adjoint();
               break;
        case 3 :
                inverse();
                break;
        default:
                cout<<"Invalid input please enter again";
                
                operationInput();
                break;
    }
}
int main(){
    input();
    operationInput();
    return 0;
}