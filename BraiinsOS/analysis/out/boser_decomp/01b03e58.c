// FUN_01b03e58 @ 01b03e58 size=236 calls_out=3 calls_in=2
// strings: 

ulonglong FUN_01b03e58(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar4 = FUN_01b3d638();
  if ((int)uVar4 == 0) {
    return uVar4 & 0xffffffff00000000;
  }
  FUN_01b3d100();
  uVar1 = FUN_01b2b938();
  uVar3 = uVar1 + 1;
  iVar2 = 1;
  if (0x7f < uVar3) {
    do {
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 >> 8;
    } while (uVar3 != 0);
  }
  uVar3 = uVar1 + 2 + iVar2;
  if ((uVar3 < uVar1) || (uVar1 = uVar3 * 2, uVar3 * 2 < uVar3)) {
    return 0;
  }
  if (uVar1 < 0x80) {
    iVar2 = 1;
  }
  else {
    iVar2 = 1;
    uVar3 = uVar1;
    do {
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 >> 8;
    } while (uVar3 != 0);
  }
  uVar3 = uVar1 + 1 + iVar2;
  if (uVar3 < uVar1) {
    uVar3 = 0;
  }
  return (ulonglong)uVar3;
}

