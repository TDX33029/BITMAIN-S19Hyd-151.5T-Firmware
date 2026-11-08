// FUN_0198d3c4 @ 0198d3c4 size=168 calls_out=2 calls_in=2
// strings: 

void FUN_0198d3c4(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (*param_1 != 0) {
    return;
  }
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    iVar1 = param_1[1];
    puVar4 = (undefined4 *)(iVar1 + 4);
    do {
      if (puVar4[-1] != 0) {
        thunk_FUN_01be4678(*puVar4);
      }
      puVar4 = puVar4 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    thunk_FUN_01be4678(iVar1);
  }
  iVar2 = param_1[4];
  if (iVar2 == 0) {
    return;
  }
  iVar1 = param_1[3];
  piVar3 = (int *)(iVar1 + 4);
  do {
    if (*piVar3 != 0) {
      thunk_FUN_01be4678(piVar3[-1]);
    }
    piVar3 = piVar3 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  thunk_FUN_01be4678(iVar1);
  return;
}

