// FUN_016c2920 @ 016c2920 size=88 calls_out=1 calls_in=3
// strings: 

void FUN_016c2920(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    return;
  }
  piVar2 = (int *)(param_1 + 8);
  do {
    iVar1 = piVar2[-2];
    if (((iVar1 == 4 || iVar1 == 2) || (iVar1 == 1)) && (*piVar2 != 0)) {
      thunk_FUN_01be4678(piVar2[-1]);
    }
    piVar2 = piVar2 + 5;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

