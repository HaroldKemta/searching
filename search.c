#include <stdio.h>

void print(int array[],int size) ;

void runSearch(int array[],int size, char search_Type, int val) ;

int linearSearch(int array[], int size, int val) ;

int binary_iterative(int array[], int size, int val) ;



    int main (void) {

        int array[] = {10,24,13,56,21,5,21,2,24} ;

        int size = sizeof(array) / sizeof(array[0]) ;

        print(array, size) ;

        int val;

        printf(" Give me a value to search for : \n") ;

        scanf(" %d", &val)

        printf("what kind of search would you like \n") ;

        char search_Type ;

        printf(" (a)= linear (b)= binary_iterative (c)= binary_recursive \n") ;

        scanf(" %c",search_Type) ;

        int index = runSearch(array, size, &search_Type, &val) ;

        if (index != -1) {

            printf("The value was found at position %d\n", index);  

        } else {

            printf("Value not found\n");  
        }
        

    }




    void print(int array[],int size) {

        printf("index:") ;

        for(  int index = 0 ; index < size ; index++ ){

            printf("%4d",index) ;
        }

        printf("\nvalues:") ;

        for (int i=0 ; i < size; i++) {

            printf(" %4d", array[i]) ;

        }

        printf("\n") ;
        
    }





    int runSearch(int array[],int size, char search_Type, int val) {
    // dont forget charater literals ' '

        int index = -1; // declare outside so it can be returned 

            if ( search_Type == 'a') {

                index = linearSearch(array, size, val) ;
            } 
            
            else if( search_Type == 'b') {

                index = binary_iterative(array, size, val) ;

            } else if( search_Type == 'c') {

                index = binary_recursive(array, size, val) ;
            } else { 

                printf("enter a real value\n") ;
            }


        return index ;    
    }



    int linearSearch(int array[], int size, int target) {

        for (int index = 0; index < size; index++) {

            if(array[index] == target) 
            { return index; }
        }

        return -1 ;
    }
    



    int binary_iterative(int array[], int size, int val) {

        printf("First we need to sort the array\n") ;
        printf("Pick (a) for Selection Sort, and (b) for insertion sort\n") ;

        char pick ;
        scanf(" %c ", &pick) 

        if ( pick == 'a') {

            printf("you have chose Selection sort ");

            selection_Sort()
        }
//finish this
        sorting()
    }
