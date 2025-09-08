---
layout: coursepost
title: "CS373 - Solitaire V2"
description: Solitaire Version 2
tags: [Teaching, Writing, Presenting, Research] # add tag
location: "Collegeville, MN, USA"
---

## Simulating Solitaire - Part 2

### Goal: Improve the abilities of your Solitaire simulator.

Activities:
- Explore better strategies for winning games.
- Track average number of moves needed for games you win.
- Stretch activity (not required): introduce parallel execution into your Solitaire simulator by enabling simultaneous game playing.

### Competition:
- Prize 1: Best winning percentage.
- Prize 2: Fewest average moves for winnable games.
- Prize 3: Fastest average move time over all games played.

### Report
- Generate a report providing recommendations for which strategies are statistically best, based on your simulation studies.
- Provide this report as part of your final project deliverables, as a Markdown file in your repo.

**Notes:** 
1. **Definition of move:** A move occurs when a card is picked from the stock.  Changes in card placement on the tableau, placement onto the foundation, or onto the waste, do not count as a move.
1. **Best winning percentage:** Number of wins divided by number of games played.
1. **Fewest average moves for winnable games:** Sum of all moves for games you won divided by the number games you won.
1. **Fastest average move time over all games played:** Keep track of how many moves you make during each game, then keep the sum of all moves across all games.  Record how long it takes to play all of your games, by capturing the current time right before starting to play games and right after finishing playing games.  The average move time is the total number of moves divided by the time it took to play the games.  Include both winning and losing games. _Example: If you played 4 games and performed 65, 70, 60, 65 moves for each game respectively and it took 2 seconds to play the games, your average move time would be (65+70+60+65)/2 or 130 moves/sec.  Note that you will probably want to use floating point values for the sum, since the value may get quite large if you play a lot of games._



