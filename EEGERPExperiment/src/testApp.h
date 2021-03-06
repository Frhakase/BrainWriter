#pragma once

#include "ofMain.h"
//#include "ofxOsc.h"
#include "ofxOpenBCIOSC.h"
// listen on port 12345
#define PORT 5000


class testApp : public ofBaseApp {
	public:

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofTrueTypeFont font;

        ofxOpenBCIOSC ofxbci;
    
		int current_msg_string;


		int mouseX, mouseY;
		string mouseButtonState;
        ofSoundPlayer leftSource;
        ofSoundPlayer rightSource;
    
        double rightSource_lastPlayed;
        double leftSource_lastPlayed;
    
        int experimentMode;
        double experimentMode_lastChanged;
        ofstream logFile;
    
        int rOnsetFlag;
        int lOnsetFlag;
    
        int rSoundCount;
        int lSoundCount;
};

