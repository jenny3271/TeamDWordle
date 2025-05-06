# TeamDWordle
By: Jennifer Alvarez and Kate Anglin

# Provide a short summary of the project.
The Wordle project starts by asking the player to enter a username and choose whether repeated letters are allowed. Once a valid name is provided, the game selects a random word from the dictionary.txt file and gives the player up to six attempts to guess it. If the player correctly identifies the word they win, otherwise, the correct answer is revealed. After each round whether the user wins or loses, a statistics screen is displayed showing total games played, win percentage, current streak, maximum streak, and guess distribution. From there, the player can select to play again or exit the application.

# Describe how to turn on/off the conditional compilation for displaying the guess word to the console.
To turn on/off the display of the current answer (guess word) in the console for debugging:
1. Open the WordleManager.h file
2. Uncomment or add the following line before any #include or code using it:
        #define SHOW_ANSWER

# Describe what data structure you used to store the dictionary and why you chose that particular data structure.
We chose to use the Trie structure. A trie (prefix tree) is a specialized tree used to store strings, particularly useful when dealing with a large set of words like those in a dictionary. 
1. Efficient Word Lookup Time complexity for lookup is O(L) where L is the length of the word.
    Unlike hash tables or balanced trees, performance does not depend on the number of words but on word length.
2. Prefix Matching
    Tries naturally support prefix-based operations, like autocomplete or spell-check suggestions.
    For example, finding all words starting with "pre" is easy and fast.
3. Memory Sharing Through Common Prefixes
    Words with the same prefix share nodes, reducing redundancy.
    Example: "cat", "can", and "cap" share the "ca" path, making the structure more space-efficient than storing each word independently.
4. Scalable and Predictable
    Tries scale well with large datasets, such as thousands or millions of words.
    The performance remains consistent and predictable, which is valuable in interactive applications like GUI search boxes or text validators.

# Provide a screen capture of your game.
![userprompt](https://github.com/user-attachments/assets/62fce835-72df-4093-ab08-f0c1ba483758)
![wordle](https://github.com/user-attachments/assets/471b5f56-411f-4575-ad99-93e7312a0db5)
![statistics](https://github.com/user-attachments/assets/91166960-4a39-4e79-9bae-41c6e6d5ff3d)
![wordlegame](https://github.com/user-attachments/assets/1524f3ba-486c-442d-8042-9492de205b9e)

# Provide a description of any WOW factor items.
The wow factor for our wordle game is the game’s ability to save/load. When a user exits out of the game, the username is saved along with that users cumulative statistics. When that user returns, and enters their previously used username the game restores their session and statistics.
