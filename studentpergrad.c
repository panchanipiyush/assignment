# include<stdio.h>
int main()
{
int  phy,che,bio,mat,eng,total;
float avg,per;
printf ("enter the mark of physics =");
scanf("%d",&phy);
printf ("enter the mark of chemistry =");
scanf("%d",&che);
printf ("enter the mark of biology =");
scanf("%d",&bio);
printf ("enter the mark of matchs =");
scanf("%d",&mat);
printf ("enter the mark of english =");
scanf("%d",&eng);

total = phy+che+bio+mat+eng;
printf("\n total mark = %d",total);
avg=total/5;
per=(total*100)/500;
printf("\n average = %.2f",avg);
printf("\n percentage = %0.2f",per);
if(phy>33 || che>33 || bio>33 || mat>33 || eng>33){
    printf("\n your are filed");
}
if (per>100){
    printf("\n your entered invalid number\n");
}
else if (per>=90 && per <=100){
    printf("\n your grade is A+");
}
else if (per>=80 && per<90){
    printf("\n your grade is A");
}
else if (per>=60 && per<80){
    printf("\n your grade is B");
}
else if (per>=35 && per<60){
    printf("\n your grade is C");
}
else if(per>=0 && per<35){
    printf("\n your are failed sorry");
}

    return 0;
}