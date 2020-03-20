#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxOpenCv.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
  
  const int WIDTH = ofGetWidth();
  const int HEIGHT = ofGetHeight();
  
  ofImage img;
  ofVideoGrabber webCam;
  ofxCvColorImage colorImg;
  ofxCvGrayscaleImage grayImage;
  ofxCvHaarFinder finder;
  
  cv::Mat srcImg;
  cv::Mat processImg;
};
