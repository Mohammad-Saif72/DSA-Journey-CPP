// Q13.

// A function receives a vector and calculates its sum without modifying it.



#include <iostream>
#include <vector>


int addSum(const std::vector<int>& arr){
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];

    }
    return sum;
}


int main(){

    std::vector <int> arr = {1,2,3,4,5};

    std::cout<<"Sum:  "<<addSum (arr);

    return 0;
}