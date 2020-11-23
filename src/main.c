#include <stdio.h>
#include <espl_lib.h>

int main(){
	 int s = 0;
    unsigned int input1, input2;
    char* sol;
    do{
        printf("\nHello!\n");
        printf("Input the digit of the option you wish to pick: \n");
        printf("1) Get the number in characters \n");
        printf("0) Exit\n");
        if(scanf("%d", &input1) != 1){
            printf("You need to input an integer. Try running the code again.");
            break;
        }
        else {
            switch(input1){
                case 1 : {
                    printf("\nInput the number:");
                    if(scanf("%d", &input2) != 1){
                        printf("You need to input an integer. Try running the code again.");
                        s = 1;
                        break; 
                    }
                    else {
                    sol = num_to_words(input2);
                    printf("The number as a word: %s", sol);
                    }
                    break;
                }
                case 0 : {
                    printf("\nGoodbye!\n");
                    s = 1;
                    break;
                }
                default:{
                    printf("\nPlease put in 0 or 1.");
                    break;
                }

            }

        }
           

    }while(s == 0);
}

