#include<stdio.h>
void move();
void brake();
void slowspeed(int);
int main()
{
  int destin,i;
  printf("enter destination km");
  scanf("%d",&destin);
  printf("the car started to drive");
  for(i=1;i<=destin;i++)
  {
    move();
    if(i==destin)
    {
      brake();
    printf("destination reached");
      
    }
  }
  return 0;
}
void move()
{
  int obst,constspeed=80,bend,left,right;
printf("1.speedbreaker\n2.crossing\n3.red\n4.greenand yellow\n5.leftbend\n6.right bend");
scanf("%d",&obstacle);
  if((obstacle==2)||(obstacle==3))
  {
    brake();
  }
else if((obst==1)||(obst==5)||(obst==6))
{
  slowspeed(obst);
}
  else
  {
    printf("the car moving at speed 80km/h");
  }
}
void brake()
{
int i;
  printf("the car is stopped");
  for(i=1;i>=0;i--)
  {
    if(i==0)
    {
      move();
    }
  }
}
void slowspeed(int obst)
{
int i;
  printf(" slowspeed");
  for(i=1;i>=0;i--)
  {
    if(i==0)
    {
      move();
    }
  }
  if(obst==5)
  {
    printf("car turned to left");
  }
  else
  {
      printf("car turned to right");
  }
}



