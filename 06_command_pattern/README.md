# Command Pattern

> The Command Pattern encapsulates a request as an object, thereby letting you parameterize other objects with different requests, queue or log requests, and support undoable operations.


![UML](uml.svg)

```plantuml
@startuml



Interface Command{
  + execute()
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

Class LightOnCmd{
  + LightOnCmd(Light)
  + execute()
  - receiver : Light
}

Class LightOffCmd{
  + LightOffCmd(Light)
  + execute()
  - receiver : Light
}


Class DoorOpenCmd{
  + DoorOpenCmd(GarageDoor)
  + execute()
  - receiver : GarageDoor
}

Class DoorCloseCmd{
  + DoorCloseCmd(GarageDoor)
  + execute()
  - receiver : GarageDoor
}

Class FanHighCmd{
  + FanHighCmd(CeilingFan)
  + execute()
  - receiver : CeilingFan
}

Class FanLowCmd{
  + FanLowCmd(CeilingFan)
  + execute()
  - receiver : CeilingFan
}

Class FanOffCmd{
  + FanOffCmd(CeilingFan)
  + execute()
  - receiver : CeilingFan
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

<color:#FFFFFFF> PLACEHOLDER1

Command <|.. PLACEHOLDER1

PLACEHOLDER1 .. LightOnCmd
PLACEHOLDER1 .. LightOffCmd

PLACEHOLDER1 .. FanHighCmd
PLACEHOLDER1 .. FanLowCmd
PLACEHOLDER1 .. FanOffCmd

PLACEHOLDER1 ... DoorOpenCmd
PLACEHOLDER1 ... DoorCloseCmd



@enduml
```

