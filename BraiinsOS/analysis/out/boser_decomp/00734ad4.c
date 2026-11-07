// FUN_00734ad4 @ 00734ad4 size=232 calls_out=0 calls_in=1
// strings: 

void FUN_00734ad4(undefined4 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  puVar5 = &DAT_005259df;
  if (param_3 == 0) {
LAB_00734b04:
    uVar3 = 0x19;
  }
  else {
    if (param_3 == 1) {
      bVar1 = *param_2;
      if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_00734b04;
    }
    else {
      bVar1 = *param_2;
    }
    if (bVar1 == 0x2b) {
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    }
    if (param_3 < 9) {
      if (param_3 == 0) {
        puVar5 = (undefined *)0x0;
        uVar3 = 0;
        goto LAB_00734b08;
      }
      uVar3 = 0;
      do {
        uVar4 = (uint)*param_2;
        uVar2 = uVar4 - 0x30;
        if (0x39 < uVar4) {
          uVar2 = (uVar4 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar2) goto LAB_00734b04;
        uVar3 = uVar2 | uVar3 << 4;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    else {
      uVar3 = 0;
      do {
        if (0xfffffff < uVar3) goto LAB_00734b04;
        uVar4 = (uint)*param_2;
        uVar2 = uVar4 - 0x30;
        if (0x39 < uVar4) {
          uVar2 = (uVar4 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar2) goto LAB_00734b04;
        uVar3 = uVar2 | uVar3 << 4;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    puVar5 = (undefined *)0x0;
  }
LAB_00734b08:
  *param_1 = puVar5;
  param_1[1] = uVar3;
  return;
}

