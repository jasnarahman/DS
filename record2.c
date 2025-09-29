//program to insert and pop element from queue,display the content and search element in queue
#include<stdio.h>
#include<stdlib.h>
#define size 10
int que[size],front=0,rear=0;//empty queue
void main()
{
void enque(int);
int deque(),opt,item,ans;
void display();
int search();
while(1)
{
printf("\n1.Insert\n2.Delete\n3.Display\n4.Search\n5.Exit\n");
printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Item to insert");
scanf("%d",&item);
enque(item);
break;
case 2:item=deque();
printf("Deleted item =%d",item);
break;
case 3:display();
break;
case 4:printf("Item to seach:");
scanf("%d",&item);
ans=search(item);
if(ans==1)
printf("Found...");
else 
printf("Not found ");
break;
case 5:exit(0);
}
}
//end of while
}
//fuction to insert an item in circular queue
void enque(int data)
{
int r1;
r1=(rear+1)%size;
if(r1==front)
printf("Que is full");
else
{
rear=r1;
que[rear]=data;
}
return;
}
//function to delete an item from queue
int deque()
{ 
if(front==rear)
{
printf("Empty queue");
exit(1);
}
else
{
front=(front+1)%size;
return que[front];
}
}
void display()
{
int f=front,r=rear;
while(f!=r)
{

f=(f+1)%size;
printf("%d ",que[f]);
}
return;
}
//function to search an item in queue
int search(int item)
{
int f=front ,r=rear;
while(f!=r)
{
f=(f+1)%size;
if(que[f]==item)
return 1;
}
return 0;
}

