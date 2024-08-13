#include<stdio.h>
#include <stdbool.h>

int main(){
    printf("How long do you want the array to be? ");
    int l;
    scanf("%d" , &l);
    int arr[l];
    
    for (int i = 0; i < l ; i++){
        int value;
        scanf("%d" , &value);
        arr[i] = value;
    }


    // to print the input array
    for (int j = 0; j < l ; j++){
        printf("%d " , arr[j]);
    }

    printf("\n");

    // to find the bigger prime than the length of array
    int prime;

    for (int p = l + 1 ; p <= 1000 ; p++){
        bool isprime = true;
        for (int q = 2 ; q < p ; q++){
            if (p % q == 0){
                isprime = false;
                break;
            }
        }
        
        if (isprime){
            prime = p;
            break;
        }

    }

    printf("%d is your larger prime \n" , prime);

    // define the array with the length of prime
    int new_arr[prime];
    // set every element of array to 0
    for (int x = 0 ; x < prime ; x++){
        new_arr[x] = 0;
    }

    for (int y = 0 ; y < l ; y++){
        int current_index = arr[y] % prime;

        while(new_arr[current_index] != 0){
            if (current_index != prime){
                current_index++;
            }
            else{
                current_index = 0;
            }
        }
        
        new_arr[current_index] = arr[y];

    }


    // to print new array
    for (int z = 0; z < prime ; z++){
        
        printf("%d " , new_arr[z]);
    }

}