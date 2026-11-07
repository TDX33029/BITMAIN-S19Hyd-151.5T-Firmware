// FUN_0100f104 @ 0100f104 size=624 calls_out=7 calls_in=1
// strings: assertion failed: path.contains(&0) | /dev/urandom | /dev/urandom

/* WARNING: Removing unreachable block (ram,0x0100f15c) */

longlong FUN_0100f104(void)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint local_20 [2];
  
  do {
    while (DataMemoryBarrier(0xb), DAT_018d8078 == 0xfffffffe) {
      FUN_016d6968(0xf0,&DAT_018d8078,0x80,0xfffffffe,0);
    }
    if (DAT_018d8078 != 0xffffffff) {
      return (ulonglong)DAT_018d8078 << 0x20;
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(0x18d8078);
  } while (!bVar1);
  DAT_018d8078 = 0xfffffffe;
  DataMemoryBarrier(0xb);
  iVar4 = 10;
  do {
    if ("/d"[iVar4] == '\0') goto LAB_0100f1b4;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xc);
LAB_0100f28c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa464("assertion failed: path.contains(&0)",0x23,&DAT_018822c4);
  while( true ) {
    piVar3 = (int *)FUN_016d2bc8();
    uVar5 = 0x10001;
    if (0 < *piVar3) {
      uVar5 = -*piVar3;
    }
    uVar2 = 1;
    if (uVar5 != 0xfffffffc) break;
LAB_0100f1b4:
    uVar2 = FUN_016d2e2a("/d",0x80000);
    if (uVar2 < 0x80000000) {
      local_20[1] = 1;
      local_20[0] = uVar2;
      goto LAB_0100f2b8;
    }
  }
  goto LAB_0100f1e8;
  while( true ) {
    piVar3 = (int *)FUN_016d2bc8();
    uVar5 = 0x10001;
    if (0 < *piVar3) {
      uVar5 = -*piVar3;
    }
    if (uVar5 != 0xfffffffc) break;
LAB_0100f2b8:
    uVar5 = FUN_016da3b6(local_20,1,0xffffffff);
    if (uVar5 < 0x80000000) {
      FUN_016dffb2(uVar2);
      iVar4 = FUN_00fb727c(0,"/dev/urandom",0xd);
      if (iVar4 == 1) goto LAB_0100f330;
      goto LAB_0100f28c;
    }
  }
  FUN_016dffb2(uVar2);
  uVar2 = 1;
  goto LAB_0100f1e8;
  while( true ) {
    piVar3 = (int *)FUN_016d2bc8();
    uVar5 = 0x10001;
    if (0 < *piVar3) {
      uVar5 = -*piVar3;
    }
    if (uVar5 != 0xfffffffc) break;
LAB_0100f330:
    uVar2 = FUN_016d2e2a("/dev/urandom",0x80000);
    if (uVar2 < 0x80000000) {
      uVar5 = uVar2;
      break;
    }
  }
  uVar2 = uVar2 >> 0x1f;
LAB_0100f1e8:
  DAT_018d8078 = uVar5;
  if (uVar2 != 0) {
    DAT_018d8078 = 0xffffffff;
  }
  DataMemoryBarrier(0xb);
  FUN_016d6968(0xf0,&DAT_018d8078,0x81,0x7fffffff);
  return CONCAT44(uVar5,uVar2);
}

