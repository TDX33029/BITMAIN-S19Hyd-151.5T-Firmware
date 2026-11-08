// FUN_008ee56c @ 008ee56c size=192 calls_out=5 calls_in=6
// strings: 

void FUN_008ee56c(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((undefined1 *)*param_1 == &DAT_80000005) {
    FUN_0084ec48(param_1 + 1);
    return;
  }
  puVar4 = (undefined1 *)*param_1;
  if (puVar4 == &DAT_80000004) {
    if (*(char *)(param_1 + 1) == '\x03') {
      puVar6 = (undefined4 *)param_1[2];
      FUN_01443048(*puVar6,puVar6[1]);
      thunk_FUN_01be4678(puVar6);
      return;
    }
    return;
  }
  uVar2 = 4;
  if ((int)puVar4 < 0) {
    uVar2 = (uint)puVar4 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 3:
    goto switchD_008f07e4_caseD_0;
  case 1:
    FUN_01443048(param_1[1],param_1[2]);
    return;
  case 2:
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[1],param_1[2]);
      return;
    }
switchD_008f07e4_caseD_0:
    return;
  default:
    FUN_019bb7e0(puVar4,param_1[1]);
    return;
  }
}

