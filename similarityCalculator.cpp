#include "similarityCalculator.h"
#include <unordered_map>

long long calculateSimilarityScore(const std::vector<int>& left, const std::vector<int>& right) {
   
std::unordered_map<int, int> rightFrequency;
for (int num : right) {
    rightFrequency[num]++;
}

long long similarityScore = 0;
for (int num : left) {
        if (rightFrequency.count(num)) { 
    similarityScore += static_cast<long long>(num) * rightFrequency[num];
    }
    }
return similarityScore;
}
