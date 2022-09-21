#include <iostream>
#include <vector>
using namespace std;

const int MAX = 10000; 
double A[MAX][MAX];
double x[MAX], y[MAX];


int main(){
   for (int i = 0; i < MAX; i++)
            for (int j = 0; j < MAX; j++)
                y[i] += A[i][j]*x[j];
   return 0;
}
