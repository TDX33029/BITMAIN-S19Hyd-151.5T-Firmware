// FUN_016eaf58 @ 016eaf58 size=144 calls_out=0 calls_in=10
// strings: 

bool FUN_016eaf58(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((0xff < param_1) ||
     (((bVar1 = true, 0x19 < (param_1 & 0xdf) - 0x41 && (param_1 != 0x5f)) && (9 < param_1 - 0x30)))
     ) {
    iVar2 = 0;
    uVar3 = 0x31c;
    do {
      iVar4 = iVar2 + (uVar3 >> 1);
      uVar3 = uVar3 - (uVar3 >> 1);
      if (*(uint *)(&UNK_004ec740 + iVar4 * 8) <= param_1) {
        iVar2 = iVar4;
      }
    } while (1 < uVar3);
    bVar1 = *(uint *)(&UNK_004ec740 + iVar2 * 8) <= param_1 &&
            param_1 <= *(uint *)(&UNK_004ec744 + iVar2 * 8);
  }
  return bVar1;
}

