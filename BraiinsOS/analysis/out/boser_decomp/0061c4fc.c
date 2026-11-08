// FUN_0061c4fc @ 0061c4fc size=184 calls_out=4 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_0061c4fc(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 local_30 [8];
  
  uVar3 = FUN_019d8cc4();
  if ((uVar3 & 0x100000000) != 0) {
    local_30[0] = 2;
    FUN_00f31dec(param_1 + 6,local_30);
  }
  if ((uVar3 & 1) != 0) {
    if (param_1[0x14] != 0) {
      (**(code **)(param_1[0x14] + 0xc))(param_1[0x15]);
    }
    param_1[0x14] = 0;
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
    FUN_00d31124(param_1);
    return;
  }
  return;
}

