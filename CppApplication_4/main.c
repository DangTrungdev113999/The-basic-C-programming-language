#include"stdio.h"


void Nhap(int a[], int n);
void Xuat(int a[], int n);
void SaoChep(int a[], int b[], int n); // sao chep a sang b
void DaoNguoc(int a[], int n);
void SapXep(int a[], int n);

void main()
{
    int a[100], b[100];
    int n;        // so phan tu cua mang

    printf("Nhap so phan tu cua mang : ");
    scanf("%d",&n);
    Nhap(a,n);
    Xuat(a,n);
    
    printf("\nmang a sau khi dao nguoc : ");
    DaoNguoc(a,n);
    Xuat(a,n);
    
    SaoChep(a,b,n);
    printf("\nMang b sau khi sao chep tu mang a : ");
    Xuat(b,n);
    printf("\nmang a sau khi sap xep tang dan : ");
    SapXep(a,n);
    Xuat(a,n);

}

void Nhap(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("nhap a[%d] : ",i);
        scanf("%d",&a[i]);
    }
}

void Xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d  ",a[i]);
    }
}

void SaoChep(int a[], int b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}

void DaoNguoc(int a[], int n)
{
    int temp;
    int j = n-1;
    for (int i = 0; i <= n/2; i++)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
}

void SapXep(int a[], int n)
{
    int temp;
    for(int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

