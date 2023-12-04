#include<stdio.h>

main(){

int i,k=1;
int j;
char a = 'A';

for (i=1; i<=5; i++){
for(j=1; j<=i; j++){
if (j%2!=0){
printf("%c  ",a++);

}else{
printf("%d  ",k);
k++;
}
}
printf("\n");
}
}
