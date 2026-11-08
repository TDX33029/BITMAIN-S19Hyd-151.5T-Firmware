// FUN_01b82788 @ 01b82788 size=1152 calls_out=3 calls_in=3
// strings: 

uint FUN_01b82788(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short *psVar7;
  uint uVar8;
  int extraout_r1;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint local_40;
  short *local_38;
  short *local_30;
  int local_2c;
  
  if (param_2 == 0) {
    param_2 = 0xb;
  }
  else {
    if (param_2 < 5) {
      return 0xffffffff;
    }
    if (0xc < param_2) {
      return 0xffffffd4;
    }
  }
  uVar4 = 0x20U - LZCOUNT(param_4);
  if (0x21U - LZCOUNT(param_5) <= 0x20U - LZCOUNT(param_4)) {
    uVar4 = 0x21U - LZCOUNT(param_5);
  }
  if (param_2 < uVar4) {
    return 0xffffffff;
  }
  if (param_6 == 0) {
    iVar12 = 1;
  }
  else {
    iVar12 = -1;
  }
  iVar3 = -param_2;
  uVar14 = iVar3 + 0x3e;
  uVar21 = FUN_01bf0ff0(0,0x40000000,param_4,0);
  iVar15 = 0;
  iVar1 = 1 << (param_2 & 0xff);
  uVar4 = param_4 >> (param_2 & 0xff);
  local_30 = (short *)(param_1 + -2);
  uVar19 = 0;
  local_40 = 0;
  local_38 = local_30;
  local_2c = iVar1;
  do {
    uVar13 = *(uint *)(param_3 + uVar19 * 4);
    if (uVar13 == param_4) {
      return 0;
    }
    if (uVar13 == 0) {
      iVar10 = 0;
    }
    else if (uVar4 < uVar13) {
      lVar2 = (uVar21 & 0xffffffff) * (ulonglong)uVar13;
      uVar16 = (uint)lVar2;
      uVar18 = uVar13 * (int)(uVar21 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20);
      uVar13 = uVar16 >> (uVar14 & 0xff) | uVar18 << (0x20 - uVar14 & 0xff) |
               uVar18 >> (iVar3 + 0x1eU & 0xff);
      iVar10 = (int)(short)uVar13;
      if (iVar10 < 8) {
        uVar17 = uVar13 << (uVar14 & 0xff);
        uVar18 = uVar18 - (((uVar18 >> (uVar14 & 0xff)) << (uVar14 & 0xff) |
                            uVar13 << (iVar3 + 0x1eU & 0xff) | uVar13 >> (0x20 - uVar14 & 0xff)) +
                          (uint)(uVar16 < uVar17));
        uVar8 = *(uint *)(&DAT_00561c34 + uVar13 * 4);
        uVar5 = uVar8 << (10 - param_2 & 0xff) | uVar8 >> (param_2 - 10 & 0xff);
        iVar10 = (int)(short)((short)uVar13 +
                             (ushort)(uVar5 <= uVar18 &&
                                     (uint)(uVar16 - uVar17 <= uVar8 << (0x2a - param_2 & 0xff)) <=
                                     uVar5 - uVar18));
      }
      if (iVar15 < iVar10) {
        iVar15 = iVar10;
        local_40 = uVar19;
      }
      local_2c = local_2c - iVar10;
    }
    else {
      local_2c = local_2c + -1;
      iVar10 = iVar12;
    }
    uVar19 = uVar19 + 1;
    local_38 = local_38 + 1;
    *local_38 = (short)iVar10;
  } while (uVar19 <= param_5);
  iVar15 = local_40 * 2;
  uVar19 = (uint)*(short *)(param_1 + iVar15);
  if (-local_2c < (int)uVar19 >> 1) {
    sVar6 = (short)local_2c;
  }
  else {
    puVar9 = (uint *)(param_3 + -4);
    uVar13 = param_4 * 3 >> (param_2 + 1 & 0xff);
    iVar15 = 0;
    psVar7 = local_30;
    do {
      puVar9 = puVar9 + 1;
      uVar19 = *puVar9;
      sVar6 = 0;
      if (uVar19 != 0) {
        if (uVar4 < uVar19) {
          if (uVar13 < uVar19) {
            sVar6 = -2;
          }
          else {
            param_4 = param_4 - uVar19;
            iVar15 = iVar15 + 1;
            sVar6 = 1;
          }
        }
        else {
          param_4 = param_4 - uVar19;
          iVar15 = iVar15 + 1;
          sVar6 = (short)iVar12;
        }
      }
      psVar7 = psVar7 + 1;
      *psVar7 = sVar6;
    } while (puVar9 != (uint *)(param_3 + param_5 * 4));
    uVar19 = iVar1 - iVar15;
    if (uVar19 == 0) {
      return param_2;
    }
    uVar4 = FUN_01bf1250(param_4,uVar19);
    if (uVar13 < uVar4) {
      uVar4 = FUN_01bf1250(param_4 * 3,uVar19 * 2);
      uVar19 = 0;
      psVar7 = local_30;
      do {
        psVar7 = psVar7 + 1;
        if ((*psVar7 == -2) && (uVar13 = *(uint *)(param_3 + uVar19 * 4), uVar13 <= uVar4)) {
          param_4 = param_4 - uVar13;
          iVar15 = iVar15 + 1;
          *psVar7 = 1;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 <= param_5);
      uVar19 = iVar1 - iVar15;
    }
    if (param_5 + 1 != iVar15) {
      iVar12 = 0;
      if (param_4 == 0) {
        while (uVar19 != 0) {
          sVar6 = *(short *)(param_1 + iVar12 * 2);
          if (0 < sVar6) {
            *(short *)(param_1 + iVar12 * 2) = sVar6 + 1;
            uVar19 = uVar19 - 1;
          }
          FUN_01bf0fd4(iVar12 + 1,param_5 + 1);
          iVar12 = extraout_r1;
        }
        return param_2;
      }
      uVar18 = iVar3 + 0x1e;
      uVar17 = 0x20 - uVar14;
      iVar12 = 1 << (0x3d - param_2 & 0xff);
      uVar13 = iVar12 - 1;
      uVar4 = uVar19 << (uVar14 & 0xff);
      uVar16 = (1 << (0x1d - param_2 & 0xff) | 1U >> (param_2 - 0x1d & 0xff)) - (uint)(iVar12 == 0);
      uVar21 = FUN_01bf0ff0(uVar4 + uVar13,
                            uVar16 + (uVar19 << (uVar18 & 0xff) | uVar19 >> (uVar17 & 0xff)) +
                            (uint)CARRY4(uVar4,uVar13),param_4);
      uVar4 = 0;
      do {
        local_30 = local_30 + 1;
        uVar19 = uVar13;
        if (*local_30 == -2) {
          uVar11 = *(uint *)(param_3 + uVar4 * 4);
          lVar2 = (uVar21 & 0xffffffff) * (ulonglong)uVar11;
          uVar20 = (uint)lVar2;
          uVar19 = uVar20 + uVar13;
          uVar5 = uVar16 << (uVar17 & 0xff);
          uVar8 = uVar16 >> (uVar18 & 0xff);
          uVar16 = uVar11 * (int)(uVar21 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) + uVar16 +
                   (uint)CARRY4(uVar20,uVar13);
          iVar12 = (uVar19 >> (uVar14 & 0xff) | uVar16 << (uVar17 & 0xff) |
                   uVar16 >> (uVar18 & 0xff)) - (uVar13 >> (uVar14 & 0xff) | uVar5 | uVar8);
          if (iVar12 == 0) {
            return 0xffffffff;
          }
          *local_30 = (short)iVar12;
        }
        uVar4 = uVar4 + 1;
        uVar13 = uVar19;
      } while (uVar4 <= param_5);
      return param_2;
    }
    uVar14 = 0;
    uVar4 = 0;
    uVar13 = 0;
    do {
      uVar18 = *(uint *)(param_3 + uVar13 * 4);
      if (uVar4 < uVar18) {
        uVar14 = uVar13;
        uVar4 = uVar18;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 <= param_5);
    iVar15 = uVar14 * 2;
    sVar6 = *(short *)(param_1 + iVar15);
  }
  *(short *)(param_1 + iVar15) = (short)uVar19 + sVar6;
  return param_2;
}

