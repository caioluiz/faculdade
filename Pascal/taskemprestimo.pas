program task_emprestimo;

VAR salario: INTEGER;
VAR emprestimo: REAL;
VAR prestacao: REAL;

CONST juros = 0.8;

BEGIN
  readln(salario);
  emprestimo := ((120*salario)/100);
  writeln(emprestimo);
  prestacao := ((emprestimo/10) *juros);
  write(prestacao);
END.
