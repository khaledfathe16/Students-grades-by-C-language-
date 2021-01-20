#include <Stdio.h>


 void main(void){
int h=0,l=1000,a,counter1=0,counter2=0;
 int class1[10] , class2[10],class3[10];
//class 1 grades

for(int i=0;i<10;i++){
    printf("Please enter the grades of students for class'1' student %d=  ",i+1);
    scanf("%d",&class1[i]);
                      }

//class 2 grades
 for(int i=0;i<10;i++){
    printf("Please enter the grades of students for class'2' student %d=  ",i+1);
    scanf("%d",&class2[i]);
                      }

//class 3 grades
 for(int i=0;i<10;i++){
    printf("Please enter the grades of students for class'3' student %d=  ",i+1);
    scanf("%d",&class3[i]);
                      }
//calc the passed student in class1
for(int i=0;i<10;i++){
   if(class1[i]>=50){
    counter1++;
   } else if(class1[i]<50){
       counter2++;
    }
    //calc the passed student in class2
if(class2[i]>=50){
    counter1++;
   } else if(class2[i]<50){
       counter2++;
    }
    //calc the passed student in class3
    if(class3[i]>=50){
    counter1++;
   } else if(class3[i]<50){
       counter2++;
    }
                     }


    //number of failed student in all classes
   printf("Number of failed student in all classes = %d\n",counter2);
     //number of passed student in all classes
    printf("Number of passed student in all classes = %d\n",counter1);

    //To calc the lowest grade
    for(int i=0;i<10;i++){
        if(class1[i]>h){
            h=class1[i];
        }
           if(class2[i]>h){
            h=class2[i];

           }
           if(class3[i]>h){
            h=class3[i];

           }
    }

    printf("Highest num = %d",h);

    for(int i=9;i>=0;i--){
        if(class1[i]<h){
            h=class1[i];
        }
        if(class2[i]<h){
            h=class2[i];
        }
        if(class3[i]<h){
            h=class3[i];
        }


    }
printf("\nlowest = %d",h);
 }


