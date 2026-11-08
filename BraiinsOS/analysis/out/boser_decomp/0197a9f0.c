// FUN_0197a9f0 @ 0197a9f0 size=296 calls_out=2 calls_in=2
// strings: nix/src/pcap.rsevent open/boser/boser-unix/src/pcap.rs:59event open/boser/boser-unix/src/pcap.rs:73event open/boser/boser-unix/src/pcap.rs:64event open/boser/boser-unix/src/log.rs:139

uint FUN_0197a9f0(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  bool bVar4;
  int local_24;
  byte *local_20;
  uint local_1c;
  
  if ((DAT_01d51aa9 - 1 & 0xff) < 3) {
    return DAT_01d51aa9 - 1;
  }
  FUN_019a3070(&local_24,&DAT_005268d9,0xe);
  if (local_24 == -0x80000000) {
    uVar3 = 3;
    uVar1 = 2;
    goto LAB_0197aaac;
  }
  if (local_1c == 4) {
    if (*(int *)local_20 != 0x6c6c7566) goto LAB_0197aa8c;
    uVar3 = 2;
    uVar1 = 1;
  }
  else {
    bVar4 = local_1c != 1;
    if (!bVar4) {
      local_1c = (uint)*local_20;
    }
    if (bVar4 || local_1c != 0x30) {
LAB_0197aa8c:
      uVar3 = 1;
      uVar1 = 0;
    }
    else {
      uVar3 = 3;
      uVar1 = 2;
    }
  }
  if (local_24 != 0) {
    thunk_FUN_01be4678(local_20);
  }
LAB_0197aaac:
  do {
    uVar2 = (uint)DAT_01d51aa9;
    if (uVar2 != 0) {
      ClearExclusiveLocal();
      if (uVar2 < 4) {
        return 0x2010003 >> ((uVar2 & 0x1f) << 3);
      }
      return 3;
    }
    bVar4 = (bool)hasExclusiveAccess(0x1d51aa9);
  } while (!bVar4);
  DAT_01d51aa9 = uVar3;
  return uVar1;
}

