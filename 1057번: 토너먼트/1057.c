#include <stdio.h>


int main(){
    int p, a, b; // 참가자 n명
    int result=0, cnt=0;
    int n=1;
    scanf("%d %d %d",&p, &a, &b);

    while(n<p){
        n *= 2;
    }
    //printf("n : %d\n",n);

    for(int i=2;i<=n;i=i*2){
        //printf("i : %d\n",i);
        cnt++;
        for(int j=1;j<=n/i;j++){
            //printf("j : %d\n",j);
            if((((j-1)*i < a )&&(a<=j*i)) && (((j-1)*i<b)&&(b<=j*i))){
                result = cnt;
                break;
            }
        }
        if(result){
            break;
        }
    }
    printf("%d",result);

    return 0;
}