// FUN_019d8938 @ 019d8938 size=292 calls_out=1 calls_in=22
// strings: assertion failed: curr.is_running() | assertion failed: self.ref_count() > 0 | assertion failed: self.0 <= isize::MAX as usize

undefined4 FUN_019d8938(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_10;
  uint local_c;
  
  DataMemoryBarrier(0xb);
  uVar4 = *param_1;
  do {
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: curr.is_running()",0x23,&DAT_01d28d54);
    }
    if ((uVar4 & 0x20) == 0) {
      if ((uVar4 & 4) == 0) {
        if (uVar4 < 0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: self.ref_count() > 0",0x26,&DAT_01d28df4);
        }
        uVar3 = (uVar4 & 0xffffffde) - 0x40;
        uVar5 = 0;
        if (uVar3 < 0x40) {
          uVar5 = 2;
        }
      }
      else {
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: self.0 <= isize::MAX as usize",0x2f,&DAT_01d28e04);
        }
        uVar3 = (uVar4 & 0xffffffde) + 0x40;
        uVar5 = 1;
      }
      local_c = 1;
      puVar2 = &local_10;
    }
    else {
      uVar3 = 0;
      puVar2 = &local_c;
      uVar5 = 3;
    }
    *puVar2 = uVar3;
    if (local_c != 1) {
      return uVar5;
    }
    uVar3 = *param_1;
    if (uVar3 == uVar4) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = local_10;
          bVar1 = true;
          goto LAB_019d89f8;
        }
        uVar3 = *param_1;
      } while (uVar3 == uVar4);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_019d89f8:
    DataMemoryBarrier(0xb);
    uVar4 = uVar3;
    if (bVar1) {
      return uVar5;
    }
  } while( true );
}

