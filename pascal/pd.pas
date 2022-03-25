uses crt;
var
        s:string;
        i,l,k:byte;
//////////////////////////////////////////////
Function hexwar(z:char):byte;
var
        l,kod:byte;
Begin
val(z,l,kod);
if kod = 0 then
        hexwar:=l
else
        case z of
                'A':hexwar:=10;
                'B':hexwar:=11;
                'C':hexwar:=12;
                'D':hexwar:=13;
                'E':hexwar:=14;
                'F':hexwar:=15;
        end;
End;
//////////////////////////////////
Function potrek(l,w:byte):longint;
Begin
if w=0 then
        potrek:=1
else
        potrek:=potrek(l,w-1)*l;
End;
////////////////////////////////////////
Function hextodec(s:string):integer;
var
        i:byte;
        h:integer;
Begin
h:=0;
for i:=length(s) downto 1 do
        h:=h+potrek(16,length(s)-i)*hexwar(s[i]);
hextodec:=h;
End;
//////////////////////////////////
Function bintodec(s:string):integer;
var
        i,l,kod:byte;
        b:integer;
Begin
b:=0;
for i:=length(s) downto 1 do
        begin
        val(s[i],l,kod);
        b:=b+potrek(2,length(s)-i)*l;
        end;
bintodec:=b;
End;
//////////////////////////////////////////
Function dectobin(l:integer):string;
var
        i:integer;
        ls,s:string;
Begin
s:='';
if l<>0 then
        begin
        while l>0 do
                begin
                str(l mod 2,ls);
                s:=ls+s;
                l:=l div 2;
                end;
        dectobin:=s;
        end
else
        dectobin:='0';
End;
///////////////////////////////////////////////
Function divhex(l:byte):string;
var
        z:string;
Begin
if l<10 then
        begin
        str(l,z);
        divhex:=z;
        end
else
        case l of
        10:divhex:='A';
        11:divhex:='B';
        12:divhex:='C';
        13:divhex:='D';
        14:divhex:='E';
        15:divhex:='F';
        end;
End;
/////////////////////////////////////////////
Function dectohex(l:integer):string;
var
        i:integer;
        ls,s:string;
Begin
s:='';
while l>0 do
        begin
        s:=s+divhex(l mod 16);
        l:=l div 16;
        end;
ls:='';
for i:=length(s) downto 1 do
        ls:=ls+s[i];
dectohex:=ls;
End;
///////////////////////////////////////////////////
BEGIN
clrscr;
write('podaj liczbe: ');
readln(s);
write('podaj system: ');
readln(i);
write('podaj system na kt¢ry chcesz przeliczy†: ');
readln(l);
case i of
        16:if l = 2 then
                writeln(dectobin(hextodec(s)))
        else
                writeln(hextodec(s));
        10:begin
        val(s,i,k);
        if l = 2 then
                writeln(dectobin(i))
        else
                writeln(dectohex(i));
        end;
        2:if l = 16 then
                writeln(dectohex(bintodec(s)))
        else
                writeln(bintodec(s));
end;
readkey;
END.
