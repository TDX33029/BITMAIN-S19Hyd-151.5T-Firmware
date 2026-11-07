// FUN_00fb727c @ 00fb727c size=256 calls_out=0 calls_in=15
// strings: 

longlong FUN_00fb727c(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  param_1 = param_1 & 0xff;
  uVar3 = param_2 + 3 & 0xfffffffc;
  if (uVar3 == param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar3 - param_2;
    if (param_3 < uVar3 - param_2) {
      uVar1 = param_3;
    }
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        if (*(byte *)(param_2 + uVar3) == param_1) goto LAB_00fb7370;
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
    if (param_3 - 8 < uVar1) goto LAB_00fb7334;
  }
  do {
    uVar4 = *(uint *)(param_2 + uVar1) ^ param_1 * 0x1010101;
    uVar3 = ((uint *)(param_2 + uVar1))[1] ^ param_1 * 0x1010101;
    uVar3 = (0x1010100 - uVar4 | uVar4) & 0x80808080 & (0x1010100 - uVar3 | uVar3);
    if (uVar3 != 0x80808080) break;
    uVar1 = uVar1 + 8;
  } while (uVar1 <= param_3 - 8);
LAB_00fb7334:
  if (param_3 != uVar1) {
    uVar3 = param_2 + uVar1;
    iVar2 = 0;
    do {
      if (*(byte *)(uVar3 + iVar2) == param_1) {
        uVar3 = iVar2 + uVar1;
LAB_00fb7370:
        return CONCAT44(uVar3,1);
      }
      iVar2 = iVar2 + 1;
    } while (param_3 - uVar1 != iVar2);
  }
  return (ulonglong)uVar3 << 0x20;
}

