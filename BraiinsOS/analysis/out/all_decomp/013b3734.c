// FUN_013b3734 @ 013b3734 size=412 calls_out=0 calls_in=1
// strings: 

longlong FUN_013b3734(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_3 <= param_2) {
    return ZEXT48(param_3) << 0x20;
  }
  uVar6 = (uint)*(byte *)param_1[1];
  uVar3 = (uint)*(byte *)*param_1;
  uVar7 = (uint)*(byte *)param_1[2];
  if ((uint)((int)param_3 - (int)param_2) < 4) {
    uVar2 = 1;
    do {
      if (param_3 <= param_2) goto LAB_013b38bc;
      param_3 = (uint *)((int)param_3 + -1);
      uVar4 = (uint)*(byte *)param_3;
    } while ((uVar7 != uVar4 && uVar3 != uVar4) && (uVar6 != uVar4));
  }
  else {
    uVar4 = param_3[-1];
    uVar5 = uVar4 ^ uVar3 * 0x1010101;
    if ((((~(0x1010100 - uVar5 | uVar5) & 0x80808080) == 0) &&
        (uVar5 = uVar4 ^ uVar6 * 0x1010101, (~(0x1010100 - uVar5 | uVar5) & 0x80808080) == 0)) &&
       (uVar4 = uVar4 ^ uVar7 * 0x1010101, (~(0x1010100 - uVar4 | uVar4) & 0x80808080) == 0)) {
      puVar1 = (uint *)((uint)param_3 & 0xfffffffc);
      while (param_3 = puVar1, param_2 + 1 <= param_3) {
        uVar5 = param_3[-1];
        uVar4 = uVar5 ^ uVar3 * 0x1010101;
        uVar4 = ~(0x1010100 - uVar4 | uVar4);
        bVar8 = (uVar4 & 0x80808080) != 0;
        if (!bVar8) {
          uVar4 = uVar5 ^ uVar6 * 0x1010101;
          uVar4 = ~(0x1010100 - uVar4 | uVar4);
        }
        if ((bVar8 || (uVar4 & 0x80808080) != 0) ||
           (uVar5 = uVar5 ^ uVar7 * 0x1010101, puVar1 = param_3 + -1,
           (~(0x1010100 - uVar5 | uVar5) & 0x80808080) != 0)) break;
      }
      uVar2 = 1;
      do {
        if (param_3 <= param_2) goto LAB_013b38bc;
        param_3 = (uint *)((int)param_3 + -1);
        uVar4 = (uint)*(byte *)param_3;
      } while ((uVar7 != uVar4 && uVar3 != uVar4) && (uVar6 != uVar4));
    }
    else {
      do {
        if (param_3 <= param_2) goto LAB_013b38bc;
        param_3 = (uint *)((int)param_3 + -1);
        uVar4 = (uint)*(byte *)param_3;
        uVar2 = 1;
      } while ((uVar7 != uVar4 && uVar3 != uVar4) && (uVar6 != uVar4));
    }
  }
LAB_013b38c0:
  return CONCAT44(param_3,uVar2);
LAB_013b38bc:
  uVar2 = 0;
  goto LAB_013b38c0;
}

