/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Admin
 *
 * Created on October 11, 2018, 2:48 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
int i,a,max;
    printf("nhap a :");
    scanf("%d",&a);
    for (i=1;i<a;i++){
        if (a%i==0&&i%2!=0){
            max=i;
          
        }
            
        
}
    printf(" %d",max);
}

