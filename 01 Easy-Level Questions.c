// 1. Write a function to check the grade of a student based
// on the score:
// ● 90-100: A
// ● 80-89: B
// ● 70-79: C
// ● 60-69: D
// ● Below 60: F


#include <stdio.h>
int main(){
    int m;
    printf ("Enter Marks: ");
    scanf("%d",&m);
    if(m>=90 && m<=100){
        printf("Grade A");
    }
        else if(m>=80 && m<=89){
        printf("Grade B");
    }
     else if(m>=70 && m<=79){
        printf("Grade C");
    }
        else if(m>=60 && m<=69){
        printf("Grade D");
    }
        else{
        printf("Grade F");
    }
return 0;
}
