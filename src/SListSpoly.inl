//========================================================================
// SListSpoly.inl
//========================================================================
// Implementation for static polymorphic singly linked list.

#include "SListSpoly.h"
#include "ece2400-stdlib.h"
#include <iostream>
#include <cassert>

//------------------------------------------------------------------------
// SListSpoly<T> Default Constructor
//------------------------------------------------------------------------

template < typename T >
SListSpoly<T>::SListSpoly()
{
  m_head_p = nullptr;
}

//------------------------------------------------------------------------
// SListSpoly<T> Destructor
//------------------------------------------------------------------------

template < typename T >
SListSpoly<T>::~SListSpoly()
{
  while ( m_head_p != nullptr ) {
    Node* temp_p = m_head_p->next_p;
    delete m_head_p;
    m_head_p = temp_p;
  }

}

//------------------------------------------------------------------------
// SListSpoly<T> Copy Constructor
//------------------------------------------------------------------------

template < typename T >
SListSpoly<T>::SListSpoly( const SListSpoly<T>& lst )
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement copy constructor
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
}

//------------------------------------------------------------------------
// SListSpoly<T> Overloaded Assignment Operator
//------------------------------------------------------------------------

template < typename T >
SListSpoly<T>& SListSpoly<T>::operator=( const SListSpoly<T>& lst )
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement assignment operator
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  return *this;
}

//------------------------------------------------------------------------
// SListSpoly<T>::push_front
//------------------------------------------------------------------------

template < typename T >
void SListSpoly<T>::push_front( const T& v )
{
  Node* new_node_p   = new Node;
  new_node_p->value  = v;
  new_node_p->next_p = m_head_p;
  m_head_p           = new_node_p;
}

//------------------------------------------------------------------------
// SListSpoly<T>::at
//------------------------------------------------------------------------

template < typename T >
const T& SListSpoly<T>::at( size_t idx ) const
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement at (read version)
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  throw ece2400::OutOfRange( "SListSpoly::at(): index out of bound!" );
}

//------------------------------------------------------------------------
// SListSpoly<T>::at
//------------------------------------------------------------------------

template < typename T >
T& SListSpoly<T>::at( size_t idx )
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement at (write version)
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  throw ece2400::OutOfRange( "SListSpoly::at(): index out of bound!" );
}

//------------------------------------------------------------------------
// SListSpoly<T>::reverse
//------------------------------------------------------------------------

template < typename T >
void SListSpoly<T>::reverse()
{
  //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Implement reverse
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
}

//------------------------------------------------------------------------
// SListSpoly<T>::print
//------------------------------------------------------------------------

template < typename T >
void SListSpoly<T>::print() const
{
  printf("TEST!\n");
  Node* curr_p = m_head_p;
  while ( curr_p != nullptr ) {
    std::cout << curr_p->value << ", ";
    curr_p = curr_p->next_p;
  }
  std::printf( "\n" );
}

