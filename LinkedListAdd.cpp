#include<iostream>
using namespace std ;
struct node {int data ; 
			 struct node *next;
			 };
			 
int _add(node *ptr , int i)
{
	if(ptr->next != NULL)
	{
		int carry =_add(ptr->next,i) ;
		if(carry != 0)
		{
			int x =ptr->data+carry;	
			ptr->data =x%10 ;
			return x/10 ;
		}
		else return 0;
	}
	else //base case
	{
	int x = ptr->data+i;	
	ptr->data =x%10 ;
	return x/10 ;
	}	
}


class LinkedList
{
	node *ptr ;
	public:
	LinkedList(int i=0)  //constructor
	{
		
		if (!i)
		{
			node *temp=new node ;
			temp->data =0 ;
			temp->next =NULL ;
			ptr =temp;
		}
		else
		{
			
			while(i>0)
			{
				node *temp=new node ;
				int rem=i%10 ;
				temp->data =rem ;
				i=i/10 ;
				temp->next =ptr ;
				ptr = temp ;
			}
		}
		
	}
	void print() 
	{
		node *temp = ptr;
		while(temp != NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next ;
		}
		delete temp ;
	}
	void add(int i=0 ) //return carray
	{
		int c =_add(ptr,i);
		if(c)
		{
			node *temp =new node ;	
			temp->data =i ;
			temp->next = ptr ;
			ptr = temp ;
		}
	}
	~LinkedList() 
	{
        while(ptr!=NULL)
        {
            node *temp =ptr ;
            ptr=ptr->next ;
            delete temp ;
        }
        cout<<"Done"; 
    }
};
int main()
{
	int n;
	cin>>n;
	LinkedList LL(n) ;
	LL.print() ;
	
	cin>>n;
	LL.add(n) ;  //work for one digit
	LL.print() ;
	
	return 0;
}
