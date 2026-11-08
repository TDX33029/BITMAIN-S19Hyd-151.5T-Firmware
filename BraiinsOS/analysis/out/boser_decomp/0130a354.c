// FUN_0130a354 @ 0130a354 size=316 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0130a354(byte *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_2 == 1) {
    bVar4 = *param_1;
    uVar5 = 1;
    if (bVar4 == 0x2b) {
LAB_0130a44c:
      uVar5 = 1;
      uVar2 = 1;
      goto LAB_0130a46c;
    }
    uVar2 = 1;
    if (bVar4 == 0x2d) goto LAB_0130a46c;
  }
  else {
    bVar4 = *param_1;
  }
  if (bVar4 == 0x2b) {
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      bVar3 = param_2 == 1;
      uVar2 = 0;
      do {
        bVar4 = *param_1;
        if (9 < bVar4 - 0x30) goto LAB_0130a44c;
        param_1 = param_1 + 1;
        bVar1 = !bVar3;
        bVar3 = true;
        uVar2 = (bVar4 - 0x30) + uVar2 * 10;
      } while (bVar1);
    }
LAB_0130a458:
    uVar5 = uVar2 & 0xff;
    if (uVar5 == 0) {
      uVar2 = 4;
    }
    uVar5 = (uint)(uVar5 == 0);
  }
  else {
    uVar2 = 0;
    do {
      if (param_2 == 0) goto LAB_0130a458;
      uVar5 = (uVar2 & 0xff) * 4 + (uVar2 & 0xff);
      if (uVar5 >> 7 != 0) {
        uVar2 = 1;
        uVar5 = 1;
        if (*param_1 - 0x30 < 10) {
          uVar2 = 2;
        }
        goto LAB_0130a46c;
      }
      uVar2 = *param_1 - 0x30;
      if (9 < uVar2) goto LAB_0130a44c;
      param_2 = param_2 - 1;
      uVar2 = (uVar5 * 2 & 0xff) + (uVar2 & 0xff);
      param_1 = param_1 + 1;
    } while ((uVar2 & 0xffffff00) == 0);
    uVar2 = 2;
    uVar5 = 1;
  }
LAB_0130a46c:
  return CONCAT44(uVar2,uVar5);
}

