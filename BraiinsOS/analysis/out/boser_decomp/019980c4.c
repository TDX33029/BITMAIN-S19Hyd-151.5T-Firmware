// FUN_019980c4 @ 019980c4 size=128 calls_out=2 calls_in=0
// strings: 

void FUN_019980c4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar2 + 8);
    do {
      if (piVar1[-2] == 0) {
        if (*piVar1 != 0) {
          thunk_FUN_01be4678(piVar1[-1]);
        }
        if (piVar1[2] != 0) {
          thunk_FUN_01be4678(piVar1[1]);
        }
      }
      piVar1 = piVar1 + 10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar2);
  return;
}

