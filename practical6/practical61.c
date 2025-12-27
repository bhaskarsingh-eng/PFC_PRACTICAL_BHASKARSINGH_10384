#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        printf("%d\n",i);
    }
    return 0;

    
}

/*expected output
1 5
1
2
3
4
5*/
