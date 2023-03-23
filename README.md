---
# TheMazeGame
---

The Maze Game is a 3D game where the player controls a character who is trapped in a maze. The game is controlled using the keyboard. The main goal of the game is to collect a certain number of points before a specified time limit expires. The number of points scattered throughout the maze is greater than the amount required to be collected, making it easier for the player to navigate the map. The center of the map is the "unloading zone," which is also the starting point of the game. Once the player collects the specified number of points, they must return to the unloading zone to end the game. To help the player and add variety to the gameplay, there are hidden bonuses on the map that are divided into two types. The first type relates to time and increases the remaining time for the game. The second type of bonus relates to control, where the player's movement speed is increased for a specified amount of time. The player also has a menu that allows them to pause the game at any time, restart it, return to the main menu, or completely exit the game. The game ends in two scenarios. The first scenario assumes that the player collects the required number of points and returns to the unloading zone before time runs out, resulting in a win. The second scenario assumes that time runs out before the player collects all the points, resulting in a loss.

---
![Gameplay photo](https://github.com/Frosenow/TheMaze/blob/master/Media/mockup2.png)
![Gameplay photo](https://github.com/Frosenow/TheMaze/blob/master/Media/mockup1.png)
---
# How It's Made:

**Tech used:** C++, Cinema 4D, Unreal Engine 4

Initially, the main character class was created along with methods allowing movement on the map. The next step was to add methods to identify whether the player had collected a point, and create the unloading zone class that identified the item picked up. This laid the foundation for creating bonuses, which were implemented similarly to points - both classes have the same algorithm for collecting items. The next step was to add a timer and point counter, with information about these variables stored in the game mode class and the main character class. The Unreal Engine 4 script system was also used, with methods implemented more efficiently in the Blueprint environment than in C++. These methods include calling the main menu, pause menu, moving between levels, and ending the game. Once all classes were refined, everything was put together. The map elements that the player moves through were created in Cinema 4D, then the entire map was created from those elements, with points, bonuses, and game duration set. The whole thing was compiled into executable files.

## Class and method breakdown

* CFPSCharacter: This class contains information about the player character, including their score and remaining time. It also includes methods for controlling the character and handling power-ups.

* FPSExtractionZone: This class represents the extraction zone in the game and contains variables for displaying it graphically, information about the points that need to be collected, and methods for checking if the player is in the zone and has collected enough points.

* MazeGameMode: This class is responsible for managing the game and includes methods for handling different end-game scenarios. It also includes an additional camera-controlled character used for a bird's eye view of the maze after the game ends for aesthetic purposes.

* SPowerup: This is a base class for power-ups and includes variables for controlling the duration of the power-up. It also includes methods for activating and ending the power-up effect.

* SPowerUpActor: This class is responsible for displaying power-ups graphically during gameplay. It includes a method for respawning power-ups that have been collected by the player.

## Examples:
Take a look at these couple examples that I have in my own portfolio:

**Interactive Linear Regression using Tensorflow.js:** https://github.com/Frosenow/Learning-Tensorflowjs

**Image Processing in Python using CUDA with Numba:** https://github.com/Frosenow/Numba-GPU-Image-Processing

**Locatobia - Guide for busy tourists**: https://github.com/Frosenow/Locatobia
 
