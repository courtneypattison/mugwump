# Mugwump
CLI based Mugwump game: https://en.wikipedia.org/wiki/Mugwump_(video_game)

## Install and run
```
$ gcc mugwump.c -o mugwump
$ ./mugwump
```

## Gameplay
```
Mugwump
=======
You get ten turns to guess the Mugwump's location.
For each guess, the Manhattan distance between your guess and the Mugwump will be printed.
What's your guess (x y)? 1 2
You are 9 units from the Mugwump.
  0 1 2 3 4 5 6 7 8 9
0 . . . . . . . . . .
1 . . W . . . . . . .
2 . . . . . . . . . .
3 . . . . . . . . . .
4 . . . . . . . . . .
5 . . . . . . . . . .
6 . . . . . . . . . .
7 . . . . . . . . . .
8 . . . . . . . . . .
9 . . . . . . . . . .
Turn number 1
What's your guess (x y)? 7 6
You are 3 units from the Mugwump.
  0 1 2 3 4 5 6 7 8 9
0 . . . . . . . . . .
1 . . . . . . . . . .
2 . . . . . . . . . .
3 . . . . . . . . . .
4 . . . . . . . . . .
5 . . . . . . . . . .
6 . . . . . . . . . .
7 . . . . . . W . . .
8 . . . . . . . . . .
9 . . . . . . . . . .
Turn number 2
What's your guess (x y)? 5 5
You are 2 units from the Mugwump.
  0 1 2 3 4 5 6 7 8 9
0 . . . . . . . . . .
1 . . . . . . . . . .
2 . . . . . . . . . .
3 . . . . . . . . . .
4 . . . . . . . . . .
5 . . . . . W . . . .
6 . . . . . . . . . .
7 . . . . . . . . . .
8 . . . . . . . . . .
9 . . . . . . . . . .
Turn number 3
What's your guess (x y)? 4 6
You are 2 units from the Mugwump.
  0 1 2 3 4 5 6 7 8 9
0 . . . . . . . . . .
1 . . . . . . . . . .
2 . . . . . . . . . .
3 . . . . . . . . . .
4 . . . . . . W . . .
5 . . . . . . . . . .
6 . . . . . . . . . .
7 . . . . . . . . . .
8 . . . . . . . . . .
9 . . . . . . . . . .
Turn number 4
What's your guess (x y)? 5 7
You are 0 units from the Mugwump.
  0 1 2 3 4 5 6 7 8 9
0 . . . . . . . . . .
1 . . . . . . . . . .
2 . . . . . . . . . .
3 . . . . . . . . . .
4 . . . . . . . . . .
5 . . . . . . . W . .
6 . . . . . . . . . .
7 . . . . . . . . . .
8 . . . . . . . . . .
9 . . . . . . . . . .
Turn number 5
You win!
The Mugwump is at (5, 7).
Do you want to play again (y/n)? n
Thank you for playing!
```

## Limitations
There's no user input checking, so the user has to format the input correctly for the game to work.
