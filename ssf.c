#include<stdio.h>
void upload(int height, int width, int length){
    if(height<length&&width<length){
        printf("UPLOAD ANOTHER\N");
    }
    else if((height>length)&&(width>length)&&(height==width)){
        printf("ACCEPTED\n");
    }else{
        printf("CROP IT\n");
    }

}
 int main(){

    int width, totalPhoto, height , length, i;
    printf("Enter Length:\n");
    scanf("%d", &length);
    printf("Enter Total photos:\n");
    scanf("%d", &totalPhoto);
    printf("Enter Height and width of the photos\n");
    for(i=0;i<totalPhoto;i++){
        printf("Height: \n");
        scanf("%d", &height);
        printf("Width: \n");
        scanf("%d", &width);
        upload(height, width, length);
    }
    return 0;
 }
