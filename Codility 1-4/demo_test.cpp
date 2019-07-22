#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
  vector<int> a2;
  transform(A.begin(), A.end(), back_inserter(a2), [](int & v){
      if( v > 0 )
        return v;
      return 0;
  });
  
  sort(a2.begin(), a2.end());
  
  int temp = 0;
  
  for(auto &i : a2){
      if (i == temp + 1 || i == temp){
        temp = i;
          
      }else{
          temp += 1;
          break;
      }
  }
  
    if(temp == a2[a2.size() - 1])
        temp +=1;
    

  return temp;
}