#include<stdio.h>
#include<math.h>
void main()
{
float i1,i2,i3,v1,v2,r1,r2,r3;
float i1_case1,i2_case1,i3_case1;
float i1_case2,i2_case2,i3_case2;
float i1_case3,i2_case3,i3_case3;
float i1_total,i2_total,i3_total;
float e=0.001;
printf("enter r1");
scanf("%d",&r1);
printf("enter r2");
scanf("%d",&r2);
printf("enter r3");
scanf("%d",&r3);
printf("enter v1");
scanf("%d",&v1);
printf("enter v2");
scanf("%d",&v2);
printf("\n case 1(v1,v2 are active)");
i1=(v1-v2)/r1;
i2=(v2-v1)/r2;
i3=(v1+v2)/r3;
printf("\ni1=%f",i1);
printf("\ni2=%f",i2);
printf("\ni3=%f",i3);
printf("\n case 2(v2=0)");
i1_case2=v1/r1;
i2_case2=-v1/r2;
i3_case2=v1/r3;
printf("\ni1=%f",i1_case2);
printf("\ni2=%f",i2_case2);
printf("\ni3=%f",i3_case2);
printf("\n case3(v1=0)");
i1_case3=-v2/r1;
i2_case3=v2/r2;
i3_case3=v2/r3;
printf("\ni1=%f",i1_case3);
printf("\ni2=%f",i2_case3);
printf("\ni3=%f",i3_case3);
printf("superposition");

i1_total=i1_case2+i1_case3;
i2_total=i2_case2+i2_case3;
i3_total=i3_case2+i3_case3;
printf("\ni1=%f",i1_total);
printf("\ni2=%f",i2_total);
printf("\ni3=%f",i3_total);
printf("verification");
if(fabs(i1_total-i1)<e&&fabs(i2_total-i2)<e&&fabs(i3_total-i3)<e)
{
printf("superposition verified");
}
else
{
printf("superposition not verified");
}
}







