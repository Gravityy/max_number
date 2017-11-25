int main() {
  int num1,num2,num3,max_num;
  max_num =0;
  
  printf("Enter the first integer:");
  scanf("%d", &num1);
  max_num=num1;
  printf("Enter the second integer:");
  scanf("%d", &num2);
  if (num2>max_num) {
    max_num=num2;
  }
  printf("Enter the third integer:");
  scanf("%d", &num3);
  if (num3>max_num) {
    max_num=num3;
  }
  
  printf("The maximum value of these three intergers:%d",max_num);
  getch();
  return 0;
}
