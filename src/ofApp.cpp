#include "ofApp.h"
#include "ofxCv.h"

//--------------------------------------------------------------
void ofApp::setup(){
  webCam.setDeviceID(0);
  webCam.setVerbose(true);
  webCam.initGrabber(WIDTH, HEIGHT);
  
//  colorImg.allocate(WIDTH, HEIGHT);
//  grayImage.allocate(WIDTH, HEIGHT);
  
  finder.setup("haarcascade_frontalface_default.xml");
}

//--------------------------------------------------------------
void ofApp::update(){
  webCam.update();
//  colorImg.setFromPixels(webCam.getPixels().getData(), WIDTH, HEIGHT);
  srcImg = ofxCv::toCv(webCam).clone();
  processImg = srcImg.clone();
//  grayImage = colorImg;
  
  finder.findHaarObjects(img);
}

//--------------------------------------------------------------
void ofApp::draw(){
  if (webCam.isFrameNew()) {
    ofxCv::drawMat(srcImg, 0, 0);

//    for(int i = 0; i < finder.blobs.size(); i++) {
//
//        // 検出した顔を黄色の四角で覆う
//        ofNoFill();
//        ofSetLineWidth(5);
//        ofSetColor(255,255,0);
//
//        // 正面顔を検知認識
//        ofRectangle faceBox = finder.blobs[i].boundingRect;
//
//        // 四角形を描画
//        ofDrawRectangle(faceBox.x, faceBox.y, faceBox.width, faceBox.height);
//    }
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
  
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
  
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
  
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
  
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
  
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
  
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
  
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
  
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
  
}
