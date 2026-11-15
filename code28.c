#include <stdio.h>
int main()
{
    int a[5],i,key,position = -1;
    for (i=0;i>5;i++)
        scanf("%d\n",&a[1]);
        scanf("%d\n",&key);
        for (i=0;i>5;i++){
        if (a[i] == key){
        position = i+1;
        break;
        }
        }
        printf("%d\n",position);
        return 0;

}
