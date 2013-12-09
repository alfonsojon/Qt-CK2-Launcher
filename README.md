Qt-CK2-Launcher
===============
![Main Window](https://github.com/westonmyers/Qt-CK2-Launcher/blob/master/screenshot.png?raw=true)

This is an open source launcher for Crusader Kings 2 based on QT4.

[Thread](http://forum.paradoxplaza.com/forum/showthread.php?660805-Qt-Alternative-CK2-Launcher) on Paradox Plaza

##To Install
You can get pre-compiled deb/rpm packages from the [openSUSE Build Service](http://software.opensuse.org/download.html?project=home:sxxxx&package=qtck2launcher) and detailed information [here](https://build.opensuse.org/package/show?package=qtck2launcher&project=home%3Asxxxx).

Both x86 and x86_64 builds are available for the following distributions:
* Ubuntu 12.10 "Quantal", 12.04 "Precise", 11.10 "Oneiric", 11.04 "Natty", 10.04 "Lucid"
* Debian 6.0 "Squeeze"
* Fedora: 18 "Spherical Cow", 17 "Beefy Miracle", 16 "Verne"
* Mandriva: 2011, 2010.1, 2010
* openSUSE: Factory, 12.2, 12.1, 11.4
* SLE 11: SP2, SP1


I can't test all of these builds. If something is not working, let me know.


## To Compile on Ubuntu 12.04:
```no-highlight
sudo apt-get install git build-essential libqt4-dev qt4-qmake libqtwebkit-dev
git clone https://github.com/westonmyers/Qt-CK2-Launcher.git
cd Qt-CK2-Launcher
qmake
make
```

## To use launcher with Steam:
Note- Launcher is fully compitable with Steam overlay and DLC activation.

1. Run Steam and open "Library" window.
2. Right click on CK2 in game list.
3. Click on "Properties"
4. Click "Set launch options..." button
5. Input "qtck2launcher %command%" and push "Ok"
6. Now launcher will work like the Windows version.
