// FUN_019d6718 @ 019d6718 size=1456 calls_out=0 calls_in=1
// strings: for the given year

void FUN_019d6718(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2 - 10000 < 0xffffb1e1) {
    param_1[8] = 0;
    param_1[2] = 0xffffd8f1;
    param_1[3] = 0xffffffff;
    param_1[4] = 9999;
    param_1[5] = 0;
    param_1[6] = param_2;
    param_1[7] = (int)param_2 >> 0x1f;
    *param_1 = &DAT_0056cfb8;
    param_1[1] = 4;
    return;
  }
  param_3 = param_3 & 0xff;
  if (0x34 < param_3) {
    iVar1 = (int)param_2 % 400;
    if (iVar1 < 9) {
      if (iVar1 < -0xc1) {
        if (iVar1 < -0x127) {
          if (((0x1c < iVar1 + 0x18cU) || ((1 << (iVar1 + 0x18cU & 0xff) & 0x10410821U) == 0)) &&
             ((0x1c < iVar1 + 0x16bU || ((1 << (iVar1 + 0x16bU & 0xff) & 0x10820841U) == 0)))) {
            uVar2 = iVar1 + 0x149;
            if (0x1c < uVar2) goto LAB_019d6c80;
            uVar4 = 0x10420821;
LAB_019d6970:
            if ((uVar4 & 1 << (uVar2 & 0xff)) == 0) {
LAB_019d6c80:
              param_1[8] = "for the given year";
              param_1[2] = 1;
              param_1[3] = 0;
              param_1[4] = 0x34;
              param_1[5] = 0;
              param_1[6] = param_3;
              param_1[7] = 0;
              *param_1 = &DAT_0056e110;
              param_1[1] = 4;
              param_1[9] = 0x12;
              return;
            }
          }
        }
        else if (((0x1c < iVar1 + 0x127U) || ((1 << (iVar1 + 0x127U & 0xff) & 0x10820841U) == 0)) &&
                ((0x1c < iVar1 + 0x105U || ((1 << (iVar1 + 0x105U & 0xff) & 0x10420821U) == 0)))) {
          uVar2 = iVar1 + 0xe4;
LAB_019d68e4:
          if (0x1d < uVar2) goto LAB_019d6c80;
          uVar4 = 0x1041;
LAB_019d68f0:
          uVar4 = uVar4 | 0x20820000;
          goto LAB_019d6970;
        }
      }
      else if (iVar1 < -0x5c) {
        if (((0x1c < iVar1 + 0xc1U) || ((1 << (iVar1 + 0xc1U & 0xff) & 0x10420821U) == 0)) &&
           ((0x1c < iVar1 + 0xa0U || ((1 << (iVar1 + 0xa0U & 0xff) & 0x10821041U) == 0)))) {
          uVar2 = iVar1 + 0x7e;
          if (0x1d < uVar2) goto LAB_019d6c80;
          uVar4 = 0x20420841;
          goto LAB_019d6970;
        }
      }
      else if (((0x1c < iVar1 + 0x5cU) || ((1 << (iVar1 + 0x5cU & 0xff) & 0x10821041U) == 0)) &&
              ((0x1c < iVar1 + 0x3aU || ((1 << (iVar1 + 0x3aU & 0xff) & 0x10420841U) == 0)))) {
        uVar2 = iVar1 + 0x18;
        if (0x1c < uVar2) goto LAB_019d6c80;
        uVar4 = 0x10410821;
        goto LAB_019d6970;
      }
    }
    else if (iVar1 < 0xd4) {
      if (iVar1 < 0x6f) {
        if (((0x1c < iVar1 - 9U) || ((1 << (iVar1 - 9U & 0xff) & 0x10820841U) == 0)) &&
           ((0x1c < iVar1 - 0x2bU || ((1 << (iVar1 - 0x2bU & 0xff) & 0x10420821U) == 0)))) {
          uVar2 = iVar1 - 0x4c;
          goto LAB_019d68e4;
        }
      }
      else if (((0x1c < iVar1 - 0x6fU) || ((1 << (iVar1 - 0x6fU & 0xff) & 0x10420821U) == 0)) &&
              ((0x1c < iVar1 - 0x90U || ((1 << (iVar1 - 0x90U & 0xff) & 0x10821041U) == 0)))) {
        uVar2 = iVar1 - 0xb2;
        if (0x1d < uVar2) goto LAB_019d6c80;
        uVar4 = 0x841;
        goto LAB_019d68f0;
      }
    }
    else if (iVar1 < 0x13a) {
      if (((0x1c < iVar1 - 0xd4U) || ((1 << (iVar1 - 0xd4U & 0xff) & 0x10821041U) == 0)) &&
         ((0x1c < iVar1 - 0xf6U || ((1 << (iVar1 - 0xf6U & 0xff) & 0x10420841U) == 0)))) {
        uVar2 = iVar1 - 0x118;
        if (0x1c < uVar2) goto LAB_019d6c80;
        uVar4 = 0x10810821;
        goto LAB_019d6970;
      }
    }
    else if (((0x1c < iVar1 - 0x13aU) || ((1 << (iVar1 - 0x13aU & 0xff) & 0x10420841U) == 0)) &&
            ((0x1c < iVar1 - 0x15cU || ((1 << (iVar1 - 0x15cU & 0xff) & 0x10410821U) == 0)))) {
      uVar2 = iVar1 - 0x17d;
      if (0x11 < uVar2) goto LAB_019d6c80;
      uVar4 = 0x20841;
      goto LAB_019d6970;
    }
  }
  uVar4 = param_2 - 1;
  uVar2 = 0x16d;
  iVar1 = uVar4 * 0x147b;
  iVar5 = (iVar1 >> 0x15) - (iVar1 >> 0x1f);
  uVar9 = uVar4 + ((iVar1 >> 0x13) - (iVar1 >> 0x1f)) * -100;
  iVar6 = uVar4 * 0x16d + iVar5 +
          ((int)(short)((short)uVar4 + (((short)uVar4 >> 0xf & 0x7fffU) >> 0xd)) >> 2);
  iVar1 = (int)uVar4 >> 0x1f;
  if ((uVar4 & 3) != 0) {
    iVar6 = iVar6 + iVar1;
  }
  uVar7 = iVar6 + (((int)(uVar4 * -0x147b) >> 0x13) - ((int)(uVar4 * -0x147b) >> 0x1f));
  if ((uVar4 + iVar5 * -400 & 0xffff) != 0) {
    uVar7 = uVar7 + iVar1;
  }
  if ((uVar9 & 0xffff) != 0) {
    uVar7 = uVar7 - iVar1;
  }
  iVar1 = (int)(((ulonglong)uVar7 << 0x20) + (longlong)(int)uVar7 * -0x6db6db6d >> 0x20);
  uVar7 = param_3 * 7 + (param_4 + 1U & 0xff) +
          (uint)*(ushort *)
                 (&DAT_00539350 + (uVar7 + ((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7 + 6 & 0xff) * 2);
  if ((short)uVar7 < 1) {
    uVar3 = 3;
    if ((uVar9 & 0xffff) == 0) {
      uVar3 = 0xf;
    }
    uVar9 = uVar4 * 0x400;
    if ((uVar3 & uVar4) == 0) {
      uVar9 = uVar4 * 0x400 | 0x200;
      uVar2 = 0x16e;
    }
  }
  else {
    uVar4 = param_2 * 0x5c29 + 0x51c;
    uVar8 = 3;
    uVar3 = 3;
    if (((uVar4 & 0xffff) >> 2 | uVar4 * 0x4000 & 0xffff) < 0x28f) {
      uVar8 = 0xf;
    }
    if ((uVar8 & param_2) == 0) {
      uVar2 = 0x16e;
    }
    if ((uVar7 & 0xffff) <= uVar2) {
      uVar9 = param_2 << 10;
      if ((uVar8 & param_2) == 0) {
        uVar9 = param_2 << 10 | 0x200;
      }
      uVar9 = uVar9 | uVar7 & 0xffff;
      goto LAB_019d6b08;
    }
    param_2 = param_2 + 1;
    uVar4 = param_2 * 0x5c29 + 0x51c;
    uVar9 = param_2 * 0x400;
    if (((uVar4 & 0xffff) >> 2 | uVar4 * 0x4000 & 0xffff) < 0x28f) {
      uVar3 = 0xf;
    }
    if ((uVar3 & param_2) == 0) {
      uVar9 = param_2 * 0x400 | 0x200;
    }
    uVar2 = -uVar2;
  }
  uVar9 = uVar9 | uVar7 + uVar2 & 0xffff;
LAB_019d6b08:
  *param_1 = 0;
  param_1[1] = uVar9;
  return;
}

