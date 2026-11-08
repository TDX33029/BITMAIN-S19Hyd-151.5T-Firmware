// FUN_01bf0680 @ 01bf0680 size=728 calls_out=1 calls_in=2
// strings: 

void FUN_01bf0680(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_5 == 0) || (param_6 != 0)) {
    if ((param_4 <= param_6 && (uint)(param_5 <= param_3) <= param_4 - param_6) || (param_4 == 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = param_3;
      param_1[3] = param_4;
      return;
    }
    uVar2 = LZCOUNT(param_6) - LZCOUNT(param_4) & 0x3f;
    uVar8 = param_5 << uVar2;
    uVar5 = param_5 >> (0x20 - uVar2 & 0xff) | param_6 << uVar2;
    if (-1 < (int)(uVar2 - 0x20)) {
      uVar8 = 0;
      uVar5 = param_5 << (uVar2 - 0x20 & 0xff);
    }
    uVar2 = 1 << (LZCOUNT(param_6) - LZCOUNT(param_4) & 0x1fU);
    uVar3 = 0;
    do {
      uVar7 = param_3 - uVar8;
      uVar4 = param_4 - (uVar5 + (param_3 < uVar8));
      if (-1 < (int)uVar4) {
        uVar3 = uVar2 | uVar3;
        if (uVar4 <= param_6 && (uint)(param_5 <= uVar7) <= uVar4 - param_6) {
          *param_1 = uVar3;
          param_1[1] = 0;
          param_1[2] = uVar7;
          param_1[3] = uVar4;
          return;
        }
        param_3 = uVar7;
        param_4 = uVar4;
      }
      bVar1 = (byte)uVar5;
      uVar5 = uVar5 >> 1;
      uVar8 = (uint)(bVar1 & 1) << 0x1f | uVar8 >> 1;
      uVar2 = uVar2 >> 1;
    } while( true );
  }
  if (param_4 != 0) {
    if (param_4 < param_5) {
      uVar8 = (LZCOUNT(param_5) - LZCOUNT(param_4)) + 0x20;
      uVar5 = 0;
      if (LZCOUNT(param_5) - LZCOUNT(param_4) == 0) {
        uVar8 = 0x1f;
      }
      uVar3 = uVar8 - 0x20;
      uVar2 = param_5 >> (0x20 - uVar8 & 0xff) | 0 << (uVar8 & 0xff);
      if (-1 < (int)uVar3) {
        uVar2 = param_5 << (uVar3 & 0xff);
      }
      uVar4 = param_5 << (uVar8 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = 0;
      }
      uVar8 = 1 << (uVar8 & 0x1f);
      do {
        uVar7 = param_3 - uVar4;
        uVar3 = param_4 - (uVar2 + (param_3 < uVar4));
        if (-1 < (int)uVar3) {
          uVar5 = uVar8 | uVar5;
          if (uVar3 == 0) goto LAB_01bf0834;
          param_3 = uVar7;
          param_4 = uVar3;
        }
        bVar1 = (byte)uVar2;
        uVar2 = uVar2 >> 1;
        uVar4 = (uint)(bVar1 & 1) << 0x1f | uVar4 >> 1;
        uVar8 = uVar8 >> 1;
      } while( true );
    }
    if (param_4 == param_5) {
      uVar5 = FUN_01bf1250(param_3,param_4);
      *param_1 = uVar5;
      param_1[1] = 1;
      param_1[2] = param_3 - uVar5 * param_4;
      param_1[3] = 0;
      return;
    }
    uVar5 = FUN_01bf1250(param_4,param_5);
    param_4 = param_4 - uVar5 * param_5;
    if (0xffff < param_5) {
      if (param_4 == 0 && (param_5 <= param_3) <= param_4) {
        *param_1 = 0;
        param_1[1] = uVar5;
        param_1[2] = param_3;
        param_1[3] = param_4;
        return;
      }
      uVar8 = param_5 << 0x1f;
      uVar2 = 0x80000000;
      uVar4 = 0;
      uVar3 = param_5;
      do {
        uVar3 = uVar3 >> 1;
        uVar9 = param_3 - uVar8;
        uVar7 = param_4 - (uVar3 + (param_3 < uVar8));
        if (-1 < (int)uVar7) {
          uVar4 = uVar2 | uVar4;
          if (uVar7 == 0) {
            uVar8 = FUN_01bf1250(uVar9,param_5);
            *param_1 = uVar8 | uVar4;
            param_1[1] = uVar5;
            param_1[2] = uVar9 - uVar8 * param_5;
            param_1[3] = 0;
            return;
          }
          param_4 = uVar7;
          param_3 = uVar9;
        }
        uVar8 = (uint)((byte)uVar3 & 1) << 0x1f | uVar8 >> 1;
        uVar2 = uVar2 >> 1;
      } while( true );
    }
    uVar2 = FUN_01bf1250(param_4 * 0x10000 | param_3 >> 0x10,param_5);
    iVar6 = (param_3 & 0xffff) + ((param_3 >> 0x10) - uVar2 * param_5) * 0x10000;
    uVar8 = FUN_01bf1250(iVar6,param_5);
    uVar7 = iVar6 - uVar8 * param_5;
    uVar8 = uVar8 | uVar2 << 0x10;
    uVar5 = uVar5 | uVar2 >> 0x10;
    goto LAB_01bf084c;
  }
  uVar8 = FUN_01bf1250(param_3,param_5);
  uVar7 = param_3 - uVar8 * param_5;
LAB_01bf0848:
  uVar5 = 0;
LAB_01bf084c:
  *param_1 = uVar8;
  param_1[1] = uVar5;
  param_1[2] = uVar7;
  param_1[3] = 0;
  return;
LAB_01bf0834:
  uVar8 = FUN_01bf1250(uVar7,param_5);
  uVar7 = uVar7 - uVar8 * param_5;
  uVar8 = uVar8 | uVar5;
  goto LAB_01bf0848;
}

