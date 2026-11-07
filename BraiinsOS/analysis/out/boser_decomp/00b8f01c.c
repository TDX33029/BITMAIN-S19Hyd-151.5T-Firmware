// FUN_00b8f01c @ 00b8f01c size=184 calls_out=3 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_00b8f01c(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined4 local_28 [6];
  
  uVar5 = FUN_019d8cc4();
  if ((uVar5 & 0x100000000) != 0) {
    local_28[0] = 2;
    FUN_00b92048(param_1 + 6,local_28);
  }
  if ((uVar5 & 1) != 0) {
    if (param_1[0x12] != 0) {
      (**(code **)(param_1[0x12] + 0xc))(param_1[0x13]);
    }
    param_1[0x12] = 0;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar4 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar4);
  *param_1 = uVar2 - 0x40;
  DataMemoryBarrier(0xb);
  if (uVar2 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
  }
  if ((uVar2 & 0xffffffc0) != 0x40) {
    return;
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar4 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar4);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[6],param_1[7]);
    }
  }
  if (param_1[10] == 1) {
    bVar4 = param_1[0xc] != 0 || param_1[0xd] != 0;
    uVar2 = 0;
    if (bVar4) {
      uVar2 = param_1[0xe];
    }
    if (bVar4 && uVar2 != 0) {
      FUN_01443048(uVar2,param_1[0xf]);
    }
  }
  FUN_014b1410(param_1 + 0x10);
  thunk_FUN_01be4678(param_1);
  return;
}

