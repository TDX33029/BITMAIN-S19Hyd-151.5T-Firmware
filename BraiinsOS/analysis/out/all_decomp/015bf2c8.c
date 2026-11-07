// FUN_015bf2c8 @ 015bf2c8 size=296 calls_out=2 calls_in=2
// strings: 

uint FUN_015bf2c8(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  bool bVar4;
  int local_24;
  byte *local_20;
  uint local_1c;
  
  if ((DAT_018dd936 - 1 & 0xff) < 3) {
    return DAT_018dd936 - 1;
  }
  FUN_015e9334(&local_24,&DAT_004108a8,0xe);
  if (local_24 == -0x80000000) {
    uVar3 = 3;
    uVar1 = 2;
    goto LAB_015bf384;
  }
  if (local_1c == 4) {
    if (*(int *)local_20 != 0x6c6c7566) goto LAB_015bf364;
    uVar3 = 2;
    uVar1 = 1;
  }
  else {
    bVar4 = local_1c != 1;
    if (!bVar4) {
      local_1c = (uint)*local_20;
    }
    if (bVar4 || local_1c != 0x30) {
LAB_015bf364:
      uVar3 = 1;
      uVar1 = 0;
    }
    else {
      uVar3 = 3;
      uVar1 = 2;
    }
  }
  if (local_24 != 0) {
    thunk_FUN_016d3fb4(local_20);
  }
LAB_015bf384:
  do {
    uVar2 = (uint)DAT_018dd936;
    if (uVar2 != 0) {
      ClearExclusiveLocal();
      if (uVar2 < 4) {
        return 0x2010003 >> ((uVar2 & 0x1f) << 3);
      }
      return 3;
    }
    bVar4 = (bool)hasExclusiveAccess(0x18dd936);
  } while (!bVar4);
  DAT_018dd936 = uVar3;
  return uVar1;
}

