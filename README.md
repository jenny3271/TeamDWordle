# TeamDWordle
By: Jennifer Alvarez and Kate Anglin

# Provide a short summary of the project.

# Describe how to turn on/of the conditional compilation for displaying the guess word to the console.

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

# Provide a description of any WOW factor items.
