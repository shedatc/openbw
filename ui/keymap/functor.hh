#ifndef FUNCTOR_HH
#define FUNCTOR_HH

namespace bwgame {

  struct functor {
    virtual void operator()() = 0;
  };

}

#endif // FUNCTOR_HH
