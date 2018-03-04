# Adapter Pattern and Facade Pattern


## Adapter Pattern
> The Adapter Pattern converts the interface of a class into another interface the clients expect. Adapter lets classes work together that couldn’t otherwise because of incompatible interfaces.

![UML](uml.svg)


```plantuml
@startuml

Class Client{

}

package "In Strategy Pattern Example" #EDEDED {

  Interface Duck{
    + display()
    + quack()
    + fly()
  }

  Class MallardDuck{
    + display()
    + quack()
    + fly()
  }

}

Interface Turkey{
  + gobble()
  + shortFly()
}

Class WildTurkey{
  + gobble()
  + shortFly()
}

Class DuckAdapter{
  - turkey : Turkey
  + display()
  + quack()
  + fly()
}


Client - Duck

Duck <|.. MallardDuck

Turkey <|.. WildTurkey

Duck <|. DuckAdapter

DuckAdapter -> Turkey


@enduml
```

## Facade Pattern

> The Facade Pattern provides a unified interface to a set of interfaces in a subsytem. Facade defines a higher-level interface that makes the subsystem easier to use.