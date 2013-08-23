// virtualtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>

using namespace std;

class base
{
public:
	virtual void func()
	{
		cout<<"in base"<<endl;
	}
	virtual void func1(int j)
	{
	
	}
	void basefunc()
	{
	
	}
};

class child : base
{
public:
	void func() override
	{
		cout<<"in child"<<endl;
	}

	void testchild()
	{
	
	}
};

class child2 : child
{
public:
	void func()
	{
	}
	void child2func()
	{
	
	}
	

};

class BaseA
{
public:
    virtual int foo() = 0;
};


class ChildNew : public BaseA
{
public:
    int foo() { return 42; }
};


int _tmain(int argc, _TCHAR* argv[])
{

	
	base objBase;
	child objChild;
	child2 objChild2;
	objBase.func();
	objChild.func();
	
	child *pobjBase = (child*)new base;
	child *pobjChild = new child;
	child2 *pobjChild2 =(child2*) new child;
	child2 *pobjChild3 =(child2*) new base;
	child2 *pobjChild4 =(child2*) new child2;
	//pobjChild3->
	base* pbase =(base*) new child;
	pbase->basefunc();
	//pbase->testchild();
	((child*)pbase)->testchild();

	pobjChild2->func();
	pobjBase->func();
	pobjChild->func();

	BaseA * pNewBase1 = new ChildNew();
	return 0;
}















class parent {
public:
  virtual void handle_event(int something) const = 0 {
    // boring default code
  }

  void funcdata()
  {
  
  }
};

//class parent {
//public:
//  virtual void handle_event(int something) {
//    // boring default code
//  }
//};

class mychild : public parent {
public:
  virtual void handle_event(int something) const/* override  */{
    // new exciting code
  }
  
};

//int main() 
//{
//  parent *p = new mychild();
// // p->handle_event(1);
//}




/************************************************* Data Hiding *********************************************/
#include <iostream>
//class Base {
//private:
//	  virtual void f(int) { std::cout << "Base::Int!" << std::endl; } // (1)
//public:
//  virtual void f(double){ std::cout << "Base::Double!" << std::endl; }
//  // virtual void f(int) { std::cout << "Base::Int!" << std::endl; } // (1)
//  virtual ~Base() {}
//};
//
//class Derived : public Base {
//public:
//  // using Base::f; // (2)
//  void f(double) { std::cout << "Derived::Double!" << std::endl; }
//};



class Base {

public:
  void f(int){ std::cout << "Base::int!" << std::endl; }
  void f(double) { std::cout << "Base::Double!" << std::endl; } // (1)
  virtual ~Base() {}
};

class Derived : public Base {
public:
	//using Base::f; // (2)
	void f(int) { std::cout << "Derived::int!" << std::endl; }
	
};

//int main(int, char **) {
//  Derived d;
//  d.f(21.0578);
//  return 0;
//}


using std::cout;
using std::endl;

class A {};
class B {};

class X
{
public:
    void spray(A&)
    {
        cout << "Class A" << endl;
    }
};

class Y : public X
{
public:
	//using X::spray;
    void spray(B&)
    {
        cout << "Class B" << endl;
    }
};
//
//int main()
//{
//    A a;
//    B b;
//    Y y;
//
//	y.spray(a);
//    y.spray(b);
//
//    return 0;
//}





//***********************************	co-variant return types		********************************//
//#include <iostream>
//
//using namespace std;
//
//class base22
//{
//   public:
//      virtual int func()
//      {
//         cout << "vfunc in base class\n";
//         return 0;
//      }
//};
//
//class derived22: public base22
//{
//   public:
//      double func() 
//      {
//         cout << "vfunc in derived class\n";
//         return 0;
//      }
//};
//
//int main()
//{
//   base22 *bptr = new derived22;
//   bptr->func();
//
// 
//	/*base22 bptr;
//	bptr.func();*/
//   return 0;	
//}
