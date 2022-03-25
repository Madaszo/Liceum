uses crt;
var
        l,i:integer;
        pl:file of integer;
BEGIN
clrscr;
assign(pl,'dane.bin');
reset(pl);
while not eof(pl) do
        begin
        read(pl,l);
        writeln(l);
        end;
close(pl);
write('odczytano');
readkey;
END.

