#ifndef TURKEY_HPP
#define TURKEY_HPP


class Turkey{
  public:
    virtual void gobble() const = 0;
    virtual void shortFly() const = 0;
};

class WildTurkey : public Turkey{
  public:
    void gobble() const;
    void shortFly() const;
};

#endif
