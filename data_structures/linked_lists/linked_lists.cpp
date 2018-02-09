#include<iostream>
using namespace std;

struct Lnode  //each struct that has a value and the reference to the next struct
{
  int data;
  Lnode *next;
  Lnode(int userData)
  {
  data = userData;
  next = NULL;
  }
};

class LinkedLists
{
public:
  Lnode *head;
  LinkedLists()
  {
    head = new Lnode(0);
  }

  // This functions inserts a new element at the head of the list:

  void insert_head(int newHead)
  {
    Lnode *temp;
    temp = new Lnode(newHead);
    temp->next = head;
    head = temp;
  }

  void instert_next(int nextVal, int afterVal)
  {
    Lnode *cursor = head;

    while (cursor->data != afterVal and cursor != NULL)
    {
      cursor = cursor->next;
    }

    if (cursor != NULL)
    {
      Lnode *temp;
      temp = new Lnode(nextVal);
      temp->next = cursor->next;
      cursor->next = temp;
    }
  }


//prints all elements of linked list
void display_list()
{
  Lnode *cursor = head;
  while (cursor != NULL)
  {
    cout<<cursor->data<<"->";
    cursor = cursor->next;
  }
  cout<<endl;
}
};

class stack: public LinkedLists
{

};

int main(int argc, char const *argv[]) {
  LinkedLists LL;
  LL.head->next = new Lnode(17);
  // LL.head->next->next = new Lnode(27);
  LL.instert_next(11,0);
  LL.display_list();
  LL.insert_head(10);
  LL.display_list();

  return 0;
}
