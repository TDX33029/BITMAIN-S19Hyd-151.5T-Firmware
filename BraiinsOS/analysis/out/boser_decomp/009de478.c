// FUN_009de478 @ 009de478 size=124 calls_out=4 calls_in=3
// strings: 

void FUN_009de478(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  
  puVar3 = (undefined1 *)*param_1;
  if (puVar3 == &DAT_80000004) {
    FUN_018248cc(param_1 + 1);
    return;
  }
  uVar2 = 4;
  if ((int)puVar3 < 0) {
    uVar2 = (uint)puVar3 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 3:
    return;
  case 1:
    FUN_01443048(param_1[1],param_1[2]);
    return;
  case 2:
    piVar5 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    break;
  default:
    FUN_019bb7e0(puVar3,param_1[1]);
    return;
  }
  do {
    iVar4 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[1],param_1[2]);
    return;
  }
  return;
}

