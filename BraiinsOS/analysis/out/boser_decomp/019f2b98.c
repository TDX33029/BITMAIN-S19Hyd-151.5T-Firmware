// FUN_019f2b98 @ 019f2b98 size=184 calls_out=4 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_019f2b98(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 local_28 [6];
  
  uVar3 = FUN_019d8cc4();
  if ((uVar3 & 0x100000000) != 0) {
    local_28[0] = 2;
    FUN_019fa95c(param_1 + 6,local_28);
  }
  if ((uVar3 & 1) != 0) {
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
  if ((uVar2 & 0xffffffc0) == 0x40) {
    FUN_019d7abc(param_1);
    return;
  }
  return;
}

