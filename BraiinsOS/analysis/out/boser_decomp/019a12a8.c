// FUN_019a12a8 @ 019a12a8 size=288 calls_out=0 calls_in=1
// strings: 

void FUN_019a12a8(undefined1 *param_1,byte *param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 1) {
    bVar2 = *param_2;
    if (bVar2 == 0x2d || bVar2 == 0x2b) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    if (param_3 == 0) {
      param_1[1] = 0;
      *param_1 = 1;
      return;
    }
    bVar2 = *param_2;
  }
  uVar4 = 0;
  if (bVar2 == 0x2b) {
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  if (param_3 < 9) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar5 = (uint)*param_2;
      uVar3 = uVar5 - 0x30;
      if (0x39 < uVar5) {
        uVar3 = (uVar5 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar3) goto LAB_019a13b4;
      uVar4 = uVar3 | uVar4 << 4;
      param_2 = param_2 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar5 = (uint)*param_2;
      uVar3 = uVar5 - 0x30;
      if (0xfffffff < uVar4) {
        if (0x39 < uVar5) {
          uVar3 = (uVar5 - 0x41 & 0xffffffde) + 10;
        }
        if (0xf < uVar3) goto LAB_019a13b4;
        param_1[1] = 2;
        uVar1 = 1;
        goto LAB_019a13bc;
      }
      if (0x39 < uVar5) {
        uVar3 = (uVar5 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar3) goto LAB_019a13b4;
      uVar4 = uVar3 | uVar4 << 4;
      param_2 = param_2 + 1;
    }
  }
  *(uint *)(param_1 + 4) = uVar4;
  uVar1 = 0;
LAB_019a13bc:
  *param_1 = uVar1;
  return;
LAB_019a13b4:
  uVar1 = 1;
  param_1[1] = 1;
  goto LAB_019a13bc;
}

