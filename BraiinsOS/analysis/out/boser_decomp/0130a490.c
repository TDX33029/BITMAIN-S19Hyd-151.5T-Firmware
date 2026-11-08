// FUN_0130a490 @ 0130a490 size=288 calls_out=0 calls_in=0
// strings: 

uint FUN_0130a490(byte *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 1;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar5 = 0;
  }
  else {
    if (param_2 == 1) {
      bVar2 = *param_1;
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) {
LAB_0130a4c0:
        uVar5 = 0;
        uVar1 = 0x100;
        goto LAB_0130a58c;
      }
    }
    else {
      bVar2 = *param_1;
    }
    if (bVar2 == 0x2b) {
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    }
    if (param_2 < 5) {
      if (param_2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          bVar2 = *param_1;
          if (9 < bVar2 - 0x30) goto LAB_0130a4c0;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          uVar3 = (bVar2 - 0x30) + uVar3 * 10;
        } while (param_2 != 0);
      }
LAB_0130a578:
      uVar5 = uVar3 << 0x10;
      uVar1 = 0x400;
      uVar4 = (uint)((uVar3 & 0xffff) == 0);
    }
    else {
      uVar3 = 0;
      uVar5 = 0;
      do {
        if (param_2 == 0) goto LAB_0130a578;
        uVar1 = (uVar3 & 0xffff) * 4 + (uVar3 & 0xffff);
        if (uVar1 >> 0xf != 0) {
          uVar1 = 0x100;
          uVar5 = 0;
          if (*param_1 - 0x30 < 10) {
            uVar1 = 0x200;
          }
          goto LAB_0130a58c;
        }
        uVar3 = *param_1 - 0x30;
        if (9 < uVar3) goto LAB_0130a4c0;
        uVar3 = (uVar1 * 2 & 0xffff) + (uVar3 & 0xffff);
        param_2 = param_2 - 1;
        param_1 = param_1 + 1;
      } while ((uVar3 & 0x10000) == 0);
      uVar1 = 0x200;
    }
  }
LAB_0130a58c:
  return uVar1 | uVar5 | uVar4;
}

