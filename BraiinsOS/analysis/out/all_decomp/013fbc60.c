// FUN_013fbc60 @ 013fbc60 size=256 calls_out=0 calls_in=4
// strings: 

bool FUN_013fbc60(uint param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((0xff < param_1) ||
     (((bVar1 = true, 0x19 < (param_1 & 0xdf) - 0x41 && (param_1 != 0x5f)) && (9 < param_1 - 0x30)))
     ) {
    iVar2 = 0x18e;
    if (param_1 < 0xf900) {
      iVar2 = 0;
    }
    if (*(uint *)(&UNK_003eb8ac + (iVar2 + 199) * 8) <= param_1) {
      iVar2 = iVar2 + 199;
    }
    if (*(uint *)(&UNK_003eb8ac + (iVar2 + 99) * 8) <= param_1) {
      iVar2 = iVar2 + 99;
    }
    if (*(uint *)(&UNK_003eb8ac + (iVar2 + 0x32) * 8) <= param_1) {
      iVar2 = iVar2 + 0x32;
    }
    if (*(uint *)(&UNK_003eb8ac + (iVar2 + 0x19) * 8) <= param_1) {
      iVar2 = iVar2 + 0x19;
    }
    if (*(uint *)(&UNK_003eb8ac + (iVar2 + 0xc) * 8) <= param_1) {
      iVar2 = iVar2 + 0xc;
    }
    if (*(uint *)(&UNK_003eb8ac + (iVar2 + 6) * 8) <= param_1) {
      iVar2 = iVar2 + 6;
    }
    if (*(uint *)(&UNK_003eb8ac + (iVar2 + 3) * 8) <= param_1) {
      iVar2 = iVar2 + 3;
    }
    if (*(uint *)(&UNK_003eb8ac + (iVar2 + 2) * 8) <= param_1) {
      iVar2 = iVar2 + 2;
    }
    if (*(uint *)(&UNK_003eb8ac + (iVar2 + 1) * 8) <= param_1) {
      iVar2 = iVar2 + 1;
    }
    bVar1 = *(uint *)(&UNK_003eb8ac + iVar2 * 8) <= param_1 &&
            param_1 <= *(uint *)(&UNK_003eb8b0 + iVar2 * 8);
  }
  return bVar1;
}

