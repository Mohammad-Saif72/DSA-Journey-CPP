// 🔴 Last challenge: Problem 12

// Move all zeros to the end without using another array or sort().

// Example:

// Input:
// 7
// 4 0 5 0 2 0 7


// Output:
// 4 5 2 7 0 0 0

// Important: The order of non-zero elements must remain unchanged.


// #include <iostream>

// int main(){
//     int arr[] = {0,0,1,0,3,12};
//     // int arr[] ={4,0,5,0,2,0,7};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     for(int i = 0;i<size;i++){
//         if(arr[i]==0){
//             for(int j=i ;j<size-1;j++){
//                 arr[j]=arr[j+1];
//             }
//             arr[size-1] = 0;
//         }
            
        
//     }

//     std::cout<<"Output: ";
//     for(int i=0;i<size;i++){
//         std::cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// #include <iostream>

// int main(){
//     int arr[] = {0,0,1,0,3,12};
//     // int arr[] ={4,0,5,0,2,0,7};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int ptr1=0;
//     int ptr2 =0;
//     for(int i = 0;i<size;i++){   
//         if(arr[ptr1]==0){
//             for(int j = ptr1+1; j<size; j++){
//                 if(arr[j]!=0){
//                     ptr2 = j;
//                     break;
//                 }
//             }
//             arr[ptr1]=arr[ptr2];
//             arr[ptr2]=0;
//             ptr1++;
//         }
//     }

//     std::cout<<"Output: ";
//     for(int i=0;i<size;i++){
//         std::cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// #include <iostream>

// int main(){
//     int arr[] = {0,0,1,0,3,12};
//     // int arr[] ={4,0,5,0,2,0,7};
//     // int arr[]={1,2,3,4};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int ptr1=0;
//     int ptr2 =0;
//     for(int i = 0;i<size;i++){   
//         if(arr[ptr2]==0){
//             ptr2++;
//         }else if(ptr1!=ptr2){
//             arr[ptr1]=arr[ptr2];
//             arr[ptr2]=0;
//             ptr1++;
//             ptr2++;
//         }
//     }

//     std::cout<<"Output: ";
//     for(int i=0;i<size;i++){
//         std::cout<<arr[i]<<" ";
//     }
//     return 0;
// }



#include <iostream>

int main(){
    int arr[] = {0,0,1,0,3,12};
    // int arr[] ={4,0,5,0,2,0,7};
    // int arr[]={1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ptr1=0;
    for(int ptr2 = 0;ptr2<size;ptr2++){   
        if(arr[ptr2]!=0 ){
            arr[ptr1]=arr[ptr2];
            if(ptr1!=ptr2){
                arr[ptr2]=0;
            }  
            ptr1++;
        }
    }

    std::cout<<"Output: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}