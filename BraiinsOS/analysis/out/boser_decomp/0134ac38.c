// FUN_0134ac38 @ 0134ac38 size=344 calls_out=5 calls_in=1
// strings: /dev/random | /dev/urandom

/* WARNING: Removing unreachable block (ram,0x0134ac74) */

ulonglong FUN_0134ac38(void)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int local_20 [2];
  
  do {
    while (DataMemoryBarrier(0xb), DAT_01d4cff8 == 0xfffffffe) {
      FUN_01be6c3c(0xf0,&DAT_01d4cff8,0x80,0xfffffffe,0);
    }
    if (DAT_01d4cff8 != 0xffffffff) {
      return (ulonglong)DAT_01d4cff8 << 0x20;
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(0x1d4cff8);
  } while (!bVar1);
  DAT_01d4cff8 = 0xfffffffe;
  DataMemoryBarrier(0xb);
  uVar6 = FUN_0134ad9c("/dev/random",0xc);
  iVar4 = (int)(uVar6 >> 0x20);
  if ((uVar6 & 1) == 0) {
    local_20[1] = 1;
    local_20[0] = iVar4;
    do {
      uVar2 = FUN_01bea68a(local_20,1,0xffffffff);
      if (uVar2 < 0x80000000) {
        iVar5 = 0;
        break;
      }
      piVar3 = (int *)FUN_01be3244();
      iVar5 = 0x10001;
      if (0 < *piVar3) {
        iVar5 = -*piVar3;
      }
    } while (iVar5 == -4);
    FUN_01bf01d6(iVar4);
  }
  else {
    iVar5 = iVar4;
  }
  uVar6 = CONCAT44(iVar5,1);
  if (iVar5 == 0) {
    uVar6 = FUN_0134ad9c("/dev/urandom",0xd);
  }
  DAT_01d4cff8 = (uint)(uVar6 >> 0x20);
  if ((uVar6 & 1) != 0) {
    DAT_01d4cff8 = 0xffffffff;
  }
  DataMemoryBarrier(0xb);
  FUN_01be6c3c(0xf0,&DAT_01d4cff8,0x81,0x7fffffff);
  return uVar6;
}

