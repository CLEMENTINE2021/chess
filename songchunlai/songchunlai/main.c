//
//  main.c
//  songchunlai
//
//  Created by 葛文轩 on 2021/11/8.
//

#include <stdio.h>
//int main()
//{ int n,a,b,c;
//  for(n=100;n<1000;n++)
//  {a=n/100;
//   b=(n/10)%10;
//   c=n%10;
//   if((n/11==a*a+b*b+c*c)&&((a==b)+(b==c)+(a==c)+(a==b||b==c)>=1))
//      printf("%d\n",n);
//  }
//}

//int main()
//{
//    int n,k=0;
//    scanf("%d",&n);
//    do{
//        k+=n%10;
//        n/=10;
//    }while(n);
//    printf("%d",k);
//}

int main()
{
    int a,b,c=2,n,m;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    n=a;
    m=b;
    while(c!=0)
    {
    c=b%a;
    b=a;
    a=c;
    }
    printf("最大公约数=%d\n",a);
    printf("最小公倍数=%d",n*m/a);
}

