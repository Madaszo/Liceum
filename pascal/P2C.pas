uses crt;
var
       h,l,x,y:byte;
Begin
clrscr;
write('wpisz x:');
readln(l);
write('wpisz y:');
readln(h);
clrscr;
for x:= l+10 downto 6 do
        begin
        for y:=h+6  downto 3 do
                begin
                gotoxy(x,y);
                write('*');
                delay(50);
                end;
        end;
readkey;
END.
