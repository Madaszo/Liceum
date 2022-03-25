uses crt;
var
        l:byte;
        pl:file of byte;
BEGIN
clrscr;
assign(pl,'dane.bin');
rewrite(pl);
for l:=65 to 66 do
        write(pl,l);
close(pl);
write('zapisano');
readkey;
END.

