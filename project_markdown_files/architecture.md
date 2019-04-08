# Program Organization

## System Architecture
![](https://github.com/cop4331-group-14/COP4331-Project/blob/master/systemarchitecture.PNG)

## Naming Conventions
* Naming conventions follow Epic Games [Coding Standards](https://docs.unrealengine.com/en-us/Programming/Development/CodingStandard)

## Major Classes
* character: player(has inventory), monsters, stats(health, attack, defense)

* maze: random maze per level, start, finish, walls

* gameState: level, difficulty, score, mapSize, character location, lighting

* items: instant use(potion), equippable(armor, weapons, lighting items)

* menu: new game, load game, save game, settings, exit game

* inventory: contains limited items

## Class Diagrams
* Enemy Character

![](https://github.com/cop4331-group-14/COP4331-Project/blob/master/enemy_character_design.PNG)

* Maze

![](https://github.com/cop4331-group-14/COP4331-Project/blob/master/maze_design.PNG)

## Data Design

## Business Rules
* The game is not subject to business rules.

## User Interface Design
* In-Game Design

![](https://github.com/cop4331-group-14/COP4331-Project/blob/master/ingamedesign.PNG)

* Menu Design

![](https://github.com/cop4331-group-14/COP4331-Project/blob/master/menudesign.PNG)

## Resource Management
* Limited draw distance to improve performance

## Security
* The game is not online and does not access personal information. Therefore, security is not a concern.

## Performance
* The game should operate at >= 30 frames-per-second.

## Scalability
* Modular file structure (assets organized by function)

## Interoperability
* Game is stored and run completely locally

## Internationalization/Localization
* The game will only be presented in English, as it is only for the class project.

## Input/Output
* Inputs include keys and mouse movements to control the player and navigate menus

## Error Processing

## Fault Tolerance

## Architectural Feasibility

## Overengineering

## Build-vs-Buy Decisions
* Unreal Engine 4 will be used along with Visual Studio as these programs work together effortlessly, according to UE4 design. UE4 provides much functionality that would be too time-consuming to code from scratch.

## Reuse

## Change Strategy
