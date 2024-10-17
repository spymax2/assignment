
/*
program to calculate electric balance using user defined function
author:vibert ondieki
reg no:CT101/G/22151/24
*/

#include <stdio.h>
int main(){
int i,j,k;
int marks[2][2][3]={{{10,20,30},{40,50,60}},{{70,80,90},{100,110,120}}};

for(i=0;i<2;i++){
for(j=0;j<2;j++){

for(k=0;k<3;k++){
printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
}
}
}




return 0;
}
