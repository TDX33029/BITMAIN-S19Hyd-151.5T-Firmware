// FUN_013ac848 @ 013ac848 size=384 calls_out=0 calls_in=1
// strings: 

longlong FUN_013ac848(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  
  uVar1 = 0;
  if (param_4 <= param_3) {
    return ZEXT48(param_3) << 0x20;
  }
  uVar3 = (int)param_4 - (int)param_3;
  param_2 = param_2 & 0xff;
  param_1 = param_1 & 0xff;
  if (uVar3 < 4) {
    puVar4 = (uint *)((int)param_3 + uVar3);
    do {
      if ((param_1 == (byte)*param_3) || (param_2 == (byte)*param_3)) goto LAB_013ac9b8;
      param_3 = (uint *)((int)param_3 + 1);
    } while (param_3 != param_4);
    param_3 = puVar4;
  }
  else {
    uVar2 = *param_3 ^ param_1 * 0x1010101;
    if (((~(0x1010100 - uVar2 | uVar2) & 0x80808080) == 0) &&
       (uVar2 = *param_3 ^ param_2 * 0x1010101, (~(0x1010100 - uVar2 | uVar2) & 0x80808080) == 0)) {
      param_3 = (uint *)((uint)param_3 & 0xfffffffc);
      do {
        param_3 = param_3 + 1;
        if ((param_4 + -1 < param_3) ||
           (uVar3 = *param_3 ^ param_1 * 0x1010101, (~(0x1010100 - uVar3 | uVar3) & 0x80808080) != 0
           )) break;
        uVar3 = *param_3 ^ param_2 * 0x1010101;
      } while ((~(0x1010100 - uVar3 | uVar3) & 0x80808080) == 0);
      if (param_3 < param_4) {
        while ((param_1 != (byte)*param_3 && (param_2 != (byte)*param_3))) {
          param_3 = (uint *)((int)param_3 + 1);
          if (param_3 == param_4) {
            return ZEXT48(param_4) << 0x20;
          }
        }
LAB_013ac9b8:
        return CONCAT44(param_3,1);
      }
    }
    else {
      pbVar5 = (byte *)((int)param_3 + uVar3);
      uVar1 = 1;
      while (param_1 != (byte)*param_3 && param_2 != (byte)*param_3) {
        param_3 = (uint *)((int)param_3 + 1);
        if (param_3 == param_4) {
          return ZEXT48(pbVar5) << 0x20;
        }
      }
    }
  }
  return CONCAT44(param_3,uVar1);
}

