# Factory Pattern

> The Factory Method Pattern defines an interface for creating an object, but lets subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.

I didn't like the Factory pattern example from the book, so I made up my own, where the factory produces the selected pizza reusing the base pizza and decorators that I created in the decorator pattern example.

![UML](uml.svg)

```plantuml
@startuml

Abstract PizzaStore{
  factory : PizzaFactory
  orderPizza()
}

Class NewYorkStore{
  factory : NewYorkFactory
}

Class ChicagoStore{
  factory : ChicagoFactory
}

Class CustomStore{
  factory : PizzaFactory
  setFactory(PizzaFactory)
}

Interface PizzaFactory{
  createPizza()
}

Class NewYorkFactory{
  createPizza()
}

Class ChicagoFactory{
  createPizza()
}



PizzaStore <|-- NewYorkStore
PizzaStore <|-- ChicagoStore
PizzaStore <|-- CustomStore

PizzaFactory <|.. NewYorkFactory
PizzaFactory <|.. ChicagoFactory

PizzaStore ---- PizzaFactory



package "In Decorator Pattern Example" #EDEDED {
  Abstract Pizza{
  getCost() : float
  getDescription() : string
}

Abstract PizzaDecorator{
  getCost()
  getDescription()
  wrappedPizza : Pizza
}

Abstract ToppingDecorator{
  getCost()
  getDescription()
}

Class Margherita{
  getCost()
  getDescription()
}

Class Calzone{
  getCost()
  getDescription()
}

Class FlatBread{
  getCost()
  getDescription()
}

Class BasicPizza{
  getCost()
  getDescription()
}

Class Pepperoni{
  getCost()
  getDescription()
}

Class Mozzarella{
  getCost()
  getDescription()
}

Class Arugula{
  getCost()
  getDescription()
}

Abstract StyleDecorator{
  getCost()
  getDescription()
}

Class NewYorkStyle{
  getCost()
  getDescription()
}

Class ChicagoStyle{
  getCost()
  getDescription()
}

Pizza <|-- Margherita
Pizza <|-- Calzone
Pizza <|-- FlatBread
Pizza <|-- BasicPizza

Pizza <|-- PizzaDecorator

PizzaDecorator <|-- ToppingDecorator

PizzaDecorator <|-- StyleDecorator

StyleDecorator <|-- NewYorkStyle
StyleDecorator <|-- ChicagoStyle

ToppingDecorator <|-- Mozzarella
ToppingDecorator <|-- Pepperoni
ToppingDecorator <|-- Arugula

}

PizzaFactory --- Pizza

@enduml
```