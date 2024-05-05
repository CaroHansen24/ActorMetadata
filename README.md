# Unreal Engine Actor Metadata project

It is a system  that saves metadata about Actors during a game in Unreal.
* We should be able to get and set metadata about any Actor in the game via Blueprint or C++
* The metadata can be got or set while the game is running (not while editing) and is cleared when the game stops running.
* For this case, the metadata is:
  * A string with a player defined name for the Actor
  * A Boolean that is true if the player likes the Actor and false otherwise
* From C++ we would like to be able to get the last five actors the player liked (and associated metadata)
* We would also like to be able to get a list of all metadata from C++

