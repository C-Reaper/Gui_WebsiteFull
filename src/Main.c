#include "/home/codeleaded/System/Static/Library/Dom.h"
#include "/home/codeleaded/System/Static/Library/WindowEngine.h"

Dom dom;

void Setup(AlxWindow* w){
    dom = Dom_New("./code/Main.ll","./bin");
}
void Update(AlxWindow* w){
    Dom_Update(&dom,window.Strokes,GetMouse(),GetMouseBefore());

	Clear(BLACK);

	Dom_Render(WINDOW_STD_ARGS,&dom);
}
void Delete(AlxWindow* w){
    Dom_Free(&dom);
}

int main(){
    if(Create("Website Full Dom",1920,1080,1,1,Setup,Update,Delete))
        Start();
    return 0;
}