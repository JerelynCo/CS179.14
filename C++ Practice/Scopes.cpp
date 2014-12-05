#include <iostream>
using namespace std;

class Foo {
  int i;
  public:
    Foo(int i) : i(i) { //i(i) = this.i = i
      std::cout << "Foo " << i << " created\n";
    }
    Foo(const Foo &f) {
      std::cout << "Foo " << f.i << " being copied\n";
      i = f.i;
    }
    ~Foo() {
      std::cout << "Foo " << i << " releasing\n";
    }
};

int main() {
    Foo a(0);
    bar(a);
    return 0;
 }

//--a--
// Foo a(0);
// int main() {
//     Foo b(1);
//     return 0;
// }
/*
Foo 0 created
Foo 1 created
Foo 1 releasing
Foo 0 releasing*/



/*--b--
int main() {
    Foo a(0), b(1);
    return 0;
}
Foo 0 created
Foo 1 created
Foo 1 releasing
Foo 0 releasing*/

/*--c--
int main() {
{
    Foo a(0);
}
Foo b(1);
return 0;
}
Foo 0 created
Foo 0 releasing
Foo 1 created
Foo 1 releasing*/

/*--d--
int main() {
    Foo a(0);
    Foo b(a);
    return 0;
}
Foo 0 created
Foo 0 being copied
Foo 0 releasing
Foo 0 releasing*/

/*--f--
void bar() {
    Foo b(1);
}
int main() {
    bar();
    Foo a(0);
    bar();
    return 0;
}
Foo 1 created
Foo 1 releasing
Foo 0 created
Foo 1 created
Foo 1 releasing
Foo 0 releasing*/

/* -- g--
void bar(const Foo &p) {
    Foo b(1);
}
int main() {
    Foo a(0);
    bar(a);
    return 0;
 }
 Foo 0 created
 Foo 1 created
 Foo 1 releasing
 Foo 0 releasing*/

/* --h-- 
void bar(Foo p) {
    Foo b(1);
 }
 int main() {
    Foo a(0);
    bar(a);
    return 0;
 }
 Foo 0 created
 Foo 0 being copied
 Foo 1 created
 Foo 1 releasing
 Foo 0 releasing
 Foo 0 releasing*/


//i
/*Foo bar() {
    return Foo(1);
}
int main() {
    Foo a = bar();
    return 0;
 }
Foo 1 created
Foo 1 releasing*/

/*Foo bar(const Foo &p) {
    return p;
}
int main() {
    Foo a(0);
    Foo b = bar(a);
    return 0;
 }
 Foo 0 created
Foo 0 being copied
Foo 0 releasing
Foo 0 releasing
*/

/*Foo bar() {
    return Foo(0); //Foo x(0); return x <--try
}
int main() {
    const Foo &a = bar(); //const makes the lifetime of bar() longer
    Foo b(1);
    return 0;
}

Foo 0 created
Foo 1 created
Foo 1 releasing
Foo 0 releasing
*/

/*Foo* getFoo() {
   Foo a; //it gets destroyed.
   return &a;
}*/


/*Foo* getFoo() {
   static Foo a; //it's okay because static is like a global declaration
   return &a;
}*/