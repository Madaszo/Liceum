uses crt;
var
        f,t:integer;
        l:byte;

procedure Graj(f,t:integer;l:byte);
        var
                i:byte;
        Begin
        for i:=1 to l do
                begin
                sound(f);
                delay(t);
                nosound;
                delay(50);
                end;
        End;
Begin
clrscr;
write('podaj cz©stotliwo˜†: ');
readln(f);
write('podaj czas: ');
readln(t);
write('poda ilo˜†: ');
readln(l);
Graj(f,t,l);
readkey;
END.
