#include <iostream>
#include <conio.h>
using namespace std;
float matrix[2][2];
int drawLine(){
    for(int l=0;l<60;l++){
        cout<<"-";
    }
    cout<<endl;
    return 0;
}

struct calculate{
float determinant(){
  float a=matrix[0][0],b=matrix[0][1],c=matrix[1][0],d=matrix[1][1];
  float determinant=a*d-b*c;
  return determinant;
}
void adjoint(){


}
void inverse(){
float InverseDeterminant=1/determinant();

}
};

void input(){
    drawLine();
    
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
    calculate c1; 
    
    drawLine();
    int operation;
    cout<<"Enter the following number according to your desired operation\n"<<endl<<"[1] Determinant\n"<<endl<<"[2] Adjoint\n"<<endl<<"[3] Inverse\n";
    cin>>operation;
    calculate();
    switch(operation){
        case 1 :
               cout<<c1.determinant();
               break;
        case 2 :
               c1.adjoint();
               break;
        case 3 :
                c1.inverse();
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