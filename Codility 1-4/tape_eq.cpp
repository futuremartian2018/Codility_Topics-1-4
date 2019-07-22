#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;


int solution(vector<int> &A) {
    int sum = 0;
    int sum2 = 0;
    int dif =0;
    int size = A.size();
    
    for(int i = 0; i < size; i ++){
        sum += A[i];
    }    
    
    for(int j =0; j < size - 1; j++){
        
        sum2 += A[j];
        sum -= A[j];
        
        if(j == 0){
            dif = fabs(sum2 - sum);
 
        }
        
        if( fabs(sum2 - sum) < dif)
            dif = fabs(sum2 - sum);


    }
    
    return dif;
}