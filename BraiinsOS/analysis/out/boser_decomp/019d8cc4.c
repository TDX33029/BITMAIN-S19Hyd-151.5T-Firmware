// FUN_019d8cc4 @ 019d8cc4 size=152 calls_out=1 calls_in=193
// strings: assertion failed: snapshot.is_join_interested()

ulonglong FUN_019d8cc4(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  DataMemoryBarrier(0xb);
  uVar4 = *param_1;
  do {
    uVar2 = uVar4;
    if ((uVar2 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: snapshot.is_join_interested()",0x2f,&DAT_01d28dd4);
    }
    uVar3 = 0xfffffff7;
    if ((uVar2 & 2) == 0) {
      uVar3 = 0xffffffe5;
    }
    uVar4 = *param_1;
    if (uVar4 == uVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar3 & uVar2;
          bVar1 = true;
          goto LAB_019d8d24;
        }
        uVar4 = *param_1;
      } while (uVar4 == uVar2);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_019d8d24:
    DataMemoryBarrier(0xb);
    if (bVar1) {
      return CONCAT44((uVar2 & 3) >> 1,(uVar3 & uVar2 & 0x10) >> 4) ^ 1;
    }
  } while( true );
}

