// Insretion

#include <stdio.h>

int main()
{
    int arr[6] = {10, 20, 30, 40, 50};
    int n = 5; 

    arr[n] = 60; 
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


//deletion

#include<stdio.h>

int main (){
    int arr[]= {10 ,20 ,30 , 40, 50};
    int n= 5;
    int pos= 2;

    for (int i=pos; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;

    //Printing the Array
    for(int i=0 ; i<n; i++ ){
        printf("%d\n", arr[i]);
    }
    return 0 ;

}

//Traversal

#include<stdio.h>
int main (){
    int arr[]= {10 ,20 ,30 , 40, 50};
    int n= 5;

    //Printing the Array
    for(int i=0 ; i<n; i++ ){
        printf("%d\n", arr[i]);
    }
    return 0 ;
}