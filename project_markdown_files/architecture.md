# Program Organization

## Naming Conventions
* Naming conventions follow Epic Games [Coding Standards](https://docs.unrealengine.com/en-us/Programming/Development/CodingStandard)

## Major Classes
* character: player(has inventory), monsters, stats(health, attack, defense)

* maze: random maze per level, start, finish, walls

* gameState: level, difficulty, score, mapSize, character location, lighting

* items: instant use(potion), equippable(armor, weapons, lighting items)

* menu: new game, load game, save game, settings, exit game

* inventory: contains limited items

## Data Design

## Business Rules
* The game is not subject to business rules.

## User Interface Design
[Menu Design](https://github.com/cop4331-group-14/COP4331-Project/blob/master/menudesign.pdf)

[In-Game Design](https://github.com/cop4331-group-14/COP4331-Project/blob/master/ingamedesign.pdf)

## Resource Management


## Security
* The game is not online and does not access personal information. Therefore, security is not a concern.

## Performance
* The game should operate at >= 30 frames-per-second.

## Scalability

## Interoperability

## Internationalization/Localization
* The game will only be presented in English, as it is only for the class project.

## Input/Output

## Error Processing

## Fault Tolerance

## Architectural Feasibility

## Overengineering

## Build-vs-Buy Decisions
* Unreal Engine 4 will be used along with Visual Studio as these programs work together effortlessly, according to UE4 design. UE4 provides much functionality that would be too time-consuming to code from scratch.

## Reuse

## Change Strategy
