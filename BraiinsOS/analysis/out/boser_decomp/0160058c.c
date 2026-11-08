// FUN_0160058c @ 0160058c size=260 calls_out=0 calls_in=2
// strings: 

void FUN_0160058c(undefined1 *param_1,byte *param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      bVar2 = *param_2;
      uVar4 = 1;
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_01600664;
    }
    else {
      bVar2 = *param_2;
    }
    uVar5 = 0;
    if (bVar2 == 0x2b) {
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    }
    if (param_3 < 9) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        uVar6 = (uint)*param_2;
        uVar3 = uVar6 - 0x30;
        if (0x39 < uVar6) {
          uVar3 = (uVar6 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar3) goto LAB_01600660;
        uVar5 = uVar3 | uVar5 << 4;
        param_2 = param_2 + 1;
      }
    }
    else {
      do {
        uVar6 = (uint)*param_2;
        uVar3 = uVar6 - 0x30;
        if (0xfffffff < uVar5) {
          if (0x39 < uVar6) {
            uVar3 = (uVar6 - 0x41 & 0xffffffde) + 10;
          }
          uVar4 = 1;
          if (uVar3 < 0x10) {
            uVar4 = 2;
          }
          goto LAB_01600664;
        }
        if (0x39 < uVar6) {
          uVar3 = (uVar6 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar3) goto LAB_01600660;
        uVar5 = uVar3 | uVar5 << 4;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    *(uint *)(param_1 + 4) = uVar5;
    uVar1 = 0;
    goto LAB_0160066c;
  }
  uVar4 = 0;
  goto LAB_01600664;
LAB_01600660:
  uVar4 = 1;
LAB_01600664:
  uVar1 = 1;
  param_1[1] = uVar4;
LAB_0160066c:
  *param_1 = uVar1;
  return;
}

