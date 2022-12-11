#include <iostream>
using namespace std;
int main(){
    float matrixA[2][2],matrixB[2][2],matrixP[2][2];
    matrixP[0][0]=matrixA[0][0]*matrixB[0][0] + matrixA[0][1]*matrixB[1][0];
    matrixP[0][1]=matrixA[0][0]*matrixB[0][1] + matrixA[0][1]*matrixB[1][1];
    matrixP[1][0]=matrixA[1][0]*matrixB[0][0] + matrixA[1][1]*matrixB[1][0];
    matrixP[1][1]=matrixA[1][0]*matrixB[0][1] + matrixA[1][1]*matrixB[1][1];
    return 0;
}