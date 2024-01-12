#include<stdio.h>
main()
{
    int i,j,k;
    char ch;
    int row,column,lines;
    while(1){
            printf("create shapes:\n");
            printf("character using s,r,t,p:\n");
        printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch=='s')
    {
        printf("create square '*' form:\n");
        printf("\n");
         printf("enter the row:\n");
         scanf("%d",&row);
         printf("enter the column:\n");
         scanf("%d",&column);
                      if(row==column){
    printf("square\n");
    }
    else{
    printf("it is rectangular\n");}
    for(i=0;i<=row;i++){
        for(j=0;j<=column;j++){
    printf("* ");
    }
      printf("\n");
}}
else if(ch=='t'){
        printf("create triangular '*' form:\n");
        printf("\n");
    printf("enter the no of lines\n");
    scanf("%d",&lines);
     int n=lines;
    for(i=1;i<lines;i++){
            for(k=0;k<(n-i);k++){
                    printf(" ");}
    for(j=0;j<i;j++){
    printf("* ");}
    printf("\n");}}

else if(ch=='r'){
    printf("create rectangle '*' form:\n");
    printf("\n");
    printf("enter the row\n");
    scanf("%d",&row);
    printf("enter the column\n");
    scanf("%d",&column);
       if(row==column){
        printf("it is square\n");}
for(i=1;i<=row;i++){
for(j=1;j<=column;j++){
printf("* ");}
    printf("\n");
}}
else if(ch=='p'){
    printf("create pyramid '*'form:\n");
    printf("\n");
    printf("enter the rows:\n");
    scanf("%d",&row);
for(i=1;i<=row;i++){
    for(j=1;j<=row-i;j++){
            printf(" ");}
    for(k=1;k<=i*2-1;k++){
printf("*");}
printf("\n");
}}
else{
    printf("invalid character ");
}
}
}
