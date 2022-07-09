#include <iostream>
using namespace std;

#define SIZE 10

class Queue
{
    private:
       
       int front;
       int back;
       int size;
       int item[SIZE];
    

    public:

    Queue()
    {
         front =-1;
         back=-1;
         size=0;
         cout<<"A new Queue is created ---  :  "<<endl;
    }


    
 void isEmpty()
  {
    if(size==0)
    {
      cout<<"This queue is empty"<<endl;
    }else{
      cout<<"This Queue is not empty : size :  --  "<<size<<endl;
    }
  }
 


 void isFull()
 {
  if(size==SIZE){
    cout<<"This Queue is full : size -- "<<size<<endl;
  }else
  {
    cout<<"This Queue is not Full : size  -- "<<size<<endl;
  }
 }




 void enQueue(int val)
 {
  
    if(size==SIZE)
    {
          cout<<"This queue is full :element cant accesss :  "<<val<<endl;
    }else
    {
      if(front==-1 || front==0)
      {
        front=0;
        back++;
        item[back]=val;
        cout<<val << "  --- inserted at index : "<<back<<endl;
        size++;

      }else if(front>0)
      {  

           front--;
           for(int i=front;i<back;i++)
           {
            item[i]=item[i+1];
           }
           
           item[back]=val;

           size++;

           cout<<val<<" --- inserted at index  :  "<<back<<endl;
            

      }
    }

 }




  void deQueue()
  {
    if(size==0)
    {
      cout<<"There is no  elelment to deQueue "<<endl;

    }else


      cout<<item[front]<<" ----------  deQueue"<<endl;
       front++;
       size--;
   
  }



  void search_element(int val)
  {    
    
       if(size==0)
       {
        cout<<"There is no element :   "<<endl;
       }else
       {
        int x=0;
       cout<<"Searching : ";
       for(int i =front;i<=back;i++)
       {
        if(item[i]==val)
        {
            x=1;
         cout<<val<<"  -- found in index : "<<i<<endl;
         break;
        }
       }


       if(x==0)
       {
        cout<<val <<" not found"<<endl;
       }
       }
  }


  void search_index(int  index)
  {

    if(size==0)
    {
      cout<<"There si no elemnt in this queue "<<endl;
    }else if(index<front && index>back)
    {
      cout<<"Index out of bound "<<endl;
    }else
    {
      cout<<item[index]<<"   --  index : "<<index<<endl;
    }

  }
      



  void Traverse()
  {
     if(size==0)
     {
      cout<<"there is nothing to traverse :  "<<endl;
     }else
     {
       cout<<"Traversing : ------  "<<endl;
    for(int i =front;i<=back;i++)
    {
      cout<<item[i]<<" ---index  "<<i<<endl;
    }
    cout<<endl;
     }
  }



  




};




main()
{

 Queue one;


 one.isEmpty();
 one.isFull();



one.enQueue(4);
one.enQueue(5);
one.enQueue(6);
one.enQueue(7);
one.enQueue(8);
one.enQueue(9);
one.enQueue(10);
one.enQueue(11);
one.enQueue(12);
one.enQueue(13);
one.enQueue(14);
one.enQueue(15);
one.enQueue(16);
one.enQueue(17);
one.enQueue(18);

 one.Traverse();

one.deQueue();
one.deQueue();
one.deQueue();
one.deQueue();




 one.isEmpty();
 one.isFull();

  one.Traverse();


one.enQueue(66);
one.enQueue(4346);
one.enQueue( 886);
one.enQueue(9969);
one.enQueue(33);
one.enQueue(99);
one.enQueue(98);
one.enQueue(44);
one.enQueue(99);
one.enQueue(22);
one.enQueue(22);

 one.Traverse();
 one.search_element(66);
 one.search_index(5);


 one.Traverse();




}



