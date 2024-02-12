#include <stdio.h>
struct course{
    char coursename[100];
    char coursecode[100];
    int credithours;
};

int main() {
    struct course c1[5];
    for(int i=0; i<4; i++){
        printf("course %d:",i+1);
        printf("\ncourse name: ");
        scanf("%s", c1[i].coursename);
        printf("\ncourse code: ");
        scanf("%s", c1[i].coursecode);
        printf("\ncredit hours: ");
        scanf("%d", &c1[i].credithours);
    }
    printf("courses with credit hours more than 3:\n");
for(int i=0; i<4; i++){
    if(c1[i].credithours>3){
        printf("course %d:",i+1);
        printf("\ncourse name:%s",c1[i].coursename);
        printf("\ncourse code:%s",c1[i].coursecode);
        printf("\ncredit hours:%d",c1[i].credithours);
    }
}
    return 0;
}