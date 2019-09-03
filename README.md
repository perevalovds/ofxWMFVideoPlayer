ofxWMFVideoPlayer
========================

This addon is an accelerated video player using the Windows Media Foundation API,
oF 0.10.1, Windows 10, tested with NVidia and Intel video cards.
 
 
 
It was developed by Philippe Laulheret for [Second Story] (http://www.secondstory.com) and is released under MIT licensing. See license.md for more details. 
For a more comprehensive/technical description of the work, please refer to the file TechnicalDescription.md

## Prerequisites 

This addons uses the WGL_NV_DX_interop extension, in order to use it you need to upgrade the GLEW library of your openFrameworks folder :
Prior to compiling this example you need to replace the GLEW headers and libraries from your of\libs foler by the one present in the lib folder of this repository.

On top of that this addon is built against the Direct X SDK of June 2010. You'll need to install it to have the headers required for compiling the example. At the time of writing, you can download it on the [Microsoft website](http://www.microsoft.com/en-us/download/details.aspx?id=6812)


## Using the addon

Addon is linked normally using Project Generator.
When working with some other addons, it's additionally required to define unicode straightforward for successfull build:
1) Add to C/C++ - Preprocessor Definitions: UNICODE;_UNICODE (it's included into addon_config.mk file, so must set automatically)
2) Please sure that General - Character set is "Use Unicode Character Set".

## About the example

Example plays MP4 video from data/bin after start. You can replace it with your video to check.


## Compatibility 

The texture sharing we are using is based upon an NVIDIA extension but AMD/ATI cards claims they support it was well, even though sometimes it gets more finicky.
Feedback on working/not working cards and drivers are more than welcomed.

## Troubleshooting

In some instance we have noticed that the video appears "washed out". If you are noticing this it is due to a NVIDIA card setting that sets colors to a limited range of 16-235. You can fix this by doing the following:

* Open the nVidia Control Panel
* Adjust Video Color Settings
* Make Color Adjustments
* With nVidia Settings
* Select Advanced Tab
* Set Dynamic Range to: Full (0-255)
