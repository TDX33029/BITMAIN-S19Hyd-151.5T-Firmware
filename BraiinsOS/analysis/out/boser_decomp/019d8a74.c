// FUN_019d8a74 @ 019d8a74 size=200 calls_out=1 calls_in=27
// strings: assertion failed: next.is_notified() | assertion failed: self.ref_count() > 0

uint FUN_019d8a74(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  DataMemoryBarrier(0xb);
  do {
    if ((uVar1 & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: next.is_notified()",0x24,&DAT_01d28d64);
    }
    if ((uVar1 & 3) == 0) {
      uVar5 = (uVar1 & 0x3f) >> 5;
      uVar4 = uVar1 & 0xfffffff8 | 1;
    }
    else {
      if (uVar1 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: self.ref_count() > 0",0x26,&DAT_01d28df4);
      }
      uVar4 = uVar1 - 0x40;
      uVar5 = 2;
      if (uVar4 < 0x40) {
        uVar5 = 3;
      }
    }
    uVar2 = *param_1;
    if (uVar2 == uVar1) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(param_1);
        if (bVar3) {
          *param_1 = uVar4;
          bVar3 = true;
          uVar1 = uVar2;
          goto LAB_019d8af4;
        }
        uVar2 = *param_1;
      } while (uVar2 == uVar1);
    }
    bVar3 = false;
    ClearExclusiveLocal();
    uVar1 = uVar2;
LAB_019d8af4:
    DataMemoryBarrier(0xb);
    if (bVar3) {
      return uVar5;
    }
  } while( true );
}

