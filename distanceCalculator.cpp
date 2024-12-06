#include "distanceCalculator.h"
#include <algorithm>
#include <cmath>

long long calculateDistance(std::vector<int>& left, std::vector<int>& right){
    std::sort(left.begin(), left.end());
 std::sort(right.begin(), right.end());

 long long totalDist = 0;

 for(size_t i = 0; i < left.size(); i++){
    totalDist += std::abs(left[i]-right[i]);
 }
 return totalDist;
}