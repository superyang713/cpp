#include "Class.h"


int main()
{
  Door entrance;
  entrance.Start();

  Cat *sneakyGirl = new Cat;
  sneakyGirl->name = "Sneaky Girl";

  Dog *littleGeorge = new Dog;
  littleGeorge->name = "Little George";

  Human *me = new Human;
  me->name = "Jeff";

  entrance.GoThrough(sneakyGirl);
  entrance.GoThrough(littleGeorge);
  entrance.GoThrough(me);

  delete sneakyGirl;
  delete littleGeorge;
  delete me;
  
  return 0;
}
