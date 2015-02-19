# drawSynth
# Anto+Creo
drawPolygons + synth


This is a prototype for an audiovisual interface.
It is based on drawpolygons and it uses Maximilian addon https://github.com/micknoise/Maximilian to generate sounds.

HOW to USE IT
step 1 - either select a color from the color panel at the bottom right corner or just start clicking on the stage. (default color will be white);
step 2 - the more dots you create the more you modify the sound.
step 3 - start drawing shapes and modify the sound by dragging the dots on the screen
step 4 - just play with it.  Combination of keybord commands can create nice effects.

each parameter you change will affect the sound.

KEYBOARD COMMAND AND OPTIONS (all smallcaps)

SPACEBAR - fills the shape with the selected color

c - makes the closed shape curved

k - random pattern

r - random color

z - toggle easycam (standard commands for easycam)

a - toggle ofSetBackgroundAuto (to create trails etc...)

b - delete last dot

BACKSPACE - delete the whole shape

f - toggle fullscreen

INSTALLATION
Some people had problem installing MAximilian addon.
Best way I think is creating a new project with project generator and adding the following addons.

ofxOsc

ofxXmlSettings

ofxMaxim

The program is set up so to send OSC messages and it can be easily customised for that.
The dots positions along with the colour of the shape are stored in the position.xml file in the data folder.
THat could be used for further purposes.

NOTES
The program is a very simple prototype mostly made to improve my skills in OF.
There are massive margin of improvements and there are many bugs but so far it can be used for some fun.

BUGS
There is currently a bug, the cursor may not appear initially. If that happens, please try to move the cursor out of the application window, and it will reappear permanently then. This bug should be solved in the next version.
the color picker at the right bottom corner works well just the first time. When you select a new color it seems that
the whole colour overlays the picker itself. I couldn't find a solution. I tried using a Fbo but with no results.
Drawing in 3d while using Easycam is basically impossible at the moment.
I am not yet able to remap the 3d position of the mouse.
The click to draw new dots is activated anyway while in 3d mode but it is not very usable. Use your imagination!:)

CONTACTS
feel free to add, remove, edit, improve, destroy, munch, scratch the code as much as you like it.
Please let me know if you need help, or if you find solutions to the bugs or any eventual improvement.





