 /*Tittle: To create a pyramid of 5 rows
Author: Vinayashree S.N
Date of creation :3/09/22*/
#include <stdio.h>

int main()
{
    int i , j , rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=rows;i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
        printf("%d",j);
  }
  printf("\n");
}
return 0;
}
