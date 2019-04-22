#include<stdio.h>
#include<string.h>
 
int main()
{

    int i, j, dem = 0;
    char s[100];
    printf("\n Nhap chuoi:  ");
    gets(s);
    for(i=0,j=strlen(s)-1; i<j; i++, j--)
    {
        if(s[i]!=s[j])
        {
            printf("\n khong doi xung");

            return 0;
        }
        else
        {
            dem++;
        }
    }
    printf("\n co doi xung");
    printf("\n So chhu giong nhau trong chuoi: %d", dem);

    return 0;
}
