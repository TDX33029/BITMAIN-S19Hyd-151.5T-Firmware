// FUN_00b8ef44 @ 00b8ef44 size=284 calls_out=7 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_00b8ef44(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 local_28 [6];
  
  uVar5 = FUN_019d8cc4();
  if ((uVar5 & 0x100000000) != 0) {
    local_28[0] = 2;
    FUN_00b920f4(param_1 + 6,local_28);
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
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 - 0x40;
  DataMemoryBarrier(0xb);
  if (uVar2 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
  }
  if ((uVar2 & 0xffffffc0) != 0x40) {
    return;
  }
  piVar3 = (int *)param_1[6];
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[6],param_1[7]);
    }
  }
  FUN_00b815c8(param_1 + 10);
  FUN_014b1410(param_1 + 0x10);
  thunk_FUN_01be4678(param_1);
  return;
}

