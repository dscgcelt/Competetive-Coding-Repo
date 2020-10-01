/*Program to implement queue using linkedlist
author-Kshitij bansod*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class qlink
{
  struct node
  {
    int info;
    node *next;
  }*front,*rear,*ptr,*i,*x;

 public:
	  qlink()
	  {
	    front=rear=NULL;
	   }
	  void insertion();
	  void deletion();
	  void display();

	  };

	  void qlink::insertion()
	  {
	    int no;
	    cout<<"\n Enter number";
	    cin>>no;
	    ptr=new node;
	    ptr->info=no;
	    ptr->next=NULL;

	    if(front==NULL)
	    {
	     front=ptr;
	     rear=ptr;
	     }
	   else
	   {
	     rear->next=ptr;
	     rear=ptr;
	   }
	    cout<<"\n Node inserted";
	 }

	  void qlink::deletion()
	  {
	   if(front==NULL)
	    {
	      cout<<"\n Queue is empty";
	     }
	    else
	    {
	      x=front;
	      cout<<"\n"<<front->info<<"is Deleted from Queue";
	      front=front->next;
	      delete x;
	      display();
	    }
	   }

	    void qlink::display()
	    {
	     if(front==NULL)
	      {
		cout<<"\n Queue is empty";
	       }
	     else
	     {
	       cout<<"\n Queue is";
	       for(i=front;i!=NULL;i=i->next)
	       {
		 cout<<" "<<i->info;
	       }
	      }

	    }

	   void main()
	     {
	       int ch;
	       qlink obj;
	       clrscr();
	     while(ch!=0)
	      {

	       cout<<"\n**Queue Operations**";
	       cout<<"\n 1.Insertion";
	       cout<<"\n 2.Deletion";
	       cout<<"\n 3.Display";
	       cout<<"\n 0.Exit";

	       cout<<"\n Enter your choice";
	       cin>>ch;

	       switch(ch)
	       {
		 case 1:
			 obj.insertion();
			 break;
		 case 2:
			 obj.deletion();
			 break;
		 case 3:
			 obj.display();
			 break;
		 case 0:
			 exit(0);
			 break;

		 default:
			 cout<<"\n Wrong choice";
		}
	       }
	       getch();
	       }

