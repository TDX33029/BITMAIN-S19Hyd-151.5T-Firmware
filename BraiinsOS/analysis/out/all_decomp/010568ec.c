// FUN_010568ec @ 010568ec size=76 calls_out=1 calls_in=1
// strings: 

void FUN_010568ec(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  do {
    bVar3 = (short)piVar2[-1] != 0;
    iVar1 = 0;
    if (bVar3) {
      iVar1 = *piVar2;
    }
    if (bVar3 && iVar1 != 0) {
      thunk_FUN_016d3fb4(piVar2[1]);
    }
    piVar2 = piVar2 + 7;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

