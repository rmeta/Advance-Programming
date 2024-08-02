## Concert Ticket Management

Write a program to manage concert tickets. Each ticket consists of a person's name and a seat number. The person's name is a string of lowercase English letters, and the seat number is an integer between 1 and 1000.

The program should have the following capabilities:

1. **Reserve a ticket**
2. **Cancel a ticket**
3. **Check if a specific person has a ticket**
4. **Check if a seat is reserved**

### Input

The input consists of a series of commands:

- **`reserve`**: This command takes two parameters, a name and a seat number (in any order), and should issue a ticket with that name and seat number and store it in a list. Print `done` if successful. If the seat is already taken, print `seat not available`. If the person already has a ticket and the new seat is available, cancel the previous ticket and issue a new one.

- **`cancel`**: This command takes one parameter, which can be either a seat number or a person’s name. If a seat number is given, cancel the ticket for that seat and free the seat. If a name is given, cancel the ticket for that person and free the seat. Print `done` if the seat is freed. Print `ticket not found` if the ticket for the seat number or name does not exist.

- **`check`**: This command can also take one parameter, which can be either a seat number or a person’s name. If a ticket exists for the given person or seat, print `yes`. Otherwise, print `no`.

Implement the ticket concept as a class. Store the tickets in a vector. Use `erase` to remove a ticket and `push_back` to add a ticket.

Assume all people have unique names of up to 20 characters.

### Input Format

- The first line contains an integer representing the number of commands.
- Each subsequent line contains a command with the specified format.

### Output Format

- Print the results of the commands according to the specified rules.
- Finally, print the seat number and name of each ticket in the order they were reserved.

### Example

**Input:**

