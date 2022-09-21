#include <iostream>
#include <vector>
#include <ctime> 
#include <chrono>
 
using namespace std;


int main(){
    for (int x_=10;x_<600;x_+=10){
        const int MAX =x_;
        double A[MAX][MAX];
        double x[MAX], y[MAX];
         //bucle 1   
         cout<<x_<<" ";
        auto t0=chrono::steady_clock::now();;
        for (int i = 0; i < MAX; i++)
            for (int j = 0; j < MAX; j++)
                y[i] += A[i][j]*x[j];

        auto t1 =chrono::steady_clock::now();;
        
        //float time1 = (float(t1-t0)/CLOCKS_PER_SEC);
        cout<<chrono::duration_cast<chrono::nanoseconds>(t1 - t0).count() <<" ";

         // bucle 2
        auto t_ = chrono::steady_clock::now();;
         for (int j = 0; j < MAX; j++){
            for (int i = 0; i < MAX; i++)
                y[i] += A[i][j]*x[j];
         }
        auto t1_ = chrono::steady_clock::now();;
        //float time_ = (float(t1_- t_)/CLOCKS_PER_SEC);
        cout << chrono::duration_cast<chrono::nanoseconds>(t1_ - t_).count()<<endl;
    }
   return 0;
}
