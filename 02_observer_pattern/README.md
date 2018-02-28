# Observer pattern

The Observer Pattern defines a one-to-many
dependency between objects so that when one
object changes state, all of its dependents are
notified and updated automatically.


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
  update(Payload)
}

interface Payload{

}


class WeatherData{
  registerObserver(Observer){}
  removeObserver(Observer){}
  notifyObservers(){}
  getData(){}
  setData(WeatherPayload){}
}


class CurrentScreen{
  update(WeatherPayload){}
}


class StatsScreen{
  update(WeatherPayload){}
}


class ForecastScreen{
  update(data){}
}

class WeatherPayload{
  temperature : float
  pressure : float
  humidity : float
}


Subject <|.. WeatherData

Observer <|.. CurrentScreen
Observer <|.. StatsScreen
Observer <|.. ForecastScreen

Payload <|.. WeatherPayload


@enduml
```
