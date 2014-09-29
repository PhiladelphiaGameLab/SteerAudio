SteerAudio
==========

SteerAudio is one of several iOS demo apps for the [Philadelphia Game Lab](http://www.philadelphiagamelab.org)'s open source 3D Audio library, [Sonic](https://github.com/philadelphiagamelab/Sonic). As with all Sonic apps, SteerAudio requires headphones.

SteerAudio uses gyroscope input to shape a sound. Specifically, as the user turns, the sound is adjusted accordingly to create the illusion that the sound is eminating from a particular point in the room.

**IMPORTANT**

Because SteerAudio contains the Sonic library as a git submodule, you'll need to use the `--recursive` flag when cloning, i.e.:

		$> git clone --recursive https://github.com/philadelphiagamelab/SonicDemo.git

Omitting the `--recursive` flag will clone the SteerAudio repo with an empty Sonic submodule.

#### More info

For a detailed description of the Sonic 3D-Audio project, as well as updates and other information, visit the [Sonic project webpage](sonic.philadelphiagamelab.org). For links to other Sonic demo apps, check out [the Sonic README](https://github.com/PhiladelphiaGameLab/Sonic/blob/master/README.md).