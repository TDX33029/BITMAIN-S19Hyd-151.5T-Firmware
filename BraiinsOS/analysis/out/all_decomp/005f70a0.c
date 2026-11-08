// FUN_005f70a0 @ 005f70a0 size=456 calls_out=0 calls_in=10
// strings: 

longlong FUN_005f70a0(undefined4 *param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = 0;
  if (param_3 <= param_2) {
    return ZEXT48(param_2) << 0x20;
  }
  uVar8 = (uint)*(byte *)param_1[1];
  uVar7 = (int)param_3 - (int)param_2;
  uVar9 = (uint)*(byte *)param_1[2];
  uVar2 = (uint)*(byte *)*param_1;
  if (uVar7 < 4) {
    puVar3 = (uint *)((int)param_2 + uVar7);
    do {
      uVar7 = (uint)(byte)*param_2;
      if (((uVar9 == uVar7) || (uVar2 == uVar7)) || (uVar8 == uVar7)) goto LAB_005f725c;
      param_2 = (uint *)((int)param_2 + 1);
    } while (param_2 != param_3);
    param_2 = puVar3;
  }
  else {
    uVar6 = *param_2;
    uVar4 = uVar6 ^ uVar2 * 0x1010101;
    if ((((~(0x1010100 - uVar4 | uVar4) & 0x80808080) == 0) &&
        (uVar4 = uVar6 ^ uVar8 * 0x1010101, (~(0x1010100 - uVar4 | uVar4) & 0x80808080) == 0)) &&
       (uVar6 = uVar6 ^ uVar9 * 0x1010101, (~(0x1010100 - uVar6 | uVar6) & 0x80808080) == 0)) {
      param_2 = (uint *)((uint)param_2 & 0xfffffffc);
      while (param_2 = param_2 + 1, param_2 <= param_3 + -1) {
        uVar4 = *param_2;
        uVar7 = uVar4 ^ uVar2 * 0x1010101;
        uVar7 = ~(0x1010100 - uVar7 | uVar7);
        bVar10 = (uVar7 & 0x80808080) != 0;
        if (!bVar10) {
          uVar7 = uVar4 ^ uVar8 * 0x1010101;
          uVar7 = ~(0x1010100 - uVar7 | uVar7);
        }
        if ((bVar10 || (uVar7 & 0x80808080) != 0) ||
           (uVar4 = uVar4 ^ uVar9 * 0x1010101, (~(0x1010100 - uVar4 | uVar4) & 0x80808080) != 0))
        break;
      }
      if (param_2 < param_3) {
        while (((uVar7 = (uint)(byte)*param_2, uVar9 != uVar7 && (uVar2 != uVar7)) &&
               (uVar8 != uVar7))) {
          param_2 = (uint *)((int)param_2 + 1);
          if (param_2 == param_3) {
            return ZEXT48(param_3) << 0x20;
          }
        }
LAB_005f725c:
        return CONCAT44(param_2,1);
      }
    }
    else {
      pbVar5 = (byte *)((int)param_2 + uVar7);
      uVar1 = 1;
      while ((uVar7 = (uint)(byte)*param_2, uVar9 != uVar7 && (uVar2 != uVar7 && uVar8 != uVar7))) {
        param_2 = (uint *)((int)param_2 + 1);
        if (param_2 == param_3) {
          return ZEXT48(pbVar5) << 0x20;
        }
      }
    }
  }
  return CONCAT44(param_2,uVar1);
}

