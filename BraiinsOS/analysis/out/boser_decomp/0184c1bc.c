// FUN_0184c1bc @ 0184c1bc size=296 calls_out=9 calls_in=1
// strings: 

void FUN_0184c1bc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *unaff_r4;
  
  FUN_01139b38(param_1[0x4f],param_1[0x50]);
  FUN_012840cc(param_1 + 0x52);
  FUN_0184c6cc(param_1 + 0x42);
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_0142e6dc(param_1);
  }
  if (param_1[0x39] != 0) {
    FUN_01a69838();
  }
  if (((*(byte *)(param_1 + 0x34) != 0xb) && (9 < *(byte *)(param_1 + 0x34))) &&
     (param_1[0x36] != 0)) {
    thunk_FUN_01be4678(param_1[0x35]);
  }
  if (param_1[0x2e] != 0) {
    FUN_01139b38(param_1[0x2e],param_1[0x2f]);
  }
  piVar2 = (int *)param_1[0x30];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x30],param_1[0x31]);
    }
  }
  piVar2 = (int *)param_1[0x32];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x32],param_1[0x33]);
    }
  }
  FUN_0172f038(param_1 + 0x10);
  FUN_01820710(param_1 + 0x24);
  if (param_1[0x22] != 0) {
    unaff_r4 = (int *)param_1[0x23];
  }
  if (param_1[0x22] == 0 || (int *)param_1[0x23] == (int *)0x0) {
    return;
  }
  FUN_014295d0(unaff_r4 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *unaff_r4;
    bVar1 = (bool)hasExclusiveAccess(unaff_r4);
  } while (!bVar1);
  *unaff_r4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01420f44(unaff_r4);
    return;
  }
  return;
}

