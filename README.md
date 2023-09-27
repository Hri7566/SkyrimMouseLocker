# Skyrim Mouse Locker

I finally got fed up with the stupid Skyrim multi-monitor cursor bug so I did the most simple thing I could do to mitigate it.

Skyrim doesn't use the Windows cursor basically at all. It hides the cursor and uses its own in the menus. That's fine and all, but they forgot to lock the mouse somewhere on the screen so you don't click stuff off the screen. This has caused many annoying sessions where I want to read things on another monitor and play Skyrim at the same time, and I get to an NPC's inventory and attempt to scroll through it, only to watch my browser scroll right into the YouTube comments.

## Building

This project was made with Visual C++, which I am not entirely familiar with. I used Visual Studio 2022 to build and debug, so use that to build the solution. Sorry Linux friends.

## Usage

Upon opening the program, a console window should open. Pressing <kbd><</kbd> (<kbd>Shift</kbd>+<kbd>,</kbd>) will toggle the cursor lock. The console window **must** be in the foreground for the toggle to work. (sorry alt+tab wiki checkers)
