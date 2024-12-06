#include "distanceCalculator.h"
#include <iostream>
#include <vector>
#include <fstream>

int main(){
std::vector<int> left, right;
int num1, num2;

std::ifstream inputFile("lists.txt");
if(!inputFile){
    std::cerr << "Error" << std::endl;
    return 1;
}
 while (inputFile >> num1 >> num2) {
    left.push_back(num1);
    right.push_back(num2);
    }
    inputFile.close();

 if (left.size() != right.size()) {
    std::cerr << "Error: Mismatched list sizes." << std::endl;
    return 1;
    }
    long long result = calculateDistance(left, right);
    std::cout << "Total Distance = " << result <<std::endl;
    return 0;
}