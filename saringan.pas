program sieve;
var
	Number,Checker,Subjek,i:integer;
procedure saring(a:integer)
var
	ar:array[1..100000000000] of integer;
begin
	for i:=1 to a do
		ar[i]:=1;
	ar[1]:=-1;
	for checker:= 1 to (a-1) do
		begin
			if (ar[checker]=1)then 
				for subjek:= (checker+1) to a do
						if (ar[subjek]=1) then
							if (subjek mod checker=0)then
							begin
								ar[subjek]:=-1;
							end;
		end;
	case ar[a] of
		1:saring:=true;
		-1:saring:=false;
	end;
end;
begin
	readln(number);
	if saring(number)then
		writeln('prime')
	else
		writeln('Not Prime');
end.
	