uses crt;
var
        g,y:byte;
Begin
clrscr;
for y:= 1 to 6 do
        begin
        for g:=1 to y do
                begin
                write('*');
                delay(50);
                end;
        writeln;
        end;
for y:= 5 downto 1 do
        begin
        for g:=1 to y do
                begin
                write('*');
                delay(50);
                end;
        writeln;
        end;
readkey;
END.
