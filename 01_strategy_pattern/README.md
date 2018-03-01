# Strategy pattern

> The Strategy Pattern defines a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from  clients that use it.

![UML](uml.svg)

```plantuml
@startuml

Abstract Duck{
  flyBehavior : FlyBehavior
  quackBehavior : QuackBehavior
  display()
  performFly()
  performQuack()
  setFlyBehavior()
  setQuackBehavior()
}

Class MallardDuck{
  display()
}

Class RubberDuck{
  display()
}

Class DecoyDuck{
  display()
}

Class ModelDuck{
  display()
}

Interface FlyBehavior{
  fly()
}

Class WingsFly{
  fly()
}

Class RocketFly{
  fly()
}

Class FlyNot{
  fly()
}

Interface QuackBehavior{
  quack()
}

Class Quack{
  quack()
}

Class Squeack{
  quack()
}

Class QuackNot{
  quack()
}


Class DuckCall{
  quackBehavior : QuackBehavior
  performQuack()
}


Duck <|-- MallardDuck
Duck <|-- RubberDuck
Duck <|-- DecoyDuck
Duck <|-- ModelDuck

FlyBehavior <|.. WingsFly
FlyBehavior <|.. RocketFly
FlyBehavior <|.. FlyNot

QuackBehavior <|.. Quack
QuackBehavior <|.. Squeack
QuackBehavior <|.. QuackNot

QuackBehavior -- Duck
FlyBehavior -- Duck

QuackBehavior --- DuckCall


@enduml
```