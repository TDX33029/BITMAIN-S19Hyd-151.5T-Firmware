// FUN_016e7998 @ 016e7998 size=212 calls_out=1 calls_in=1
// strings: 

uint FUN_016e7998(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  uVar1 = FUN_01714f1c();
  uVar3 = uVar1 + 1;
  iVar2 = 1;
  if (0x7f < uVar3) {
    do {
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 >> 8;
    } while (uVar3 != 0);
  }
  uVar3 = uVar1 + 2 + iVar2;
  if ((uVar1 <= uVar3) && (uVar1 = uVar3 * 2, uVar3 <= uVar1)) {
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
    if (uVar1 <= uVar3) {
      return uVar3;
    }
  }
  return 0;
}

