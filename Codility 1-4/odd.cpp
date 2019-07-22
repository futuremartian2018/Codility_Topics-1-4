#include <vector>
#include <iostream> 
#include <algorithm> 
using namespace std;

int solution(vector<int> &A) {
    
    sort(A.begin(), A.end());
    int lim = A.size();
    for(int i = 0; i < lim - 2; i += 2){
        if(A[i] != A[i + 1]){
            return A[i];
        }
    }
    return A[A.size() - 1];
}