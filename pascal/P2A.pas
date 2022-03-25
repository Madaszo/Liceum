uses crt;
var
        g,h,y,i:byte;
Begin
clrscr;
write('podaj wysoko˜† choinki:');
readln(h);
textcolor(14);
gotoxy(40,4);
write('*');
textbackground(2);
for y:= 5 to 4+h do
        begin
        gotoxy(35+y,y);
        for g:=1 to 2*y-9 do
                begin
                gotoxy(36+y-g,y);
                randomize;
                textcolor(3+random(15));
                write('*');
                delay(50);
                end;
        end;
textbackground(6);
textcolor(6);
for y:=y+1 to y+4 do
        begin
        gotoxy(39,y);
        for g:=1 to 3 do
                begin
                write('*');
                end;
        end;
readkey;
END.
