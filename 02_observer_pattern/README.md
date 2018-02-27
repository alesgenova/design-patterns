# Observer pattern

The Observer Pattern defines a one-to-many
dependency between objects so that when one
object changes state, all of its dependents are
notified and updated automatically.

![UML](http://www.plantuml.com/plantuml/svg/ZPA_Ri8m4CRtUmgFOU41gWv8HLrRAKC7n72O3vegEEZkWbG5tXrZ4fgaLTJ5zdtV_Vd9zaADnUf3IMI5bN1l6uMS8EwTpI21g0Xntx67o-lD5xmrv5pLfgbxUfIirj4Gx0kD1PsOTOTPCW_L2NzQeR9YzzqfciteGltPdNCRNX-tRCZYmlSqNxAg-m3R9sGPvMQIfBbCi2Jp5qrIzx1RypRIDaeOKVa1UQb542pt0eGny20pDpRzHzvh9V2iqotRvt7Fv_cyVnb4ZqTDrW1lvFM0HiuGWMY1i8t_vWe0.svg)

```plantuml
@startuml

title Observer Pattern

interface Subject{
  observers : Observer[]
  registerObserver(Observer)
  removeObserver(Observer)
  notifyObservers()
}


interface Observer{
  update(data)
}


class WeatherData{
  registerObserver(Observer){}
  removeObserver(Observer){}
  notifyObservers(){}
  getData(){}
  setData(data){}
}


class CurrentScreen{
  update(data){}
}


class StatsScreen{
  update(data){}
}


class ForecastScreen{
  update(data){}
}


Subject <|.. WeatherData

Observer <|.. CurrentScreen
Observer <|.. StatsScreen
Observer <|.. ForecastScreen

@enduml
```
