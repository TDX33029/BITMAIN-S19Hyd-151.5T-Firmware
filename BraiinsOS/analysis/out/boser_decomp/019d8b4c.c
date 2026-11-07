// FUN_019d8b4c @ 019d8b4c size=100 calls_out=1 calls_in=202
// strings: assertion failed: !prev.is_complete() | assertion failed: prev.is_running()

void FUN_019d8b4c(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 ^ 3;
  DataMemoryBarrier(0xb);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: prev.is_running()",0x23,&DAT_01d28d74);
  }
  if ((uVar2 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: !prev.is_complete()",0x25,&DAT_01d28d84);
  }
  return;
}

