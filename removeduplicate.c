#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n,element,arrLength=0;
    printf("Enter the value that array s of s element. n=");
	scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        bool check=true;
        printf("Enter the array s element: ");
        scanf("%d",&element);
        printf("\n");
        for(int j=0;j<arrLength;j++){
            if(element==arr[j]){
                check=false;
                break;
            }
        }
        if(check){
            arr[arrLength]=element;
            arrLength+=1;
        }
    }
    for(int t=0;t<arrLength;t++){
        printf("%d ",arr[t]);
    }
}
