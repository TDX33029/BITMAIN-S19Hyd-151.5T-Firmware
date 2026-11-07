// FUN_019d8c50 @ 019d8c50 size=100 calls_out=1 calls_in=202
// strings: assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0 | assertion failed: prev.is_complete()

void FUN_019d8c50(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 & 0xffffffef;
  DataMemoryBarrier(0xb);
  if ((uVar2 & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: prev.is_complete()",0x24,&DAT_01d28da4);
  }
  if ((uVar2 & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0"
                 ,0x2a,&DAT_01d28db4);
  }
  return;
}

