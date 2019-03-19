# Test Procedures
## U001
| Step | Action | Observation |
|------|--------|-------------|

## U002
| Step | Action | Observation |
|------|--------|-------------|
| 1 | Open the ScaryMaze.uproject file with Unreal Engine | Unreal Engine editor launches to the ScaryMaze project |
| 2 | Open the Content folder in the Content Browser by expanding the Sources Panel with the button at the top left of the Content Browser below the Add New button and clicking Content in the Sources Panel | The files in the Content folder are displayed in the Content Browser to the right of the Sources Panel |
| 3 | Double click on the LevelOne level file in the Content folder in the Content Browser | An empty sky displays in the Viewport Display at the center of the Unreal Engine Editor |
| 4 | Click the Play button above the Viewport Display | The Main Menu appears on the screen and the background is darkened |
| 5 | Click the New Game button in the Main Menu | The Main Menu disappears and is replaced by walls surrounding the player and an open sky above the player |
| 6 | Verify that the player is able to look around by moving the mouse | When the mouse is moved in a certain direction, the view of the player also moves in that direction |
| 7 | Verify that the player is able to move around by pressing W, A, S, and D (corresponding to forward, left, backward, and right, respectively) | Pressing W, A, S, or D causes the player camera to move in the corresponding direction |

## U003
| Step | Action | Observation |
|------|--------|-------------|

## U004
| Step | Action | Observation |
|------|--------|-------------|
| 1 | Open the .uproject file | The unreal project file should open in the editor |
| 2 | Press the "Play" button in the top-middle of the editor | The game should load up |
| 3 | Single click on the window for the game | The game should come into focus |
| 4 | Press the "W" key to move forward | The player should move forward |
| 5 | Press the "S" key to move backward | The player should move backward |
| 6 | Press the "A" key to move left | The player should move to the left |
| 7 | Press the "D" key to move right | The player should move to the right |
| 8 | Move the mouse upwards | The player's view should shift upwards |
| 9 | Move the mouse downwards | The player's view should shift downwards |
| 10 | Move the mouse to the left | The player's view should shift to the left |
| 11 | Move the mouse to the right | The player's view should shift to the right |
| 12 | Repeat steps 4 - 11 to traverse around the maze | The player should be able to traverse the maze |
| 13 | Verify that traversal of the maze works with the given input | Traversing the maze should work with the given inputs |

## U005
| Step | Action | Observation |
|------|--------|-------------|
| 1 | Complete Test Procedure U002 | Verify that the view on the screen is walls around the player and an open sky above the player |
| 2 | Verify that the maze map is dark by looking around with mouse movements left and right | Observe that some maze walls are visible and lit, while other walls and corners are dark and unable to be seen, as they are obscured by shadows |

## U006
| Step | Action | Observation |
|------|--------|-------------|

## U007
| Step | Action | Observation |
|------|--------|-------------|
| 1 | Open the .uproject file | The unreal project file should open in the editor |
| 2 | Move your cursor to the "Content Browser" area of the editor | The cursor should be in the "Content Browser" of the editor |
| 3 | Click on the folder icon with description "Choose a path" | A dropdown menu should appear showing the directories |
| 4 | Within the dropdown menu, click on the folder "Blueprints" | The Content Browser should display the contents of the folder "Blueprints" |
| 5 | Right-click on the blueprint titled "MyScaryMazeMainCharacter" | A dropdown menu should appear showing the options of what to do with the blueprint "MyScaryMazeMainCharacter" |
| 6 | Within the dropdown menu, click on the option "Edit..." | The blueprint editor window should appear |
| 7 | Within the "Details" area of the blueprint editor, find the section titled "Base Character" | There should be a section within the "Details" area of the blueprint editor titled "Base Character" |
| 8 | Verify there is an element under this section called "MaxHealth" | There should be an element named "MaxHealth"
| 9 | Verify there is an element under this section called "Health" | There should be an element named "Health"
| 10 | Verify there is an element under this section called "Attack Power" | There should be an element named "Attack Power"
| 11 | Verify there is an element under this section called "Defense" | There should be an element named "Defense"


## U008
| Step | Action | Observation |
|------|--------|-------------|
| 1 | Complete Test Procedure U002 | Verify that the view on the screen is walls around the player and an open sky above the player |
| 2 | Verify that the health is shown in the HUD to be the default value (100) | The text at the bottom right corner of the screen displays "Health: 100" |
| 3 | Verify that the defense is shown in the HUD to be the default value (1) | The text at the bottom right of the screen above the health value is "Defense: 1" |
| 4 | Verify that the attack is shown in the HUD to be the default value (1) | The text at the bottom right of the screen above the attack value is "Attack: 1" |

## U009
| Step | Action | Observation |
|------|--------|-------------|
| 1 | Open the .uproject file | The unreal project file should open in the editor |
 2 | Move your cursor to the "Content Browser" area of the editor | The cursor should be in the "Content Browser" of the editor |
| 3 | Click on the folder icon with description "Choose a path" | A dropdown menu should appear showing the directories |
| 4 | Within the dropdown menu, click on the folder "Blueprints" | The Content Browser should display the contents of the folder "Blueprints" |
| 5 | Locate the blueprint titled "EnemyCharacter_BP" | There should be a blueprint titled "EnemyCharacter_BP" |
| 6 | Click on the blueprint titled "EnemyCharacter_BP" | The blueprint titled "EnemyCharacter_BP" should be highlighted |
| 7 | Drag the blueprint titled "EnemyCharacter_BP" into the middle area of the editor to place it into the world | There should be a new character in the world from the blueprint titled "EnemyCharacter_BP" |
| 8 | Press the "Play" button in the top-middle of the editor | The game should load up |
| 9 | Find the character you placed at the location you placed it | There should be an enemy character at the location that it was placed within the world |
| 10 | Verify that there is an enemy character at the location it was placed | There should be an enemy at the location that it was placed within the world |

## U010
| Step | Action | Observation |
|------|--------|-------------|
| 1 | Open the .uproject file | The unreal project file should open in the editor |
| 2 | Move your cursor to the "Content Browser" area of the editor | The cursor should be in the "Content Browser" of the editor |
| 3 | Click on the folder icon with description "Choose a path" | A dropdown menu should appear showing the directories |
| 4 | Within the dropdown menu, click on the folder "Blueprints" | The Content Browser should display the contents of the folder "Blueprints" |
| 5 | Right-click on the blueprint titled "EnemyCharacter_BP" | A dropdown menu should appear showing the options of what to do with the blueprint "EnemyCharacter_BP" |
| 6 | Within the dropdown menu, click on the option "Edit..." | The blueprint editor window should appear |
| 7 | Within the "Details" area of the blueprint editor, find the section titled "Base Character" | There should be a section within the "Details" area of the blueprint editor titled "Base Character" |
| 8 | Verify there is an element under this section called "MaxHealth" | There should be an element named "MaxHealth" |
| 9 | Verify there is an element under this section called "Health" | There should be an element named "Health" |
| 10 | Verify there is an element under this section called "Attack Power" | There should be an element named "Attack Power" |
| 11 | Verify there is an element under this section called "Defense" | There should be an element named "Defense" |

## U011
| Step | Action | Observation |
|------|--------|-------------|

## U012
| Step | Action | Observation |
|------|--------|-------------|

## U013
| Step | Action | Observation |
|------|--------|-------------|

## U014
| Step | Action | Observation |
|------|--------|-------------|

## U015
| Step | Action | Observation |
|------|--------|-------------|

## U016
| Step | Action | Observation |
|------|--------|-------------|

## U017
| Step | Action | Observation |
|------|--------|-------------|

## U018
| Step | Action | Observation |
|------|--------|-------------|

## U019
| Step | Action | Observation |
|------|--------|-------------|

## U020
| Step | Action | Observation |
|------|--------|-------------|

## U021
| Step | Action | Observation |
|------|--------|-------------|

## U022
| Step | Action | Observation |
|------|--------|-------------|

## U023
| Step | Action | Observation |
|------|--------|-------------|

## U024
| Step | Action | Observation |
|------|--------|-------------|

## U025
| Step | Action | Observation |
|------|--------|-------------|

## U026
| Step | Action | Observation |
|------|--------|-------------|

## U027
| Step | Action | Observation |
|------|--------|-------------|
