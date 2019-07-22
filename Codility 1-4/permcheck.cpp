#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
    int size = A.size();
    sort(A.begin(), A.end());
    
    if(A[0] != 1)
        return 0;
        
    for(int i = 0; i < size - 1; i++){
        if(A[i] + 1 != A[i + 1] )
            return 0;
    }
    return 1;
}