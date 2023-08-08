#include<iostream>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    
    std::cout << *ptr << std::endl;
    std::cout << *(ptr+1) << std::endl;
    std::cout << *(ptr+2) << std::endl;
    std::cout << *(ptr+3) << std::endl;
    std::cout << *(ptr+4) << std::endl;
    return 0;
}
