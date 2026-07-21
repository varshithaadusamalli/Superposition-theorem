#include<stdio.h>
#include<math.h>
int main()
{
float  i1,i2,i3,v1,v2,r1,r2,r3;
float req1,req2,i3_c1,i3_c2,i3_total,sum_i3;
float numerator,denominator,v_node;
printf("enter v1:");
scanf("%f",&v1);
printf("enter v2:");
scanf("%f",&v2);
printf("enter r1:");
scanf("%f",&r1);
printf("enter r2:");
scanf("%f",&r2);
printf("enter r3:");
scanf("%f",&r3);
printf("\n case 1(v1 active)");
req1=r1 + ((r2*r3)/(r2+r3));
  i1=v1/req1;
i3_c1=i1*(r2/(r2+r3));
printf("\n req1=%2f ohms",req1);
printf("\ncurrent from v1(i1)=%5f A",i1);
printf("\ncurrent through r3(i3_c1)=%5f",i3_c1);
printf("\n case 2(v2 active)");
req2=r2 + ((r1*r3)/(r1+r3));
  i2=v2/req2;
i3_c2=i2*(r1/(r1+r3));
 printf("\n req2=%2f ohms",req2);
printf("\ncurrent from v2(i2)=%5f A",i2);
printf("\ncurrent through r3(i3_c2)=%5f",i3_c2);

printf("\n case3(v1,v2 are active)");
numerator=((v1/r1)+(v2/r2));
  denominator=((1/r1)+(1/r2)+(1/r3));
  v_node=numerator/denominator;
i3_total=v_node/r3;
printf("\n node voltage(v_node)=%5f V",v_node);
printf("\n current through r3(i3_total)=%5f A",i3_total);

printf("\n verification");
sum_i3=(i3_c1+i3_c2);
 printf("\n sum of individual currents(i3_c1+i3_c2) = %5f + %5f = %5f A",
       i3_c1, i3_c2, sum_i3);
 printf("\n actual current with both sources (i3_total) = %5f A",
       i3_total);
  if(fabs(sum_i3-i3_total)<0.0001)
{
printf("\nsuperposition verified");
}
else
{
printf("\nsuperposition not verified");
}
return 0;
}







