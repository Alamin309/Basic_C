#include <stdio.h>
 main()
{
   int complex, real_num1,real_num2, img_num1,img_num2, sum_real_num,sum_img_num;

   printf("Enter number1 and number2 \nwhere number + inumber2 is the first complex number.\n");
   scanf("%d%d", &real_num1, &img_num1);
   printf("Enter number3 and number4  \nwhere number3 + inumber4 is the second complex number.\n");
   scanf("%d%d", &real_num2, &img_num2);

   sum_real_num = real_num1 + real_num2;
   sum_img_num = img_num1 + img_num2;

   printf("Sum of the complex numbers: %d + %di\n", sum_real_num, sum_img_num);

   return 0;
}

