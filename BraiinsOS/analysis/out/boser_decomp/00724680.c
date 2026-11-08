// FUN_00724680 @ 00724680 size=172 calls_out=3 calls_in=1
// strings: 

void FUN_00724680(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 4);
  iVar5 = param_1[2];
  for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
    FUN_019bb7e0(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  if (iVar5 != 0) {
    thunk_FUN_01be4678(iVar2);
  }
  iVar4 = param_1[3];
  iVar2 = param_1[4];
  if (iVar2 == 0) {
    return;
  }
  piVar3 = (int *)(iVar4 + 4);
  do {
    if (*piVar3 != 0) {
      thunk_FUN_01be4678(piVar3[-1]);
    }
    piVar3 = piVar3 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  thunk_FUN_01be4678(iVar4);
  return;
}

