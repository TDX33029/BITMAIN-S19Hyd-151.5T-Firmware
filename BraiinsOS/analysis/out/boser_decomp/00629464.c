// FUN_00629464 @ 00629464 size=216 calls_out=4 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_00629464(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  DataMemoryBarrier(0xb);
  uVar2 = *param_1;
  do {
    uVar1 = uVar2;
    uVar4 = uVar1;
    if ((uVar1 & 3) == 0) {
      uVar4 = uVar1 | 1;
    }
    uVar2 = *param_1;
    if (uVar2 == uVar1) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(param_1);
        if (bVar3) {
          *param_1 = uVar4 | 0x20;
          bVar3 = true;
          goto LAB_006294c0;
        }
        uVar2 = *param_1;
      } while (uVar2 == uVar1);
    }
    bVar3 = false;
    ClearExclusiveLocal();
LAB_006294c0:
    DataMemoryBarrier(0xb);
    if (bVar3) {
      if ((uVar1 & 3) == 0) {
        FUN_00d40da0(param_1 + 6);
        FUN_00d40e00(param_1);
        return;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *param_1;
        bVar3 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar3);
      *param_1 = uVar2 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar2 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
      }
      if ((uVar2 & 0xffffffc0) == 0x40) {
        FUN_00d388b0(param_1);
        return;
      }
      return;
    }
  } while( true );
}

