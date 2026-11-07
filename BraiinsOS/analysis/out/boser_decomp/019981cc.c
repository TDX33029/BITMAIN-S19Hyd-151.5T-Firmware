// FUN_019981cc @ 019981cc size=152 calls_out=2 calls_in=2
// strings: 

void FUN_019981cc(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != 0) {
    return;
  }
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    iVar1 = param_1[1];
    piVar3 = (int *)(iVar1 + 8);
    do {
      if (piVar3[-2] == 0) {
        if (*piVar3 != 0) {
          thunk_FUN_01be4678(piVar3[-1]);
        }
        if (piVar3[2] != 0) {
          thunk_FUN_01be4678(piVar3[1]);
        }
      }
      piVar3 = piVar3 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    thunk_FUN_01be4678(iVar1);
  }
  if (param_1[4] == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1[3]);
  return;
}

