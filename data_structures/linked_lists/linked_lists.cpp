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

// This function removes the head of the linked list:

void remove_head()
{
  Lnode *cursor;
  cursor = head;
  head = head->next;
  delete cursor;
}

// This function inserts a new value after the value indicated by afterVal.
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

//This function searches for the "target" and removes it from the linked list.

void remove_target(int target)
{
  Lnode *cursor;
  Lnode *prev;
  cursor = head;
  prev = NULL;

  while (cursor!=NULL and cursor->data!=target)
  {
    prev = cursor;
    cursor = cursor->next;
  }

  if (cursor!=NULL)
  {
    prev->next = cursor->next;
    delete cursor;
  }

}

void remove_target2(int target)
{
  Lnode *cursor;
  Lnode *temp;
  cursor = head;

if (head->data == target)
{
  remove_head();
  return;

}
  while (cursor->next!=NULL)
  {
    if (cursor->next->data==target)
    {
      temp = cursor->next;
      cursor->next = cursor->next->next;
      delete temp;
      return;
    }
    cursor = cursor->next;
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

int main(int argc, char const *argv[]) {
  LinkedLists LL;
  LL.head->next = new Lnode(17);
  // LL.head->next->next = new Lnode(27);
  LL.instert_next(11,0);
  LL.display_list();
  LL.insert_head(10);
  LL.display_list();
  LL.remove_target(11);
  LL.display_list();
  LL.remove_target2(10);
  LL.display_list();

  return 0;
}
