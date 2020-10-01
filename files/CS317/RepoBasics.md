---
layout: post
title: "CS317 - Agile and Efficient Software"
description: Course on Modeling and Simulation based Computing
date: 2020-09-28
img: CS317-Banner.jpg # Add image post (optional)
tags: [Teaching, Modeling, Simulation, Research] # add tag
location: "Collegeville, MN, USA"
---

### Repository Basics

#### Create
- Easiest (IMO) to do directly on the GitHub website
- Choose a license - We will talk about options
- Add a (simple) README.md file - Enables immediate cloning

#### What to track
- Any source content (*.java, *.md, *.docx, *.tex, *.pptx)
- LICENSE.txt or similar
- .gitignore - list of files or file patterns that Git should ignore (see next list)
- **General rule:** Keep what is truly _source_ and maybe files that are hard to generate

#### What not to track
- Most PDF files (except those that are hard to generate, or convenient for user)
- Most .* files (.DS_Store, .classpath, ) - These tend to be config files specific to the local computer, not the repo
- Generated files (*.class, *.o, *.obj, *.exe) - These are best generated when needed on the local computer
- **General rule:** Avoid keeping files that change indirectly, that keep local-specific info or would otherwise clutter the repo, especially large binary files

