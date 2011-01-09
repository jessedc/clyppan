# Not longer updated

This version of Clyppan is no longer updated or mainted. Please visit the [Mac App Store][] to find the latest version of Clyppan.

# About

Clyppan is a clipboard manager for Mac OS X that's always at your fingertips.

![screenshot!](http://www.omh.cc/media/images/Picture_1_post.png)

# Installation

## Requirements

To build Clyppan you need Xcode 3.2 and Snow Leopard 10.6.


## Building

Clone Clyppan and initialise the collections submodule:

    git clone git://github.com/omh/clyppan.git Clyppan
	cd Clyppan
    git submodule init
	git submodule update

Open Interface Builder, go to Preferences -> Plug-ins, click the + button, browse to `clyppan-git/clyppan/Frameworks/` and add the `ShortcutRecorder.ibplugin`.

To build open Clyppan/Clyppan.xcodeproj in Xcode and hit the build button.


# License

All code, except where otherwise noted, is licensed under the New BSD license. 

    Copyright (c) 2010, Ole Morten Halvorsen
    All rights reserved.
    
    Redistribution and use in source and binary forms, with or without modification, 
    are permitted provided that the following conditions are met:
    
    - Redistributions of source code must retain the above copyright notice, this list 
      of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright notice, this list
      of conditions and the following disclaimer in the documentation and/or other materials 
      provided with the distribution.
    - Neither the name of Clyppan nor the names of its contributors may be used to endorse or 
      promote products derived from this software without specific prior written permission.
    
    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
    LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
    THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
    OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
    THE POSSIBILITY OF SUCH DAMAGE.

[Mac App Store]: http://itunes.apple.com/gb/app/clyppan/id412728586?mt=12
