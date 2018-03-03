# Command Pattern

> The Command Pattern encapsulates a request as an object, thereby letting you parameterize other objects with different requests, queue or log requests, and support undoable operations.


![UML](uml.svg)

```plantuml
@startuml

Interface Command{
  + execute()
  + undo()
  - receiver : Receiver
}

Interface Receiver{
}

Interface Invoker{

}

Interface Client{

}

Class RemoteControl{
  - onSlots : Command[]
  - offSlots : Command[]
  + onBtnPressed(int i)
  + offBtnPressed(int i)
  + setSlot(int, Command, Command)
}

Class Light{
  - on()
  - off()
}

Class Stereo{
  - on()
  - off()
}

Class GarageDoor{
  - open()
  - close()
}

Class CeilingFan{
  - high()
  - low()
  - off()
}

Class NullCommand{
  +execute()
}

Abstract LightCmd{
  + LightCmd(Light)
  + execute()
  + undo()
  - receiver : Light
}

Class LightOnCmd{
  + execute()
}

Class LightOffCmd{
  + execute()
}

Abstract DoorCmd{
  + DoorCmd(GarageDoor)
  + execute()
  + undo()
  - receiver : GarageDoor
}

Class DoorOpenCmd{
  + execute()
}

Class DoorCloseCmd{
  + execute()
}

Abstract FanCmd{
  + FanCmd(CeilingFan)
  + execute()
  + undo()
  - receiver : CeilingFan
}

Class FanHighCmd{
  + execute()
}

Class FanLowCmd{
  + execute()
}

Class FanOffCmd{
  + execute()
}




Client --> Command
Client --> Invoker
Client --> Receiver

Invoker -> Command : command.execute()
Command -> Receiver : receiver.action()

Invoker <|.. RemoteControl

Receiver <|.. Light
Receiver <|.. Stereo
Receiver <|.. GarageDoor
Receiver <|.. CeilingFan

<> PLACEHOLDER1

Command <|.. PLACEHOLDER1

PLACEHOLDER1 .. LightCmd
LightCmd <|-- LightOnCmd
LightCmd <|-- LightOffCmd

PLACEHOLDER1 .. FanCmd
FanCmd <|-- FanHighCmd
FanCmd <|-- FanLowCmd
FanCmd <|-- FanOffCmd

PLACEHOLDER1 .. DoorCmd
DoorCmd <|--- DoorOpenCmd
DoorCmd <|--- DoorCloseCmd

PLACEHOLDER1 .. NullCommand



@enduml
```

