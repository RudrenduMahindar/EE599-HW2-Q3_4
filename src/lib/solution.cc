#include "solution.h"
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> Solution::joinvector(vector<int>& v1,vector<int>& v2) { 
  
  vector<int> v3(v1.size()+v2.size());
  merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
  return v3;
   
}
