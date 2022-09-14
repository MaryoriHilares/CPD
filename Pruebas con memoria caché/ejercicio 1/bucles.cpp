#include <iostream>
#include <vector>
#include <ctime> 
using namespace std;

int MAX = 10000; 
double A[MAX][MAX];
double x[MAX], y[MAX];


int main(){

    for (int x=1000,x<30001;x+=1000){
        
        int MAX =x;
         //bucle 1      
        t0=clock()
        for (int i = 0; i < MAX; i++)
            for (int j = 0; j < MAX; j++)
                A[i][j]=i+j*1.1;

        t1 = clock();
        
        double time = (double(t1-t0)/CLOCKS_PER_SEC);
         // bucle 2
         t0_=clock()
         for (int j = 0; j < MAX; j++)
            for (int i = 0; i < MAX; i++)
                A[i][j]=i+j*1.1;
         }
              t1_ = clock();
        double time_ = (double(t1_-t0_)/CLOCKS_PER_SEC);
        cout << time << " " << time_ << endl;
   return 0;
}
