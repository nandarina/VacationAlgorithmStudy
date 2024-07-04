#include <stdio.h>

int main(){
    int m,n;
    char arr[50][50];
    char start, pre;
    int cnt, min = 2500;

    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }

    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            for(int n=0;n<2;n++){
                if(n){
                    start='W';
                }else{
                    start='B';
                }
                //printf("현재 : %d %d\n",i,j);
                cnt = 0;
                for(int k=0;k<8;k++){
                    if(k%2){
                        //printf("홀수\n");
                        if(start=='W'){
                            pre='W';
                        }else{
                            pre='B';
                        }
                    }else{
                        //printf("짝수\n");
                        if(start=='W'){
                            pre='B';
                        }else{
                            pre='W';
                        }
                    }
                    for(int l=0;l<8;l++){
                        if(pre==arr[i+k][j+l]){
                            //printf("i+k : %d j+l : %d\n",i+k,j+l);
                            //printf("pre : %c arr : %c\n",pre,arr[i+k][j+l]);
                            //printf("더함\n\n");
                            cnt++;
                            if(arr[i+k][j+l]=='W'){
                                pre = 'B';
                            }else{
                                pre = 'W';
                            }
                            continue;
                        }
                        pre = arr[i+k][j+l];
                    }
                }
                //printf("cnt : %d\n",cnt);
                if(cnt<min){
                    min = cnt;
                }
            }
        }
    }
    printf("%d",min);

    return 0;
}
