// FUN_0061ac58 @ 0061ac58 size=184 calls_out=4 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_0061ac58(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 local_38 [10];
  
  uVar3 = FUN_019d8cc4();
  if ((uVar3 & 0x100000000) != 0) {
    local_38[0] = 2;
    FUN_00f328b0(param_1 + 6,local_38);
  }
  if ((uVar3 & 1) != 0) {
    if (param_1[0x16] != 0) {
      (**(code **)(param_1[0x16] + 0xc))(param_1[0x17]);
    }
    param_1[0x16] = 0;
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
    FUN_00d36bb0(param_1);
    return;
  }
  return;
}

