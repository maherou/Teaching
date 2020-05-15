## Simulating Solitaire

### Goal: Write a C++ program to simulate playing games of solitaire.

What is the probability of winning solitaire? There is no analytical solution.  Unlike flipping coins, the number of possible outcomes of a solitaire game is too large to enumerate.

In this assignment we will use our PlayingCards class as part of a program to simulate playing Solitaire.  Once built, we can run our program many times and count how many times we win, to get an estimate of our winning percentage.

### Assignment details:

- We will start with a simple version of the game (option 3 in the Wikipedia article below: Turning one card at a time to the talon, with three passes through the deck).
- In addition to writing the program, we also want to provide some tests.  A common approach to testing simulation codes is to develop synthetic data where the outcome is know.  For this program, we will want to have special shufflings of the cards so that the game will be guaranteed winnable or losable.  What are some possible orderings?  We will also provide some mid-game scenarios where the outcome is also certain.
- One of the important decisions you will need to make is what kind of data structures to use.  Think about the operations you need to perform.  What kind of data structures would work best?
- Like our program for throwing darts, we want our program to have variables that specify the number of rounds and games per round.  Doing this will allow us to compute mean and standard deviation values, bounding the error on our answers with a certain confidence interval.

### Resources:
- [Overview of the game of solitaire](https://en.wikipedia.org/wiki/Klondike_(solitaire)).
- [The Fisher-Yates (Knuth version) Algorithm:](https://exceptionnotfound.net/understanding-the-fisher-yates-card-shuffling-algorithm) Use this algorithm to implement card shuffling algorithm.
