
void setup () {
int displaywidth=1000;
int displayheight=900;
int numCircles=5;

  size(1000,900);
  background (255);
}
void draw () {
  if (mousePressed){
    drawTarget(mouseX,mouseY);
    
  }
}
  