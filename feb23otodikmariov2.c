#include <stdio.h>

int main(){

int magassag;
printf("magassag: ");
scanf("%d",&magassag);

for(int i=1; i<=magassag; i++){
    for(int j=1; j<=magassag-i; j++){
        printf(" ");
    }
    for(int k=1; k<=i; k++){
        printf("#");
    }
    printf("\n");
}

return 0;

}