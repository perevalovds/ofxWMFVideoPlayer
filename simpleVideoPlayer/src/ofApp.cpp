#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//We set higher frame rate to see all frames of 30-fps video
	//because current approach not sync with our screen updates
	ofSetFrameRate(55);	
	
	video.loadMovie("video-ofxShadertoy.mp4");
	video.setLoop(true);
	video.play();

	
}

//--------------------------------------------------------------
void ofApp::update(){
	video.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
	video.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch(key)
	{

		case '1':	
			{
				video.loadMovie("test.mp4");
				video.play();
				break;
			}
		case '2':	
			{
				video.loadMovie("test2.mp4");
				video.play();
				break;
			}
		
	}

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
