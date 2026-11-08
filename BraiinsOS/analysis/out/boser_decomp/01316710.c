// FUN_01316710 @ 01316710 size=248 calls_out=0 calls_in=1
// strings: 

uint FUN_01316710(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = 1;
  uVar1 = 0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      bVar3 = *param_1;
      if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) {
        uVar1 = 0x100;
        goto LAB_013167ec;
      }
    }
    else {
      bVar3 = *param_1;
    }
    uVar1 = 0;
    if (bVar3 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    }
    if (param_2 < 5) {
      for (; param_2 != 0; param_2 = param_2 - 1) {
        bVar3 = *param_1;
        if (9 < bVar3 - 0x30) goto LAB_013167e4;
        param_1 = param_1 + 1;
        uVar1 = (bVar3 - 0x30) + uVar1 * 10;
      }
LAB_0131678c:
      uVar1 = uVar1 << 0x10;
      uVar4 = 0;
    }
    else {
      do {
        if (param_2 == 0) goto LAB_0131678c;
        uVar1 = (uVar1 & 0xffff) * 4 + (uVar1 & 0xffff);
        if (uVar1 >> 0xf != 0) {
          uVar1 = 0x100;
          if (*param_1 - 0x30 < 10) {
            uVar1 = 0x200;
          }
          goto LAB_013167ec;
        }
        uVar2 = *param_1 - 0x30;
        if (9 < uVar2) goto LAB_013167e4;
        uVar1 = (uVar1 * 2 & 0xffff) + (uVar2 & 0xffff);
        param_2 = param_2 - 1;
        param_1 = param_1 + 1;
      } while ((uVar1 & 0x10000) == 0);
      uVar1 = 0x200;
    }
  }
  goto LAB_013167ec;
LAB_013167e4:
  uVar1 = 0x100;
LAB_013167ec:
  return uVar1 | uVar4;
}

