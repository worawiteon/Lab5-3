#include <stdio.h>
int main(void) {
  float a,b;
  int i;
  printf("M e n u");
  printf("\n1. Add (+)\n2. Subtract (-)\n3. Multiply (*)\n4. Divide (/)\n5. Modulo (%)\n");
  printf("Enter Number 1: " );
  scanf("%f",&a);
  printf("Enter Number 2: " );
  scanf("%f",&b);
  printf("Select choice : " );
  scanf("%d",&i);
  switch(i){
    case 1 :
    printf("Answer is %.3f + %.3f = %.3f" ,a,b,a+b);
    break;
    case 2 :
    printf("Answer is %.3f - %.3f = %.3f" ,a,b,a-b);
    break;
    case 3 :
    printf("Answer is %.3f * %.3f = %.3f" ,a,b,a*b);
    break;
    case 4 :
    if(b==0){
      printf("Devide by ZERO");
    }
    else
    printf("Answer is %.3f / %.3f = %.3f" ,a,b,a/b);
    break;
    case 5 :
    if(b==0){
      printf("Devide by ZERO");
    }
    else
    printf("Answer is %.3f MOD %.3f = %d" ,a,b, (int)a%(int)b);
    break;
  }
  return 0;
}