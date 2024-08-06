#include<stdio.h>
int main(){
   
    // taking inputs for array
    
    // int arr_len;
    // printf("Enter the length of array: ");
    // scanf("%d" , &arr_len);
    // int input_arr[arr_len];

    // for (int i = 0; i < arr_len; i++){
    //     scanf("%d" , &input_arr[i]);
    // }
   
    // for (int j = 0; j<arr_len ; j++){
    //     printf("%d ", input_arr[j]);
    // }
   
   
    // OR build the array in the code itself
    int ready_made[] = {25, 50, 75, 100};
   
    // The Linear Search Algorithm
    int target;
    
    printf("Enter the target: ");
    scanf("%d", &target);
    
    for (int p = 0; p < sizeof(ready_made); p++ ){
        if (ready_made[p] == target){
            printf("The Target is found at index %d" , p);
        }
    }
    return 0;
}