#include <stdio.h>

void print(int array[],int size) ;

void runSearch(int array[],int size, char search_Type, int val) ;


int main (void) {

    int array[] = {10,24,13,56,21,5,21,2,24} ;

    int size = sizeof(array) / sizeof(array[0]) ;

    print(array, size) ;

    int val;

    printf(" Give me a value to search for : ") ;

    scanf("%d", &val)

    printf("what kind of search would you like ") ;

    char search_Type ;

    printf(" (a)= linear (b)= binary_iterative (c)= binary_recursive ") ;

    scanf("%c",search_Type) ;

    runSearch(array, size, &search_Type, &val) ;



}




void print(int array[],int size) {

    printf("\nindex:") ;

    for(  int index = 0 ; index < size ; index++ ){

        printf("%4d",index) ;
    }

    printf("\nvalues:") ;

    for (int i=0 ; i < size; i++) {

        printf("%4d", array[i]) ;

    }

    printf("\n") ;
    
}





void runSearch(int array[],int size, char search_Type, int val) {
// dont forget charater literals ' '

    int index = -1; // declare outside so it can be returned 

        if ( search_Type == 'a') {

            index = linearSearch(array, size, val) ;
        } 
        
        else if( search_Type == 'b') {

            index = binary_iterative(array, size, val) ;

        } else if( search_Type == 'c') {

            index = binary_recursive(array, size, val) ;
        } 

    return index;    
}