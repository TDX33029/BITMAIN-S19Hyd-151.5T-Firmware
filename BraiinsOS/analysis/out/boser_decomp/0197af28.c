// FUN_0197af28 @ 0197af28 size=108 calls_out=2 calls_in=2
// strings: 

ulonglong FUN_0197af28(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  do {
    if (DAT_01d51b0c != 0) {
      ClearExclusiveLocal();
      FUN_0197ade4();
      goto LAB_0197af5c;
    }
    bVar1 = (bool)hasExclusiveAccess(0x1d51b0c);
  } while (!bVar1);
  DAT_01d51b0c = 1;
  DataMemoryBarrier(0xb);
LAB_0197af5c:
  if ((DAT_01d51b08 & 0x7fffffff) == 0) {
    return (ulonglong)DAT_01d51b10 << 0x20;
  }
  uVar2 = FUN_0197ac0c(0);
  return (ulonglong)CONCAT14(DAT_01d51b10,uVar2) ^ 1;
}

