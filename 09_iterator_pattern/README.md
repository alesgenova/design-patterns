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
  - items : std::vector<>
}

Class LunchMenu{
  + createIterator()
  - items : Array
}

Class DinnerMenu{
  + createIterator()
  - items : std::map<>
}


Interface MenuIterator{
  + next()
  + hasNext()
}

Class BreakfastIterator{
  + next()
  + hasNext()
}

Class LunchIterator{
  + next()
  + hasNext()
}

Class DinnerIterator{
  + next()
  + hasNext()
}


Class Waitress{
  + wholeMenu()
  + breakfastMenu()
  + lunchMenu()
  + dinnerMenu()
  + veggieMenu()
}


Menu -right- Waitress
Waitress -right- MenuIterator


Menu <|..  BreakfastMenu 
Menu <|..  LunchMenu
Menu <|..  DinnerMenu

MenuIterator <|..  BreakfastIterator 
MenuIterator <|..  LunchIterator
MenuIterator <|..  DinnerIterator


note "The Iterator provides a unified interface to iterate through different data structures" as N0
BreakfastMenu::items .. N0
LunchMenu::items .. N0
DinnerMenu::items .. N0

@enduml
```
