#include <iostream>

int main(){
    int n;
    std::cout<<"Input: \n";
    std::cin>>n;

    int arr[50];

    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }

   

    int sum=0;
    for (int i=0;i<n;i++){
        sum+= arr[i];
    }

     std::cout<<"Output: \n"<<sum;


    return 0;
}