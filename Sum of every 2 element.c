#include<stdio.h>
int sum(int n){
    int a[100],summ[100],i,z,c,ar[100];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    printf("%d ",a[i]);
  }
printf("\n");
do{
        c=0;
        z=0;
if(n%2!=0){
    for(i=0;i<n;i=i+2){
                 if(i<n-1){
               summ[z]=a[i]+a[i+1];
               ar[z]=summ[z];

        printf("%d ",ar[z]);
        c++;
            z++;
            }
            else{

                     ar[c]=a[i];
                      printf("%d ",ar[c]);
                     c++;
                     printf("\n");

            }


    }


}
else{
        for(i=0;i<n;i=i+2){

               summ[z]=a[i]+a[i+1];
                ar[z]=summ[z];
        printf("%d ",ar[z]);

                  z++;
            c++;



}
c=c+1;
printf("\n");
}
for(int i=0;i<c;i++){
a[i]=ar[i];

}
n=n-(c-1);
}while(c!=1);
}

int main(){
int n;
scanf("%d ",&n);
sum(n);
}
