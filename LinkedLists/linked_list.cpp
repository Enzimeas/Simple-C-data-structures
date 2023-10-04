#include <iostream>
#include "linked_list.hpp"


template <typename T>
List<T>::List() : head(nullptr){}

template <typename T>
bool List<T>::isEmpty()
{
   if ((this->head == nullptr))
    {
      return true;
    }
    else 
    {
      return false;
    }
}

template <typename T>
void List<T>::insert(T value)
  {
    if (isEmpty())
    {
      this->head = new Node(value);
    }
    else
    {
      Node *current = this->head;
      while (current->next != nullptr)
      {
        current = current->next;
      }
      current->next = new Node(value);
    }
  }

template <typename T>
void List<T>::remove(T value)
  {
    if (isEmpty())
    {
      std::cout << "The list is empty\n";
    }
    else
    {
      Node *current = this->head;
      Node *previous = nullptr;

      while (current != nullptr)
      {
        if (current->value == value)
        {
          if (previous == nullptr)
          {
            this->head = current->next;
            delete (current);
            break;
          }
          else
          {
            previous->next = current->next;
            delete (current);
            break;
          }
        }
        previous = current;
        current = current->next;
      }
    }
  }

template <typename T>
bool List<T>::search(T value)
  {
    if (isEmpty())
    {
      return false;
    }
    else
    {
      Node *current = this->head;
      while (current != nullptr)
      {
        if (current->value == value)
        {
          return true;
        }
        current = current->next;
      }
      return false;
    }
  }

template <typename T>
void List<T>::print()
  {
    if (isEmpty())
    {
      std::cout << "The list is empty.\n";
    }
    else
    {
      Node *current = this->head;
      while (current != nullptr)
      {
        std::cout << current->value << std::endl;
        current = current->next;
      }
    }
  }
