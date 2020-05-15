## March Madness: Building a Competitive Ranking System

### Goal:

Write a program that rank college basketball teams using the outcomes from past games.

### Assignment details:

We will use some techniques from linear algebra along with publicly-accessible data from college basketball games to construct a ranking system for college basketball teams.  The system can be used to provide meaningful comparisons even between teams that have not played each other.

Your program will read game information from a file to construct a linear system of equations, then solve the system using functions from the Eigen linear algebra library.

### Resources:
- The mathematics of the ranking system are described in Chapter 4 of [Kenneth Massey's undergraduate thesis](https://www.masseyratings.com/theory/massey97.pdf).
- [Data sets for constructing your linear systems](https://www.masseyratings.com/data).  Your program should be able to work with two or more of these sets.  Start by constructing and solving a system using only MIAC women's or men's games.
- You will need to use a library to computing the solution to your linear system.  The [Eigen library](http://eigen.tuxfamily.org/index.php?title=Main_Page) is good for this.
- This [StackOverflow posting](https://stackoverflow.com/questions/53247078/c-eigen-for-solving-linear-systems-fast) will help you understand how to call Eigen functions to solve the linear system.
