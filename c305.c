#include<stdio.h>
int main(){
    int maths;
    int physics;
    int chemistry;
    int total_marks;
    int total_marks_in_physics_and_maths;

    printf("enter marks in maths");
    scanf("%d",&maths);

    printf("enter marks in physics");
    scanf("%d",&physics);

    printf("enter marks in chemistry");
    scanf("%d",&chemistry);

    total_marks= maths+physics+chemistry;
    total_marks_in_physics_and_maths= maths+physics;

    if(total_marks>=190 && total_marks_in_physics_and_maths>=140){
        printf("this candidate is eligible");
    }else if(total_marks<=190){
        printf("this candidate is not eligible");
    }else if(total_marks_in_physics_and_maths<=140){
        printf("this candidate is not eligible");
    }else if ( maths>=65){
        printf("this candidate is eligible");
    }else if(physics>=55){
        printf("this candidate is eligible");
    }else if(chemistry>=50){
        printf("this candidate is eligible");
    }else{
        printf("invalaid");
    }

    printf("total marks:%d",total_marks);
    printf("total marks (maths+physics)%d",total_marks_in_physics_and_maths);


}
