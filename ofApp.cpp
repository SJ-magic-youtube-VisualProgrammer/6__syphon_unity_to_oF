/************************************************************
************************************************************/
#include "ofApp.h"

/************************************************************
************************************************************/

/******************************
******************************/
void ofApp::setup(){
	/********************
	********************/
	ofSetBackgroundAuto(true);
	
	ofSetWindowTitle("Syphon client");
	ofSetVerticalSync(true);
	ofSetFrameRate(30);
	ofSetWindowShape(1920, 1080);
	ofSetEscapeQuitsApp(false);
	
	ofEnableAlphaBlending();
	ofEnableBlendMode(OF_BLENDMODE_ALPHA);
	// ofEnableBlendMode(OF_BLENDMODE_ADD);
	// ofEnableSmoothing();
	
	/********************
	SyphonClientのsizeは、最初にsyphon dataが飛んできた瞬間に決定。
	その後、Server側(unity)の解像度を変更しても、SyphonClientのsizeは変わらず、最初に決定したsizeの画面に伸縮させて全体表示を続ける。
	********************/
	SyphonClient_from_Unity.setup();
	// SyphonClient_from_Unity.set("Main Camera","Unity"); // void set(string _serverName, string _appName);
	SyphonClient_from_Unity.set("Main Camera","SyphonServer"); // void set(string _serverName, string _appName);
}

/******************************
******************************/
void ofApp::update(){

}

/******************************
******************************/
void ofApp::draw(){
	ofBackground(0);
	
	ofSetColor(255, 0, 0, 200);
	ofDrawRectangle(0, 0, 1280 + 1, 720 + 1);
	
	ofSetColor(255);
	SyphonClient_from_Unity.draw(0, 0);
	
	printf("(%4d, %4d)\r", (int)SyphonClient_from_Unity.getWidth(), (int)SyphonClient_from_Unity.getHeight());
	fflush(stdout);
}

/******************************
******************************/
void ofApp::keyPressed(int key){

}

/******************************
******************************/
void ofApp::keyReleased(int key){

}

/******************************
******************************/
void ofApp::mouseMoved(int x, int y ){

}

/******************************
******************************/
void ofApp::mouseDragged(int x, int y, int button){

}

/******************************
******************************/
void ofApp::mousePressed(int x, int y, int button){

}

/******************************
******************************/
void ofApp::mouseReleased(int x, int y, int button){

}

/******************************
******************************/
void ofApp::mouseEntered(int x, int y){

}

/******************************
******************************/
void ofApp::mouseExited(int x, int y){

}

/******************************
******************************/
void ofApp::windowResized(int w, int h){

}

/******************************
******************************/
void ofApp::gotMessage(ofMessage msg){

}

/******************************
******************************/
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
