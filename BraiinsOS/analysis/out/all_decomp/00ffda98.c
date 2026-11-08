// FUN_00ffda98 @ 00ffda98 size=68 calls_out=2 calls_in=3
// strings: 

void FUN_00ffda98(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_00ffda98(piVar2);
    if (*piVar2 != 0) {
      thunk_FUN_016d3fb4(piVar2[1]);
    }
    piVar2 = piVar2 + 9;
  }
  return;
}

