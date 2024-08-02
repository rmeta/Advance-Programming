# Message System

Consider a messaging application where there are entities such as users and messages. Your task is to design two classes: `User` and `Message`, with the following requirements:

## User Class

- A user is identified by their unique name.
- The `User` class should have methods to:
  - Add messages to the user.
  - Delete a message by its content.
  - Replace a message with a new one.
  - Print all messages in a formatted manner.

## Message Class

- The `Message` class should be a base class for different types of messages: `TextMessage`, `PhotoMessage`, `VoiceMessage`, and `StickerMessage`.
- Each derived class should implement the methods to:
  - Return the content of the message.
  - Print the message content.

## Message Types

- **TextMessage**: Contains text.
- **PhotoMessage**: Contains a URL to an image.
- **VoiceMessage**: Contains a URL to an audio file.
- **StickerMessage**: Contains a sticker ID.

## Usage

You should create several users and add messages to them using the methods provided. Implement methods to delete, replace, and print messages. For example:

```java
// Sample code
User[] users = {
    new User("Abbas"),
    new User("Amirhossein"),
    new User("Shahrzad"),
    new User("Rojin")
};

TextMessage textMessage = new TextMessage("Hello World");
PhotoMessage photoMessage = new PhotoMessage("http://www.goog.gl/cUGbDk");
VoiceMessage voiceMessage = new VoiceMessage("http://www.goog.gl/bUdvDg");
StickerMessage stickerMessage = new StickerMessage("32483434");

users[0].addMessage(textMessage);
users[0].addMessage(photoMessage);
users[0].addMessage(voiceMessage);
users[0].addMessage(stickerMessage);

users[0].printMessages();

users[0].replaceMessage("Hello World", new PhotoMessage("http://www.goog.gl/newUrl"));

users[0].deleteMessage("http://www.goog.gl/newUrl");

users[0].printMessages();
