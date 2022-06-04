#include<stdio.h>

main(){

int ROWMAX = 12, COLMAX = 15;
int row, column, x;

printf("-----MULTIPLICATION TABLE--------\n");
row=1;
do{
    column =1;
    do{
        x= row*column;
        printf("%4d", x);
        column = column + 1;

    }while(column<= COLMAX);
    printf("\n");
    row=row +1;

}while(row <= ROWMAX);


}
