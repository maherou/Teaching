---
layout: coursepost
title: "CS373 - AI Coding Assistants"
description: AI Coding Assistants
tags: [Teaching, Writing, Presenting, Research] # add tag
location: "Collegeville, MN, USA"
---

## Introduction to Using AI Coding Assistants

For the demonstration element of our Explorations assignment, we will use AI-assisted coding.  Numerous tools exist to facilitate the integration of AI bots in designing, developing, testing, and debugging of software.  Each of you will experiment in the early part of the semester with one or more AI tool by producing a [_solitaire simulator_](./Solitaire.md).  The number and capabilities of AI assistants is evolving rapidly.  Presently, here are some possible tools for you to consider.

| Tool | IDE Compatibility | Why It’s Good for This Course | Getting Started Hints |
|------|-------------------|-----------------------------------|-----------------------|
| **GitHub Copilot** | VS Code, JetBrains, Neovim, Visual Studio | Closest to industry-standard AI-assisted development; excellent for learning AI-supported problem decomposition, refactoring, testing, and UI logic while keeping students in the loop. | Install Copilot in VS Code or JetBrains, enable chat, and sign in with a GitHub account. Educational subscriptions or trials are typically available. |
| **Replit** | Browser-based IDE | Very low setup friction; ideal for rapid prototyping, early UI iterations, and sharing playable versions of the game. Helpful for students new to local toolchains. | Create a Replit account and start a JavaScript, Python, or Java project. Use the built-in AI assistant for debugging and iterative development. |
| **Amazon Q Developer** | VS Code, JetBrains, AWS Cloud9 | Provides exposure to enterprise-style AI coding assistance and secure coding hints; useful secondary experience even though AWS is not central to the project. | Install the Amazon Q Developer extension and sign in with an AWS account. The free tier is sufficient for coursework. |
| **Zed** | Zed Editor (macOS, Linux) | Appeals to performance- and tooling-focused students; offers insight into modern editor design with emerging AI features. | Download Zed from the official site and enable AI features during setup. Best for students comfortable exploring newer tools. |
| **Tabnine** | VS Code, JetBrains, Eclipse, others | Solid AI autocomplete with an emphasis on privacy; useful where conversational AI is less important or restricted. | Install the Tabnine plugin for your IDE and start with the free tier. |
| **AntiGravity** | Experimental standalone IDE | Interesting for discussing future, intent-driven programming paradigms, but too immature for a full graded implementation. | Follow project documentation and research previews. Best used for demos or conceptual exploration. |
| **OpenAI Codex** | API-based (not an IDE) | Not well-suited as a primary learning tool; lacks direct IDE interaction and obscures the human-in-the-loop workflow. | Access via the OpenAI platform and API keys; mainly relevant for historical context or experimentation. |

## Assignment
1. Develop a [Solitaire Simulator](./Solitaire.md).
1. Produce an estimated winning percentage by playing many (1000+) games and computing the ratio of wins-to-games-played.
1. Produce a brief (2-page or so) report that describes:
    1. The AI-assistant(s) used to produce the code.
    1. Your experience using the tool(s) both positive and negative.
    1. Your winning percentage along with the details of how you computed it.

**Notes:**
- You may work on this assignment alone or in a group.
- If you work as a group, **every student** must have their own code, results, and report.
- The goal of the assignment is to become familiar with AI coding assistants for the purpose of producing your Explorations assignment demo.