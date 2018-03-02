# Decorator Pattern

> The Decorator Pattern attaches additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.

![UML](uml.svg)

```plantuml
@startuml

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

Pizza <|--- PizzaDecorator

PizzaDecorator <|-- ToppingDecorator

PizzaDecorator <|-- StyleDecorator

StyleDecorator <|-- NewYorkStyle
StyleDecorator <|-- ChicagoStyle

ToppingDecorator <|-- Mozzarella
ToppingDecorator <|-- Pepperoni
ToppingDecorator <|-- Arugula




@enduml
```