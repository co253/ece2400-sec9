//========================================================================
// SListSpoly.cc
//========================================================================
// Implementation for ListInt

#include "SListSpoly.h"
#include <cstdio>
#include <cassert>
#include <iostream>

//------------------------------------------------------------------------
// SListSpoly Default Constructor
//------------------------------------------------------------------------

SListSpoly::SListSpoly()
{
  m_head_p = nullptr;
}

//------------------------------------------------------------------------
// SListSpoly Destructor
//------------------------------------------------------------------------

SListSpoly::~SListSpoly()
{
  while ( m_head_p != nullptr ) {
    Node* temp_p = m_head_p->next_p;
    delete m_head_p;
    m_head_p = temp_p;
  }
}

//------------------------------------------------------------------------
// SListSpoly Copy Constructor
//------------------------------------------------------------------------
/*
SListSpoly::SListSpoly( const SListSpoly& lst )
{
  m_head_p = nullptr;

  // Push front all nodes from lst

  Node* curr_p = lst.m_head_p;
  while ( curr_p != nullptr ) {
    push_front( curr_p->value );
    curr_p = curr_p->next_p;
  }

  // Reverse list to get into proper order

  reverse();
}
*/
//------------------------------------------------------------------------
// SListSpoly Overloaded Assignment Operator
//------------------------------------------------------------------------
/*
SListSpoly& SListSpoly::operator=( const SListSpoly& lst )
{
  if ( this != &lst ) {

    // Delete all of the current nodes first

    while ( m_head_p != nullptr ) {
      Node* temp_p = m_head_p->next_p;
      delete m_head_p;
      m_head_p = temp_p;
    }

    // Push front all nodes from lst

    Node* curr_p = lst.m_head_p;
    while ( curr_p != nullptr ) {
      push_front( curr_p->value );
      curr_p = curr_p->next_p;
    }

    // Reverse list to get into proper order

    reverse();
  }
  return *this;
}
*/
//------------------------------------------------------------------------
// SListSpoly::push_front
//------------------------------------------------------------------------

void SListSpoly::push_front( const T& v )
{
  Node* new_node_p   = new Node;
  new_node_p->value  = v;
  new_node_p->next_p = m_head_p;
  m_head_p           = new_node_p;
}

//------------------------------------------------------------------------
// SListSpoly::at
//------------------------------------------------------------------------

const T& SListSpoly::at( size_t idx ) const
{
  Node*  curr_p   = m_head_p;
  size_t curr_idx = 0;

  while ( curr_p != nullptr ) {
    if ( curr_idx == idx )
      return curr_p->value;
    curr_idx += 1;
    curr_p   = curr_p->next_p;
  }

  return 0;
}

//------------------------------------------------------------------------
// SListSpoly::reverse
//------------------------------------------------------------------------
/*
void SListSpoly::reverse()
{
  size_t size   = 0;
  Node*  curr_p = m_head_p;
  while ( curr_p != nullptr ) {
    size   += 1;
    curr_p = curr_p->next_p;
  }

  int* tmp = new int[size];

  size_t i = 0;
  curr_p   = m_head_p;
  while ( curr_p != nullptr ) {
    tmp[i++] = curr_p->value;
    curr_p = curr_p->next_p;
  }

  size_t j = size-1;
  curr_p   = m_head_p;
  while ( curr_p != nullptr ) {
    curr_p->value = tmp[j--];
    curr_p = curr_p->next_p;
  }

  delete[] tmp;
}
*/
//------------------------------------------------------------------------
// SListSpoly::print
//------------------------------------------------------------------------

void SListSpoly::print() const
{
  printf("TEST!\n");
  Node* curr_p = m_head_p;
  while ( curr_p != nullptr ) {
    std::cout << curr_p->value << ", ";
    curr_p = curr_p->next_p;
  }
  std::printf( "\n" );
}

