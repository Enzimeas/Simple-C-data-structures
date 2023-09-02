#pragma once
#include <iostream>



/*
 * @brief Class representing a generic linked list
 * @tparam T type of elements in the list
 */
template <typename T> class List
{
private:
  /*
   * @brief Struct Node
   */
  struct Node
  {
    T value;
    Node *next;

    /*
     * @brief Node constructor
     * @param value Value to be stored in Node
     * @param next Pointer that points to next Node, nullptr
     */
    Node(T val) : value(val), next(nullptr){};
  };

  Node *head = nullptr; // Head of the list

public:
  /*
   * @brief Default List constructor
   * Starts list as empty
   */
  List() : head(nullptr){};

  /*
   * @brief Function that checks if the list is empty
   * @return boolean
   */
  bool isEmpty()
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

  /*
   * @brief Function that inserts a element at the end of list
   * @return void
   */
  void insert(T value)
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

  /*
   * @brief Function that remove one element of a certain value
   * @return void
   */
  void remove(T value)
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

  /*
   * @brief Functions that searches for a element on the list.
   * @return boolean
   */
  bool search(T value)
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

  /*
  * @brief Function that prints the list
  * @return void
  */
  void print()
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
};
