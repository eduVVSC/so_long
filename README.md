<h1 align="center"> So_long Project </h1>

<p> This is a project where I needed to do a 2D game. The game needed to have a top-down view. In order to win, the player should collect all the itens in the map, and run to the exit, without getting into any traps, if the player stops at
any trap, he should lose the game.</p>
<p></p>


### Main developed areas:
<p>  -Managenent of inputs from the user;</p>
<p>  -Display of images to create animations;</p>
<p>  -Handling of events;</p>
<p>  -Window management;</p>


## How to use it:
If you wanna play the game, you should do a git clone of the repositiory:
```bash
git clone repository
```
After it, you will enter the directory and do:
```bash
cd so_long
make bonus
```
Than to play you will do:
```bash
./so_long map/working1.ber
```

### Contents:
<l>

  
## Game development:

### Textures:
<p> Paloma Garcia Vanrell were commissioned to do the textures of the game. Here follows her dossier:</p>


### Map managment:
<p> The map management is consisted in the checker of the map and then, see if its playable or not</p>


##### Map Check
<p> In the map check, we needed to look to this following errors: </p>
<p> ✅ Check if the characters are the correct ones; </p>
<p> ✅ Check the quantity of the characters;</p>
<p> ✅ Check if the map is a rectangle;</p>
<p> ✅ Check if the map is closed;</p>

##### Map Playable
<p> In order to check if the map is playable, we are going to start at the players location and we will fill the spaces close to him(if they are walkable) with another character,
in this case 2, then we are going to do the same thing to the walkable characters close to 2. We will do this until there's no changes left to do. After that, we will check to map
to see if there are any of the necessary chacters that are still in the map(E or C), if so, the map is unplayable.</p>

### Character Animation:
<p> The animation was one of the longest parts of the program, just because I had create a lot of functions just to make it work. The explaining about how it works is quite simple, whenever you press one of the keys that make the character walk(W,A,S,D) and the direction where you pressed to has a walkable space, the game is going to display 4 sequencial images that combined will make the walking animation.</p>

### MiniLibx usage:
<p> The minilibx is the library that we have available to use to make the part usable of the game, the movements and the screen. </p>

##### Window display
<p> To make the window display I used the functions that we had available and then, I used the map position to display every image that is on that window, so each character in the map is equivalent to a 32x32 image that you see in the window.</p>

##### Event Handling
<p> The event handling is based on, while in an infinit loop, that happens until the game end, the program is getting the code generated whenever the user presses a key, and based on this code, it will perform an action. </p>

