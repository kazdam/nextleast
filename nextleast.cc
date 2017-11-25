// Test 
#include <iostream>
using namespace std;

template <typename T>
class Node {
  T data_;
  Node<T> *l_, *r_;
public:
  Node(T t) : data_(t), l_(NULL), r_(NULL) {}

  Node<T>* left() const { return l_; }
  Node<T>* setLeft(Node<T>* l) { return l_ = l; }
  Node<T>* right() const { return r_; }
  Node<T>* setRight(Node<T>* r) { return r_= r; }
  T data() const { return data_; }
};

int main (/*int argc, char* argv[]*/)
{
  Node<int> *a, *b, *c, *d, *e;
  a = new Node<int>(50);
  b = new Node<int>(25);
  c = new Node<int>(75);
  a->setLeft(b);
  a->setRight(c);
  
  d = new Node<int>(10);
  e = new Node<int>(35);
  b->setLeft(d);
  b->setRight(e);

  Node<int> *p, *q = NULL;

  p = a;
  while(p->left() != NULL) {
    //cout << p->data() << endl;
    q = p;
    p = p->left();
  }
  if(p->right() != NULL) {
    cout << p->right()->data() << endl;
  } else {
    cout << q->data() << endl;
  }
  
  return 0;
}
