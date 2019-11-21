//Shopping Cart System
#include<stdio.h>
#define mrow 10
#define mcol 10
int Add_item(int t[mrow][mcol],int e[mrow][mcol],int );
int Delete_Item(int t[mrow][mcol],int e[mrow][mcol],int );
int Display(int t[mrow][mcol],int v[mrow][mcol],int );
int Bill_info(int t[mrow][mcol],int c[mrow][mcol],int );
int main()
{
    int i=0,j,k,n,s,z=0;
    void (*ptr)(int c1[mrow][mcol],int c2[mrow][mcol],int n);
    void (*ptr3)(int c1[mrow][mcol],int c2[mrow][mcol],int *z);
    printf("Enter the number of items in stock");
    scanf("%d",&n);
    int c1[mrow][mcol],c2[mrow][mcol]={0};
    printf("Enter the elements in the stock\n");
    for(s=0;s<n;s++)
    {
        printf("Item no.\tQuantity\tPrice\n");
        scanf("%d %d %d",&c1[s][0],&c1[s][1],&c1[s][2]);
    }
    printf("The items in stock are :\n");
    printf("Item no.\tQuantity\tPrice\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t %d\t\t %d\n",c1[i][0],c1[i][1],c1[i][2]);

    }
    entry :
    printf("1 : Add an item\n2 : Delete an item\n3 : Display an item\n4 : Billing info\n");
    scanf("%d",&k);
    switch(k)
        {
            case 1 :
                ptr=Add_item;
                break;
            case 2 :
                ptr=Delete_Item;
                break;
            case 3 :
                ptr=Display;
                break;
            case 4 :
                ptr=Bill_info;
               break;
            default :
                printf("Invalid choice like 8 bits");

        }
        (*ptr)(c1,c2,n);
        goto entry;

}

int Add_item(int c1[mrow][mcol],int c2[mrow][mcol],int l)
{
    int a,b;
    void (*ptr2)(int c1[mrow][mcol],int c2[mrow][mcol],int n);
    printf("Select the item to be added to the cart from the stock");
    scanf("%d",&a);
    for(b=0;b<3;b++)
    {
        c2[a-1][b]=c1[a-1][b];
    }
    ptr2=Display;
    (*ptr2)(c1,c2,l);
}
int Delete_Item(int c1[mrow][mcol],int c2[mrow][mcol],int l)
{
    int a,b;
    void (*ptr1)(int c1[mrow][mcol],int c2[mrow][mcol],int n);
    printf("Select the item to be removed from the cart of the stock");
    scanf("%d",&a);
    for(b=0;b<3;b++)
    {
            c2[a-1][b]=0;
    }
    ptr1=Display;
    (*ptr1)(c1,c2,l);
}

int Display(int c1[mrow][mcol],int c2[mrow][mcol],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("CART\n");
        printf("Item no.\tQuantity\tPrice\n");
        printf("%d\t\t %d\t\t %d\n",c2[i][0],c2[i][1],c2[i][2]);
    }
}

int Bill_info(int c1[mrow][mcol],int c2[mrow][mcol],int n)
{
    int r,w,sum=0;
    for(r=0;r<n;r++)
    {
        sum=sum+c2[r][2];
    }
    printf("Bill_info is %d\n",sum);
}
