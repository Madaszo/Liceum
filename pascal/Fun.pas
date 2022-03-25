uses crt;
procedure Fun(z:char);
Begin
case z of
    'R':begin
        randomize;
        repeat
        textbackground(random(16));
        write(' ');
        until keypressed;
        end;
    'r':begin
        repeat;
        randomize;
        textbackground(random(16));
        write(' ');
        until keypressed;
        end;
    'L':begin
        repeat
        randomize;
        textbackground(random(16));
        clrscr;
        until keypressed;
        end;
    'l':begin
        repeat
        textbackground(random(16));
        clrscr;
        until keypressed;
        end;
    'z':begin
        repeat
        textbackground(random(16));
        gotoxy(random(79)+1,random(25)+1);
        write(' ');
        until keypressed;
        end;
    'Z':begin
        repeat
        randomize;
        textbackground(random(16));
        gotoxy(random(79)+1,random(25)+1);
        write(' ');
        until keypressed;
        end;
        end;
End;
procedure kaczuszka;
var
        i:byte;
Begin
gotoxy(11,1);
textbackground(yellow);
for i:=1 to 4 do
        write(' ');
gotoxy(9,2);
for i:=1 to 8 do
        write(' ');
gotoxy(3,3);
textbackground(4);
for i:=1 to 6 do
        write(' ');
textbackground(yellow);
for i:=1 to 4 do
        write(' ');
textbackground(white);
for i:=1 to 2 do
        write (' ');
textbackground(yellow);
write(' ');
write(' ');
gotoxy(1,4);
textbackground(red);
for i:=1 to 8 do
        write(' ');
textbackground(yellow);
for i:=1 to 8 do
        write(' ');
gotoxy(9,5);
for i:=1 to 8 do
        write(' ');
for i:=1 to 16 do
        begin
        textbackground(i);
        write('    ');
        end;
End;
BEGIN
clrscr;
Fun(readkey);
kaczuszka;
writeln;
write('qäiec');
delay(1000);
readkey;
END.
