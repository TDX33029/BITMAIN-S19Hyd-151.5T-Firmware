// FUN_015bf7c4 @ 015bf7c4 size=108 calls_out=2 calls_in=2
// strings: 

ulonglong FUN_015bf7c4(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  do {
    if (DAT_018dd998 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680();
      goto LAB_015bf7f8;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18dd998);
  } while (!bVar1);
  DAT_018dd998 = 1;
  DataMemoryBarrier(0xb);
LAB_015bf7f8:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    return (ulonglong)DAT_018dd99c << 0x20;
  }
  uVar2 = FUN_015bf3f8(0);
  return (ulonglong)CONCAT14(DAT_018dd99c,uVar2) ^ 1;
}

