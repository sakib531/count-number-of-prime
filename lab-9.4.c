#include<stdio.h>
void countPrime(int arr[],int size){
    int count = 0;
    for(int i =0; i<size;i++){
    int isPrime = 1;
        if (arr[i]<=1){
            isPrime = 0;
        }
        else{
            for(int a=2;a<arr[i];a++){
                if(arr[i]%a == 0){
                    isPrime =0;
                    break;
                }
            }
        }
        if(isPrime){
        count++;
        }
    }
    printf("number of prime number : %d\n",count);
}
int main (){
    int n,b;
    printf("enter the size of array ");
    scanf("%d",&n);
    int arrOne[n];
    for(b=0;b<n;b++){
        scanf("%d",&arrOne[b]);
    }
    countPrime(arrOne, n);
    return 0;
}
