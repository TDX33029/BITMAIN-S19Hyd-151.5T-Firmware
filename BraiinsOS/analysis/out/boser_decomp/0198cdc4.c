// FUN_0198cdc4 @ 0198cdc4 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_0198cdc4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar2 + 4);
    do {
      if (*piVar1 != 0) {
        thunk_FUN_01be4678(piVar1[-1]);
      }
      piVar1 = piVar1 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar2);
  return;
}

