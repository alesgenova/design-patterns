#ifndef _06_RECEIVER_HPP
#define _06_RECEIVER_HPP

#include <string>

class Receiver{
  public:
    Receiver(std::string t_location);
    virtual ~Receiver() = 0;
  protected:
    std::string location;
};

class Light : public Receiver{
  public:
    Light(std::string t_location);
    void on();
    void off();
    int getStatus() const;
    static const int OFF = 0;
    static const int ON = 1;

  private:
    int status;
};

class CeilingFan : public Receiver{
  public:
    CeilingFan(std::string t_location);
    void high();
    void low();
    void off();
    int getStatus() const;
    static const int HIGH = 2;
    static const int LOW = 1;
    static const int OFF = 0;

  private:
    int status;
};

class Door : public Receiver{
  public:
    Door(std::string t_location);
    void open();
    void close();
    int getStatus() const;
    static const int CLOSED = 0;
    static const int OPEN = 1;

  private:
    int status;
};

#endif
