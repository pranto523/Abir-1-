# include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter a 4 numbers:/n");
    scanf("%d %d %d %d ", &a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("The largest is:%d/n",a);

    }
    else if(b>a && b>c && b>d){
        printf("the largest number is:%d/n",b);
    }
    else if (c>a && c>b && c>d){
        printf("The largest number is:%d/n",c);
    }
    else if (d>a && d>b && d>c){
        printf("The largest number is:%d/n",d);
    }
    return 0;

}

