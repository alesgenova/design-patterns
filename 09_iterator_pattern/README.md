# Iterator Pattern

> The Iterator Pattern provides a way to access the elements of an aggregate object sequentially without exposing its underlying representation.

![UML](uml.svg)


```plantuml
@startuml


Interface Menu{
  + createIterator()
}

Class BreakfastMenu{
  + createIterator()
  - items : std::vector<MenuItem>
}

Class LunchMenu{
  + createIterator()
  - items : MenuItem[]
}


Interface MenuIterator{
  + next()
  + hasNext()
  + remove()
}

Class BreakfastIterator{
  + next()
  + hasNext()
  + remove()
}

Class LunchIterator{
  + next()
  + hasNext()
  + remove()
}


Class Waitress{
  + wholeMenu()
}


Menu -right- Waitress
Waitress -right- MenuIterator


Menu <|..  BreakfastMenu 
Menu <|..  LunchMenu

MenuIterator <|..  BreakfastIterator 
MenuIterator <|..  LunchIterator


@enduml
```
