Qt-EU4-Launcher
===============
![Main Window](https://github.com/alfonsojon/Qt-EU4-Launcher/blob/master/screenshot.png?raw=true)

This is an open source launcher for Europa Universalis 4 based on QT4. This was forked from [westonmyer's Qt-CK2-Launcher](https://github.com/westonmyers/Qt-CK2-Launcher).

[Thread](http://forum.paradoxplaza.com/forum/showthread.php?660805-Qt-Alternative-CK2-Launcher) on Paradox Plaza

## To Compile on Ubuntu 12.04:
```no-highlight
sudo apt-get install git build-essential libqt4-dev qt4-qmake libqtwebkit-dev
git clone https://github.com/alfonsojon/Qt-EU4-Launcher.git
cd Qt-EU4-Launcher
qmake-qt4
make
```

## To use launcher with Steam:
Note- Launcher is fully compitable with Steam overlay and DLC activation.

1. Run Steam and open "Library" window.
2. Right click on EU4 in game list.
3. Click on "Properties"
4. Click "Set launch options..." button
5. Input "qteu4launcher %command%" and push "Ok"
6. Now launcher will work like the Windows version.
