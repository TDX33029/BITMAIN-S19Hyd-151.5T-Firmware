// FUN_01794460 @ 01794460 size=1336 calls_out=3 calls_in=3
// strings: 

uint FUN_01794460(int param_1,uint param_2,uint *param_3,uint param_4,uint param_5,int param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  int extraout_r1;
  short sVar8;
  short sVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  short *psVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  bool bVar21;
  ulonglong uVar22;
  uint local_38;
  int local_34;
  uint local_2c;
  
  if (param_2 == 0) {
    local_38 = 0xb;
  }
  else {
    if (param_2 < 5) {
      return 0xffffffff;
    }
    local_38 = param_2;
    if (0xc < param_2) {
      return 0xffffffd4;
    }
  }
  uVar6 = 0x20U - LZCOUNT(param_4);
  if (0x21U - LZCOUNT(param_5) <= 0x20U - LZCOUNT(param_4)) {
    uVar6 = 0x21U - LZCOUNT(param_5);
  }
  if (local_38 < uVar6) {
    return 0xffffffff;
  }
  if (param_6 == 0) {
    sVar8 = 1;
  }
  else {
    sVar8 = -1;
  }
  iVar2 = -local_38;
  uVar18 = iVar2 + 0x3e;
  uVar22 = FUN_01846088(0,0x40000000,param_4,0);
  iVar19 = 1 << (local_38 & 0xff);
  puVar20 = param_3 + -1;
  psVar15 = (short *)(param_1 + -2);
  uVar7 = 0;
  uVar6 = param_4 >> (local_38 & 0xff);
  local_2c = 0;
  local_34 = 0;
  psVar5 = psVar15;
  iVar16 = iVar19;
  puVar11 = puVar20;
  do {
    while( true ) {
      puVar11 = puVar11 + 1;
      uVar12 = *puVar11;
      if (uVar12 == param_4) {
        return 0;
      }
      if (uVar12 != 0) break;
      sVar9 = 0;
LAB_017945a8:
      uVar7 = uVar7 + 1;
      psVar5 = psVar5 + 1;
      *psVar5 = sVar9;
      if (param_5 < uVar7) goto LAB_01794694;
    }
    if (uVar12 <= uVar6) {
      iVar16 = iVar16 + -1;
      sVar9 = sVar8;
      goto LAB_017945a8;
    }
    lVar1 = (uVar22 & 0xffffffff) * (ulonglong)uVar12;
    uVar17 = (uint)lVar1;
    uVar13 = uVar12 * (int)(uVar22 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20);
    uVar3 = uVar17 >> (uVar18 & 0xff) | uVar13 << (0x20 - uVar18 & 0xff) |
            uVar13 >> (iVar2 + 0x1eU & 0xff);
    iVar10 = (int)(short)uVar3;
    uVar12 = uVar3 << (uVar18 & 0xff);
    if (iVar10 < 8) {
      uVar13 = uVar13 - (((uVar13 >> (uVar18 & 0xff)) << (uVar18 & 0xff) |
                          uVar3 << (iVar2 + 0x1eU & 0xff) | uVar3 >> (0x20 - uVar18 & 0xff)) +
                        (uint)(uVar17 < uVar12));
      uVar14 = *(uint *)(&DAT_004502fc + uVar3 * 4);
      uVar4 = uVar14 << (10 - local_38 & 0xff) | uVar14 >> (local_38 - 10 & 0xff);
      iVar10 = (int)(short)((short)uVar3 +
                           (ushort)(uVar4 <= uVar13 &&
                                   (uint)(uVar17 - uVar12 <= uVar14 << (0x2a - local_38 & 0xff)) <=
                                   uVar4 - uVar13));
    }
    iVar16 = iVar16 - iVar10;
    psVar5 = psVar5 + 1;
    *psVar5 = (short)iVar10;
    if (local_34 < iVar10) {
      local_34 = iVar10;
      local_2c = uVar7;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 <= param_5);
LAB_01794694:
  sVar9 = *(short *)(param_1 + local_2c * 2);
  if (-iVar16 < (int)sVar9 >> 1) {
    *(short *)(param_1 + local_2c * 2) = sVar9 + (short)iVar16;
    return local_38;
  }
  iVar16 = 0;
  uVar7 = param_4 * 3 >> (local_38 + 1 & 0xff);
  psVar5 = psVar15;
  puVar11 = puVar20;
  do {
    puVar11 = puVar11 + 1;
    uVar12 = *puVar11;
    if (uVar12 == 0) {
      sVar9 = 0;
    }
    else {
      sVar9 = -2;
      if (uVar6 < uVar12) {
        if (uVar12 <= uVar7) {
          iVar16 = iVar16 + 1;
          param_4 = param_4 - uVar12;
          sVar9 = 1;
        }
      }
      else {
        param_4 = param_4 - uVar12;
        iVar16 = iVar16 + 1;
        sVar9 = sVar8;
      }
    }
    psVar5 = psVar5 + 1;
    *psVar5 = sVar9;
  } while (param_3 + param_5 != puVar11);
  local_2c = iVar19 - iVar16;
  if (local_2c == 0) {
    return local_38;
  }
  uVar6 = FUN_018462e8(param_4,local_2c);
  if (uVar7 < uVar6) {
    uVar6 = FUN_018462e8(param_4 * 3,local_2c * 2);
    iVar10 = param_5 * 2;
    puVar11 = param_3;
    psVar5 = psVar15;
    do {
      psVar5 = psVar5 + 1;
      if ((*psVar5 == -2) && (*puVar11 <= uVar6)) {
        iVar16 = iVar16 + 1;
        param_4 = param_4 - *puVar11;
        *psVar5 = 1;
      }
      puVar11 = puVar11 + 1;
    } while (psVar5 != (short *)(param_1 + iVar10));
    local_2c = iVar19 - iVar16;
    if (param_5 + 1 == iVar16) goto LAB_0179494c;
    if (param_4 == 0) {
      if (local_2c == 0) {
        return local_38;
      }
      goto LAB_01794904;
    }
  }
  else {
    if (param_5 + 1 == iVar16) {
LAB_0179494c:
      uVar6 = 0;
      uVar7 = 0;
      uVar18 = 0;
      do {
        puVar20 = puVar20 + 1;
        if (uVar7 < *puVar20) {
          uVar7 = *puVar20;
          uVar6 = uVar18;
        }
        bVar21 = param_5 != uVar18;
        uVar18 = uVar18 + 1;
      } while (bVar21);
      *(short *)(param_1 + uVar6 * 2) = *(short *)(param_1 + uVar6 * 2) + (short)local_2c;
      return local_38;
    }
    if (param_4 == 0) {
LAB_01794904:
      iVar19 = 0;
      do {
        sVar8 = *(short *)(param_1 + iVar19 * 2);
        if (0 < sVar8) {
          local_2c = local_2c - 1;
          *(short *)(param_1 + iVar19 * 2) = sVar8 + 1;
          if (local_2c == 0) {
            return local_38;
          }
        }
        FUN_0184606c(iVar19 + 1,param_5 + 1);
        iVar19 = extraout_r1;
      } while( true );
    }
    iVar10 = param_5 << 1;
  }
  uVar13 = iVar2 + 0x1e;
  uVar3 = 0x20 - uVar18;
  iVar19 = 1 << (0x3d - local_38 & 0xff);
  uVar12 = iVar19 - 1;
  uVar6 = local_2c << (uVar18 & 0xff);
  uVar7 = (1 << (0x1d - local_38 & 0xff) | 1U >> (local_38 - 0x1d & 0xff)) - (uint)(iVar19 == 0);
  uVar22 = FUN_01846088(uVar6 + uVar12,
                        uVar7 + (local_2c << (uVar13 & 0xff) | local_2c >> (uVar3 & 0xff)) +
                        (uint)CARRY4(uVar6,uVar12),param_4,0);
  do {
    psVar15 = psVar15 + 1;
    if (*psVar15 == -2) {
      uVar17 = uVar12 >> (uVar18 & 0xff);
      uVar6 = uVar7 << (uVar3 & 0xff);
      uVar4 = uVar7 >> (uVar13 & 0xff);
      lVar1 = (uVar22 & 0xffffffff) * (ulonglong)*param_3;
      uVar14 = (uint)lVar1;
      bVar21 = CARRY4(uVar14,uVar12);
      uVar12 = uVar14 + uVar12;
      uVar7 = *param_3 * (int)(uVar22 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) + uVar7 +
              (uint)bVar21;
      iVar19 = (uVar12 >> (uVar18 & 0xff) | uVar7 << (uVar3 & 0xff) | uVar7 >> (uVar13 & 0xff)) -
               (uVar17 | uVar6 | uVar4);
      if (iVar19 == 0) {
        return 0xffffffff;
      }
      *psVar15 = (short)iVar19;
    }
    param_3 = param_3 + 1;
  } while (psVar15 != (short *)(param_1 + iVar10));
  return local_38;
}

