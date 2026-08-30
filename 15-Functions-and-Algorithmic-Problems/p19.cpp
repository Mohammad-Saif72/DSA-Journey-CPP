// Q19. Move Zeros to End
// void moveZeros(int arr[], int size)

// Example:

// 0 1 0 3 12

// ↓

// 1 3 12 0 0



#include <iostream>

void moveZeros(int arr[],int size){
    int ptr = 0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
          arr[ptr]=arr[i];
            if(i!=ptr){
                arr[i]=0;
            }
            
            ptr++;
        }
    }
}

int main(){

    int arr []= {0,1,0,3,12};

    int size = sizeof(arr)/sizeof(arr[0]);

    moveZeros(arr,size);

    for(int i=0;i<size;i++){
        std::cout<<arr[i];
    }

    return 0;
}