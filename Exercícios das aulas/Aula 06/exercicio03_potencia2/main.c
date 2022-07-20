int main(){
int i, n, pot;
printf("Insira o valor de n: \n ");
scanf("%d",&n);

pot = 1;
i = 0;


while(i <= n){
printf("2^%d = %d\n",i,pot);
pot = pot *2;
i++;

}
}
