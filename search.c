#include <stdio.h>

void print(int array[],int size) ;


int main (void) {

    int array[] = {10,24,13,56,21,5,21,2,24} ;

    int size = sizeof(array) / sizeof(array[0]) ;

    print(array, size) ;

    int val;

    printf(" Give me a value to search for : ") ;

    scanf("%d", &val)

    printf("what kind of search ")


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