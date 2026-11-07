// FUN_0167cd9c @ 0167cd9c size=316 calls_out=0 calls_in=1
// strings: 

longlong FUN_0167cd9c(uint param_1,uint param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  if (param_4 == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  param_2 = param_2 & 0xff;
  param_1 = param_1 & 0xff;
  puVar1 = param_3;
  if (param_4 < 4) {
    do {
      if (param_1 == (byte)*puVar1 || param_2 == (byte)*puVar1) goto LAB_0167cecc;
      puVar1 = (uint *)((int)puVar1 + 1);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  else {
    uVar2 = *param_3 ^ param_1 * 0x1010101;
    if (((~(0x1010100 - uVar2 | uVar2) & 0x80808080) == 0) &&
       (uVar2 = *param_3 ^ param_2 * 0x1010101, (~(0x1010100 - uVar2 | uVar2) & 0x80808080) == 0)) {
      puVar3 = (uint *)((int)param_3 + param_4);
      puVar1 = (uint *)((uint)param_3 & 0xfffffffc);
      do {
        puVar1 = puVar1 + 1;
        if (puVar3 + -1 < puVar1) break;
        uVar2 = *puVar1 ^ param_1 * 0x1010101;
        uVar2 = ~(0x1010100 - uVar2 | uVar2);
        bVar4 = (uVar2 & 0x80808080) == 0;
        if (bVar4) {
          uVar2 = *puVar1 ^ param_2 * 0x1010101;
          uVar2 = ~(0x1010100 - uVar2 | uVar2);
        }
      } while (bVar4 && (uVar2 & 0x80808080) == 0);
      if (puVar1 < puVar3) {
        do {
          if (param_1 == (byte)*puVar1 || param_2 == (byte)*puVar1) goto LAB_0167cecc;
          puVar1 = (uint *)((int)puVar1 + 1);
        } while (puVar1 != puVar3);
      }
    }
    else {
      do {
        if (param_1 == (byte)*puVar1 || param_2 == (byte)*puVar1) {
LAB_0167cecc:
          return CONCAT44((int)puVar1 - (int)param_3,1);
        }
        puVar1 = (uint *)((int)puVar1 + 1);
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
  }
  return ZEXT48(puVar1) << 0x20;
}

