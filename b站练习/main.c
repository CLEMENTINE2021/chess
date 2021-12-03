//
//  main.c
//  b站练习
//
//  Created by 葛文轩 on 2021/9/14.
//

#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//int main(int argc, const char * argv[]) {
//    int a=24;
//    int b =18;
//    int c,d;
//    printf("%d,%d\n",a,b);
//    c=a%b;
//    d=b%a;
//    printf("%d,%d\n",c,d);
//    printf("Hello, World!\n");
//    int i;
//    for (i = 1000;i<=2000;i+1)
//    {
//        if((i%4==0 && 1%100!=0) || i%400==0)
//            printf("%d",i);
//    }
//    return 0;
//}
//int main()
//{
//    int x = 0, y = 0;
//    scanf("%d",&x);
//    y = 4 * x * x * x + 2 * x - 5;
//    printf("%d",y);
//    return 0;
//}
//int main()
//{
//    int a,b,c=0;
//    for(a=101;a<=200;a+=2)
//    {
//        for(b=2;b<=sqrt(a);b++)
//        {
//         if (a%b==0)
//             break;
//        }
//        if (b>sqrt(a))
//        {c++;
//        printf("%d\n",a);
//    }
//    }
//    printf("数量：%d\n",c);
//    return 0;
//}
//int main()
//{
//    int i;
//    double res=0.0;
//    double a;
//    double res2=0;
//    double res3=0;
//    for (i=1;i<=99;i+=2)
//    {
//        a=1.0/i;
//        res=res+a;
//    }
//    for(i=2;i<=100;i+=2)
//    {
//        a=1.0/i;
//        res2=res2+a;
//    }
//    res3=res-res2;
//    printf("%lf\n",res3);
//    return 0;
//}
//int main()
//{
//    int a=0;
//    double res=0.0;
//    int flag=1;
//    for(a=1;a<=100;a++)
//    {
//        res+=flag*1.0/a;
//        flag*=-1;
//    }
//    printf("%lf\n",res);
//    return 0;
//}
//int main()
//{
//    int arr[]={-1,-56,-765,-45,-35,-22,-7,-453};
//    int size;
//    int i;
//    int max = arr[0];
//    size=(sizeof arr/sizeof arr[0]);
//    printf("%d\n",size);
//    for(i=1;i<size;i++)
//    {
//        if (max<arr[i])
//            max=arr[i];
//    }
//    printf("%d\n",max);
//    return 0;
//}
//int main()
//{
//    int i,a,b;
//    for(a=1;a<=9;a++)
//    {
//        printf("\n");
//    for(i=a;i<=9;i++)
//    {
//        b=i*a;
//        printf("%d*%d=%-2d ",a,i,b);
//    }
//    }
//    printf("\n");
//    return 0;
//}
//int main()
//{
//    int arr[]={1,2,4,67,89,797,46465};
//
//}
//int main()
//{
//    int a,i;
//    int b=18;
//    printf("you have three chances,please type in your pin:");
//    for(i=1;i<=3;i++)
//    {
//    scanf("%d",&a);
//    if (a>b)
//    printf("too big\n");
//    else if(a<b)
//    printf("too small\n");
//    else
//    {
//        printf("right\n1");
//        break;
//    }
//        printf("%dchance(s)left\n",3-i);
//}
//    if (i>3)
//        printf("failed three times,locked\n");
//    return 0;
//}
//int main()
//{
//    int a,b,h;
//    float s;
//    scanf("%d,%d,%d",&a,&b,&h);
//    s=((a+b)*h)/2;
//    printf("%f",s);
//}
//int main()
//{
//    float p=3.1415926,r,s,v;
//    printf("r=");
//    scanf("%f",&r);
//    s=p*r*r;
//    v=4*p*r*r*r/3;
//    printf("s=%f\nv=%f\n",s,v);
//    return 0;
//}
//int main()
//{
//    float x,y;
//    printf("enter x\n");
//    scanf("%f",&x);
//    y=x*x*x+3*x*x+3-10;
//    printf("%f\n",y);
//    return 0;
//}
//int main()
//{
//    float a,b,c,p,s;
//    scanf("%f%f%f",&a,&b,&c);
//    p=(a+b+c)/2;
//    printf("%f",p);
//    s=sqrt(p*(p-a)*(p-b)*(p-c));
//}
//void game(void)
//{
//    int a = 0,b = 0,i;
//    a=rand()%100+1;
//        printf("%d\n",a);
//    for(i=0;i<3;i++)
//    {
//    scanf("%d",&b);
//    if(b>a)
//    printf("too big\n");
//    else if (b<a)
//        printf("too small\n");
//    else
//    {
//        printf("you are right\n");
//        break;
//    }
//    }
//    if(a!=b)
//        printf("you have no chance\n");
//}
//void start(void)
//{
//    printf("##############################\n");
//    printf("### 1 to start   0 to exit ###\n");
//    printf("##############################\n");
//}
//int main()
//{
//    srand((unsigned)time(NULL));
//    int a;
//    do
//    {
//        start();
//        scanf("%d",&a);
//        switch(a)
//        {
//        case 1:
//                game();
//                break;
//        case 0:
//            printf("exit\n");
//                break;
//        default:
//            printf("wrong number\n");
//                break;
//        }
//    }while(a);
//    return 0;
//}
//int main()
//{
//    printf("%d",RAND_MAX);
//}
//int main()
//{
//    char i[]="";
//    scanf("%s",i);
//    printf("%s",i);
//}
//int main()
//{
//    char arr[]="123ad";
//    char arr2[20]="##############";
//    printf("%s",arr2);
//    printf("%s",strcpy(arr2,arr));
//    printf("%s",arr2);
//}
//void swap(int* x,int* y)
//{
//    int temp=0;
//    temp=*x;
//    *x=*y;
//    *y=temp;
//}
//int main()
//{
//    int a=10,b=20;
//    printf("%d%d\n",a,b);
//    swap(&a,&b);
//    printf("%d%d\n",a,b);
//
//}
//int num(int x)
//{
//    int i;
//    for(i=2;i<=sqrt(x);i++)
//    {
//        if(x%i==0)
//            return 0;
//    }
//return 1;
//}
//
//int main()
//{
//    int i;
//    for(i=100;i<=200;i++)
//    {
//        if (num(i)==1)
//            printf("%d\n",i);
//    }
//}
//int dec(int x)
//{
//    if ((x%4==0&&x%100!=0)||x%400==0)
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int i;
//    for(i=1000;i<=2000;i++)
//    {
//        if (dec(i)==1)
//            printf("%d\n",i);
//    }
//}
//int find_max(int* x)
//{
//    printf("%d\n",x[2]);
//    return 0;
//}
//int main()
//{
//    int max=10;
//    int arr[]={1,2,3,4,6,7,9,12,45,78,654,4554};
//    printf("%lu\n",sizeof(&max));
//    max=find_max(arr);
//
//}
//int get_ter(int* a,int b,int c)
//{
//    int left=0,mid,right;
//    right=c-1;
//    while(left<right)
//    {
//    mid=(left+right)/2;
//    if(a[mid]>b)
//        right=mid-1;
//    else if(a[mid]<b)
//        left=mid+1;
//    else
//    {
//        printf("找到了，下标是%d\n",mid);
//        break;
//    }
//    }
//    if (left>=right)
//    {printf("找不到\n");
//    return 0;
//    }
//    else return 1;
//}
//int main()
//{
//    int ter,sz;
//    int arr[]={1,2,3,5,6,8,9,13,25,46,68,89};
//    scanf("%d",&ter);
//    sz=sizeof(arr)/sizeof(arr[0]);
//    get_ter(arr,ter,sz);
//}
//void print(int n)
//{
//    if (n>9)
//    {
//        print(n/10);
//    }
//    printf("%d",n%10);
//}
//int main()
//{
//    int num=12345;
//    print(num);
//}
//int sz(char* arr)
//{
//    if (*arr!='\0')
//       return 1+sz(arr+1);
//    else return 0;
//}
//int main()
//{
//    int len;
//    char arr[]="bitcoin";
//    len=sz(arr);
//    printf("%d",len);
//}
//int mult(int n)
//{
//    if(n)
//        return n*mult(n-1);
//    else return 1;
//}
//int main()
//{
//    int n;
//    int ret;
//    scanf("%d",&n);
//    ret=mult(n);
//    printf("%d",ret);
//}
//int fib(int n)
//{
//    if (n>2)
//        return fib(n-1)+fib(n-2);
//    else
//        return 1;
//
//}
//int main()
//{
//    int num,n;
//    scanf("%d",&n);
//    num=fib(n);
//    printf("%d",num);
//}
//int main()
//{
//    int i,a,b,t;
//    a=0;
//    b=1;
//    scanf("%d",&t);
//    for(i=1;i<t;i+=2)
//    {
//        a=a+b;
//        b=a+b;
//    }
//    if(t%2==0)
//    printf("%d",a);
//    else
//        printf("%d",b);
//}
//int main()
//{
//    int a=1,b,c=1,d=0;
//    scanf("%d",&b);
//    while(b>2)
//    {
//        d=a+c;
//        a=c;
//        c=d;
//        b--;
//    }
//    printf("%d",c);
//}
//int main()
//{
//    int size;
//    int arr[6]={1,2,3};
//    size=sizeof(arr)/sizeof(arr[0]);
//    printf("%d",size);
//}
//int main()
//{
//    int arr[3][4]={{1,2,3,2},{2,2,312,2},{2,76,767,7}};
//    int i=0,j=0;
//    for(i=0;i<3;i++)
//    {
//        j=0;
//        for(j=0;j<4;j++)
//        {
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//}
// void arrange(int* arr,int sz)
//{
//     int end=sz-1;
//     int i,j;
//     for(j=0;j<=end;j++)
//     {
//         int flag = 1;
//     for(i=0;i<sz-1-j;i++)
//     {
//         if (arr[i]>arr[i+1])
//         {
//             arr[i]=arr[i]+arr[i+1];
//             arr[i+1]=arr[i]-arr[i+1];
//             arr[i]=arr[i]-arr[i+1];
//             flag=0;
//         }
//     }
//         if (flag == 1)
//         break;
//     }
//     for(i=0;i<=end;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }
//int main()
//{
//int arr[]={5,7,3,4,1,6,2,7,3,64,2,1};
//int sz=sizeof(arr)/sizeof(arr[0]);
//    arrange(arr,sz);
//}
//int main()
//{
//    int arr[]={1,2,3,4};
//    printf("%p",&arr);
//
//}
//
//void ver(char input)
//{
//    char ver[]="   |";
//    char ver2[]="    ";
//    int j,sz,i,s;
//    sz=sizeof(ver)/sizeof(ver[0]);
//    for(j=0;j<3;j++)
//    {
//        if(j==2)
//        {
//    for(i=0;i<sz-1;i++)
//    {
//        if(i==1)
//            printf("%c",input);
//        else
//        printf("%c",ver2[i]);
//    }
//        }
//        else
//        {
//            for(s=0;s<sz;s++)
//            {
//                if(s==1)
//                    printf("%c",input);
//                else
//            printf("%c",ver[s]);
//            }
//        }
//
//    }
//    printf("\n");
//}
//void hor(void)
//{
//    char hor[]="---|";
//    char hor2[]="---";
//    int i,j,s,sz,sz2;
//    sz=sizeof(hor)/sizeof(hor[0]);
//    sz2=sizeof(hor2)/sizeof(hor2[0]);
//    for(j=0;j<3;j++)
//    {
//        if(j<2)
//        {
//    for(i=0;i<sz;i++)
//    {
//            printf("%c",hor[i]);
//    }
//    }
//    else
//    {
//        for (s=0;s<sz2;s++)
//        {
//            printf("%c",hor2[s]);
//        }
//    }
//    }
//    printf("\n");
//}
//void board(char input)
//{
//    ver(input);
//    hor();
//    ver(input);
//    hor();
//    ver(input);
//}
//void game(void)
//{
//    char input=' ';
//    board(input);
//    getchar();
//    scanf("%c",&input);
//    board(input);
//}
//void welcome(void)
//{
//    printf("**********************\n");
//    printf("*** 1.play  0.exit ***\n");
//    printf("**********************\n");
//}
//int main()
//{
//    int a;
//    do
//    {
//    welcome();
//    scanf("%d",&a);
//        switch(a)
//        {
//            case 1:
//            {
//                game();
//                break;
//            }
//            case 0:
//                break;
//            default:
//                printf("please retype the command");
//        }
//    }while(a);
//}
//int main()
//{
//int arr[2][2];
//printf("%d",arr[1][1]);
//}
//int main()
//{
//    int i = 100;
//    srand((unsigned)time(NULL));
//    while(i--)
//        printf("%d",rand()%2);
//}
//int ada(void)
//{
//    printf("ddad");
//    srand((unsigned)time(NULL));
//    return rand()%4;
//}
//int main()
//{
//
//
//switch(ada())
//{
//    case 0:
//        printf("fuck");
//        break;
//    case 1:
//        printf("hans");
//        break;
//    case 2:
//        printf("dad");
//        break;
//    case 3:
//        printf("aa");
//}
//       }
//struct type
//{
//    int hight;
//    int weight;
//};
//int main()
//{
//    struct type zhang={180,60};
//    printf("%d\n",zhang.weight);
//
//
//}
//int main()
//{
//    int c=1,a;
//    a=c+ ++c;
//    printf("%d",a);
//}

//int main()
//{
//    int a=1,b=2,c=3;
//    int* arr[3]={&a,&b,&c};
//    printf("%d",*(arr[0]) );
//}
//void portal(int arr[])
//{
//    int* x;
//    x = arr+1;
//    printf("%d",*x);
//}
//int main()
//{
//    int arr[]={1,2,3,4};
//    portal(arr);
//}
//int main()
//{
//    int c,count=0;
//    scanf("%d",&c);
//    while(c!=0)
//    {
//        c=c&(c-1);
//        count++;
//    }
//    printf("%d",count);
//}
int sys(void)
{
    int a=1;
    return *(char*)&a;
}
int main()
{
    if (sys()==1)
    printf("小端");
    else printf("大端");
}
