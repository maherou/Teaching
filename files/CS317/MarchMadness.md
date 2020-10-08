---
layout: post
title: "CS317 - Agile and Efficient Software"
description: Course on Modeling and Simulation based Computing
date: 2020-09-28
img: CS317-Banner.jpg # Add image post (optional)
tags: [Teaching, Modeling, Simulation, Research] # add tag
location: "Collegeville, MN, USA"
---

## March Madness: Building a Competitive Ranking System

### Goal:

Write a program that rank college basketball teams using the outcomes from past games.

### Assignment details:

We will use some techniques from linear algebra along with publicly-accessible data from college basketball games to construct a ranking system for college basketball teams.  The system can be used to provide meaningful comparisons even between teams that have not played each other.

Your program will read game information from a file to construct a linear system of equations, then solve the system using functions from a library of your choice.

### Resources:
- The mathematics of the ranking system are described in Chapter 4 of [Kenneth Massey's undergraduate thesis](https://www.masseyratings.com/theory/massey97.pdf).
- A practical guide to how to construct a ranking of teams can by found in this [summary document](../masseyMethod.pdf).
- [Data sets for constructing your linear systems](https://www.masseyratings.com/data).  Your program should be able to work with two or more of these sets.  Start by constructing and solving a system using only MIAC women's or men's games.
- You will need to use a library to compute the solution to your linear system.  Both Java and Python have several options available.  Part of your efforts will be to find a suitable library.
