#include <iostream>
#include <conio.h>
using namespace std;
float matrix[2][2];
float adjmatrix[2][2];
float invmatrix[2][2];
bool inversed=false;
int multiplymatrix(float invd,float adj[2][2]){
for(int i=0;i<2;i++){ 
        for(int j=0;j<2;j++){
        invmatrix[i][j]=invd*adj[i][j];

}}
return 0;}
int drawLine(){
    for(int l=0;l<60;l++){
        cout<<"-";
    }
    cout<<endl;
    return 0;
}
int printmatrix(float m[2][2]){ 
 for(int i=0;i<2;i++){ 
        for(int j=0;j<2;j++){
            cout<<m[i][j]<<" ";    
        } 
        cout<<endl;
}
return 0;
}
struct calculate{
float a=matrix[0][0],b=matrix[0][1],c=matrix[1][0],d=matrix[1][1];
float determinant(){
  float determinant=a*d-b*c;
  return determinant;
}
void adjoint(){
adjmatrix[0][0]=d;
adjmatrix[0][1]=-b;
adjmatrix[1][0]=-c;
adjmatrix[1][1]=a;
if(inversed==false) printmatrix(adjmatrix);
}
void inverse(){
float InverseDeterminant=1/determinant();
inversed=true;
adjoint();
multiplymatrix(InverseDeterminant,adjmatrix);
printmatrix(invmatrix);
}
};

void input(){
    drawLine();
    
    cout<<"[1] Enter first element : ";
    cin>>matrix[0][0];
    cout<<"[2] Enter second element : ";
    cin>>matrix[0][1];
    cout<<"[3] Enter third element : ";
    cin>>matrix[1][0];
    cout<<"[4] Enter fourth element : ";
    cin>>matrix[1][1];
    printmatrix(matrix);
   
}
void operationInput(){
    calculate c1; 
    
    drawLine();
    int operation;
    cout<<"Enter the following number according to your desired operation\n"<<endl<<"[1] Determinant\n"<<endl<<"[2] Adjoint\n"<<endl<<"[3] Inverse\n";
    drawLine();
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