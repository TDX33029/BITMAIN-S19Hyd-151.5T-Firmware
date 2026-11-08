// FUN_017c70e0 @ 017c70e0 size=184 calls_out=3 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_017c70e0(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 local_80 [28];
  
  uVar5 = FUN_019d8cc4();
  if ((uVar5 & 0x100000000) != 0) {
    local_80[0] = 2;
    FUN_017c0794(param_1 + 6,local_80);
  }
  if ((uVar5 & 1) != 0) {
    if (param_1[0x28] != 0) {
      (**(code **)(param_1[0x28] + 0xc))(param_1[0x29]);
    }
    param_1[0x28] = 0;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar3 - 0x40;
  DataMemoryBarrier(0xb);
  if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
  }
  if ((uVar3 & 0xffffffc0) != 0x40) {
    return;
  }
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da640(param_1[6]);
  }
  FUN_017733d4(param_1 + 10);
  FUN_014b1410(param_1 + 0x26);
  thunk_FUN_01be4678(param_1);
  return;
}

