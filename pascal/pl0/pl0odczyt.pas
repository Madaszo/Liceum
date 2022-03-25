uses crt;
type
        typ_osoba= record
                imie:string[20];
                nazwisko:string[50];
                nr_buta:byte;
                end;
                typ_klasa=array[1..30] of typ_osoba;
var
        pl:file of typ_klasa;
        klasa:typ_klasa;
        i:byte;
BEGIN
clrscr;
assign(pl,'dane.bin');
reset(pl);
read(pl,klasa);
writeln;
writeln;
textcolor(red);
textbackground(7);
for i:=1 to 3 do
        begin
        writeln('Oto dane ',i,' osoby:');
        writeln('imie: ',klasa[i].imie);
        writeln('nazwisko: ',klasa[i].nazwisko);
        writeln('nr buta: ',klasa[i].nr_buta);
        writeln;
        end;
readkey;
END.
