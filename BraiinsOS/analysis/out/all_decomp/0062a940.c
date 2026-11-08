// FUN_0062a940 @ 0062a940 size=300 calls_out=0 calls_in=1
// strings: 

void FUN_0062a940(undefined1 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 1) {
    bVar1 = *param_2;
    if (bVar1 == 0x2d || bVar1 == 0x2b) {
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
    bVar1 = *param_2;
  }
  uVar3 = 0;
  if (bVar1 == 0x2b) {
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  if (param_3 < 9) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar4 = (uint)*param_2;
      uVar2 = uVar4 - 0x30;
      if (0x39 < uVar4) {
        uVar2 = (uVar4 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar2) {
LAB_0062aa58:
        param_1[1] = 1;
        *param_1 = 1;
        return;
      }
      uVar3 = uVar2 | uVar3 << 4;
      param_2 = param_2 + 1;
    }
  }
  else {
    do {
      uVar4 = (uint)*param_2;
      uVar2 = uVar4 - 0x30;
      if (0xfffffff < uVar3) {
        if (0x39 < uVar4) {
          uVar2 = (uVar4 - 0x41 & 0xffffffde) + 10;
        }
        if (uVar2 < 0x10) {
          param_1[1] = 2;
          *param_1 = 1;
          return;
        }
        goto LAB_0062aa58;
      }
      if (0x39 < uVar4) {
        uVar2 = (uVar4 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar2) goto LAB_0062aa58;
      uVar3 = uVar2 | uVar3 << 4;
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *(uint *)(param_1 + 4) = uVar3;
  *param_1 = 0;
  return;
}

