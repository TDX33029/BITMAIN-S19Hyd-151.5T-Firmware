// FUN_012d0820 @ 012d0820 size=96 calls_out=1 calls_in=2
// strings: 

void FUN_012d0820(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  piVar2 = param_1 + 0x2b;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_019e03e8(param_1 + 0x26);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  FUN_0134c054(param_1[0x23],param_1[0x24],4,8,unaff_r4,unaff_lr);
  if (param_1 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar2 = param_1 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

