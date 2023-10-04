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
  List();

  /*
   * @brief Function that checks if the list is empty
   * @return boolean
   */
  bool isEmpty();

  /*
   * @brief Function that inserts a element at the end of list
   * @return void
   */
  void insert(T value);

  /*
   * @brief Function that remove one element of a certain value
   * @return void
   */
  void remove(T value);

  /*
   * @brief Functions that searches for a element on the list.
   * @return boolean
   */
  bool search(T value);

  /*
  * @brief Function that prints the list
  * @return void
  */
  void print();
};
