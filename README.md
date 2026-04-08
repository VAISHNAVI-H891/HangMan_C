🎯 Hangman Game in C

A modular and interactive Hangman Game developed in C, where the player guesses a hidden word within a limited number of attempts. The project uses multiple source files, header files, and structured functions to maintain clean and reusable code.

📌 Overview

This is a command-line based implementation of the classic Hangman game.
One user enters a secret word, and the player tries to guess it letter by letter. Each incorrect guess results in the progressive drawing of the hangman figure.

The project demonstrates:

Modular programming using header files
String manipulation and arrays
Game logic implementation
User input handling

⚙️ Key Features

🔤 Hidden word input system
🎯 Letter-by-letter guessing
❌ Tracks already guessed letters
📉 Limited attempts (6 chances)
🎨 ASCII-based hangman drawing
📊 Real-time word progress display
⚠️ Prevents repeated guesses
🧩 Clean modular structure using multiple functions

🏗️ Working Principle

1️⃣ Word Setup
User inputs a secret word
Screen is cleared for secrecy
Word is displayed as underscores (_ _ _)

2️⃣ Guessing Process
Player inputs one letter at a time
Program checks if the letter was already guessed
⚠️ If yes → shows warning
If correct:
✅ Letter is revealed in correct positions
If incorrect:
❌ Attempts decrease
🎨 Hangman figure updates

3️⃣ Game Result
🎉 Player wins if the word is guessed fully
💀 Player loses when all attempts reach zero
Final word is displayed

🧠 Concepts Used
Arrays and Strings
Functions and Modular Programming
Header Files (.h)
Loops and Conditionals
Dynamic Game Logic Handling
System Calls (system("clear"))

The word has 5 letters  
Word: _ _ _ _ _  

Guess a letter: a  
Correct guess!  

Guess a letter: z  
Wrong guess! Attempts left: 5  

📊 Advantages
Clear modular design
Easy to understand and extend
Beginner-friendly project
Demonstrates real-world coding practices in C

🎯 Learning Outcomes
Strong understanding of modular programming
Improved logic building
Experience with header files and multi-file projects
Better handling of user input and validation

🔮 Future Enhancements
🔑 Random word generation instead of manual input
🎮 Difficulty levels
🖼️ GUI-based version
🔊 Sound effects

👩‍💻 Author
Vaishnavi
