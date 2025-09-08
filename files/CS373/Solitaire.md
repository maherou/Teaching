---
layout: coursepost
title: "CS373 - Solitaire"
description: Solitaire
tags: [Teaching, Writing, Presenting, Research] # add tag
location: "Collegeville, MN, USA"
---

## Simulating Solitaire

### Goal: Write a program to simulate playing games of solitaire.

What is the probability of winning solitaire? There is no analytical solution.  Unlike flipping coins, the number of possible outcomes of a solitaire game is too large to enumerate.

In this assignment we will use a [PlayingCards class](./CardDeckImplement.md) as part of a program to simulate playing Solitaire.  Once built, we can run our program many times and count how many times we win, to get an estimate of our winning percentage.

### Assignment details:

- We will create a simple version of the game (option 3 in the Wikipedia article below: Turning one card at a time from the stock to the waste, with three passes through the deck).
- In addition to writing the program, we also want to provide some tests.  A common approach to testing simulation codes is to develop synthetic data where the outcome is know.  For this program, we will want to have special shufflings of the cards so that the game will be guaranteed winnable or losable.  What are some possible orderings?  

### Resources:
- [Overview of the game of solitaire](https://en.wikipedia.org/wiki/Klondike_(solitaire)).
- [Online Klondike Solitaire Game](https://www.solitaire-klondike.com/klondike.html)
- [The Fisher-Yates (Knuth version) Algorithm:](https://exceptionnotfound.net/understanding-the-fisher-yates-card-shuffling-algorithm) Use this algorithm to implement card shuffling algorithm.
