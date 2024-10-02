// 3. Write a function that takes three sides of a triangle and
// checks whether the triangle is equilateral, isosceles, or
// scalene.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter first side of triangle: ");
    scanf("%d",&a);
      printf("enter second side of triangle: ");
    scanf("%d",&b);
      printf("enter third side of triangle: ");
    scanf("%d",&c);
    if(a==b && b==c){
printf("it is a equivalent triangle")
    }
    else if(a==b&&b==c&&a==c){
      printf("it is a isosceles triangle")
    }
    else{
      printf("it i a scalene triangle")
    }
    return 0;
}
