#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

long long int fib(int n,long long int memo[]){
    if (n == 0){
        memo[n] = 1;
        return 1;
    }else if(n == 1){
        memo[n] = 2;
        return 2;
    }else if(memo[n] == 0){
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);}
    
    return memo[n];
}

int solution(vector<int> &A, vector<int> &B) {
    vector<int> L;
   long int k;
 int size = A.size();
    
    
   for(int i = 0; i < size ; i++){
       long long int F[A[i]] = {0};
        k = fib(A[i] - 1, F);
         L.push_back(fmod(k, pow(2, B[i])));
   }

   return L;
 
}