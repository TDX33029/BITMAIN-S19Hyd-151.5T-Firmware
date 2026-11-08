// FUN_016d0414 @ 016d0414 size=1704 calls_out=4 calls_in=3
// strings: 

void FUN_016d0414(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint extraout_r2;
  int iVar13;
  uint extraout_r3;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  undefined1 *local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 local_68 [8];
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar14 = param_2[1];
  uVar20 = param_2[2];
  if (uVar14 <= uVar20) goto switchD_016d0634_default;
  uVar17 = uVar20 + 1;
  iVar13 = *param_2;
  param_2[2] = uVar17;
  uVar16 = (uint)*(byte *)(*param_2 + uVar20);
  bVar1 = *(byte *)(iVar13 + uVar20);
  local_88 = &DAT_8000001d;
  local_84 = CONCAT31(local_84._1_3_,0x12);
  uVar12 = uVar16;
  if (uVar16 != 0x17) {
    uVar12 = 0x18;
  }
  if (((~(uint)bVar1 & 0x1f) == 0) || (uVar14 <= uVar17)) goto switchD_016d0634_default;
  bVar2 = *(byte *)(iVar13 + uVar17);
  uVar17 = (uint)bVar2;
  uVar21 = uVar20 + 2;
  param_2[2] = uVar21;
  if ((char)bVar2 < '\0') {
    switch(uVar17) {
    case 0x81:
      if (uVar14 <= uVar21) goto switchD_016d0634_default;
      bVar2 = *(byte *)(iVar13 + uVar21);
      uVar17 = (uint)bVar2;
      uVar21 = uVar20 + 3;
      param_2[2] = uVar21;
      if ((uint)(int)(char)bVar2 < 0x80000000) goto switchD_016d0634_default;
      goto LAB_016d048c;
    case 0x82:
      if (uVar14 <= uVar21) goto switchD_016d0634_default;
      uVar17 = uVar20 + 3;
      param_2[2] = uVar17;
      if (uVar14 <= uVar17) goto switchD_016d0634_default;
      cVar6 = *(char *)(iVar13 + uVar21);
      uVar21 = uVar20 + 4;
      uVar7 = *(undefined1 *)(iVar13 + uVar17);
      param_2[2] = uVar21;
      if (cVar6 == '\0') goto switchD_016d0634_default;
      uVar17 = (uint)CONCAT11(cVar6,uVar7);
      break;
    case 0x83:
      if (uVar14 <= uVar21) goto switchD_016d0634_default;
      bVar2 = *(byte *)(iVar13 + uVar21);
      uVar17 = uVar20 + 3;
      param_2[2] = uVar17;
      if (uVar14 <= uVar17) goto switchD_016d0634_default;
      uVar11 = uVar20 + 4;
      param_2[2] = uVar11;
      if (uVar14 <= uVar11) goto switchD_016d0634_default;
      bVar3 = *(byte *)(iVar13 + uVar17);
      uVar21 = uVar20 + 5;
      bVar4 = *(byte *)(iVar13 + uVar11);
      param_2[2] = uVar21;
      if (bVar2 == 0) goto switchD_016d0634_default;
      uVar17 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4;
      break;
    case 0x84:
      if (uVar14 <= uVar21) goto switchD_016d0634_default;
      bVar2 = *(byte *)(iVar13 + uVar21);
      uVar17 = uVar20 + 3;
      param_2[2] = uVar17;
      if (uVar14 <= uVar17) goto switchD_016d0634_default;
      bVar3 = *(byte *)(iVar13 + uVar17);
      uVar17 = uVar20 + 4;
      param_2[2] = uVar17;
      if (uVar14 <= uVar17) goto switchD_016d0634_default;
      uVar21 = uVar20 + 5;
      param_2[2] = uVar21;
      if (uVar14 <= uVar21) goto switchD_016d0634_default;
      bVar4 = *(byte *)(iVar13 + uVar21);
      uVar21 = uVar20 + 6;
      bVar5 = *(byte *)(iVar13 + uVar17);
      param_2[2] = uVar21;
      if (bVar2 == 0) goto switchD_016d0634_default;
      uVar17 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar5 << 8 | (uint)bVar4;
      break;
    default:
      goto switchD_016d0634_default;
    }
    if (0xfffe < uVar17) goto switchD_016d0634_default;
  }
LAB_016d048c:
  if (((CARRY4(uVar21,uVar17)) || (uVar14 < uVar21 + uVar17)) ||
     (param_2[2] = uVar21 + uVar17, uVar12 != bVar1)) {
switchD_016d0634_default:
    local_84 = CONCAT31(local_84._1_3_,0x12);
    local_88 = &DAT_8000001d;
    local_68[0] = 0x80000000;
    *param_1 = (int)&DAT_8000001d;
    param_1[1] = local_84;
    param_1[2] = iStack_80;
    param_1[3] = iStack_7c;
    param_1[4] = local_78;
    param_1[5] = iStack_74;
    param_1[6] = iStack_70;
    param_1[7] = iStack_6c;
    FUN_016c3a1c(local_68);
    return;
  }
  pbVar15 = (byte *)(iVar13 + uVar21);
  iVar22 = -0x7fffffff;
  uVar14 = (uint)(uVar16 == 0x17);
  if (uVar14 == 0) {
    uVar10 = CONCAT44(iVar13,uVar12);
    if (uVar17 == 0) goto LAB_016d0704;
    uVar14 = *pbVar15 - 0x30;
    uVar10 = CONCAT44(iVar13,uVar14) & 0xffffffff000000ff;
    if ((9 < (uVar14 & 0xff)) ||
       (uVar10 = CONCAT44(iVar13,uVar14) & 0xffffffff000000ff, uVar17 == 1)) goto LAB_016d0704;
    uVar20 = pbVar15[1] - 0x30;
    uVar10 = CONCAT44(uVar20,uVar20) & 0xffffffffff;
    if (9 < (uVar20 & 0xff)) goto LAB_016d0704;
    uVar12 = uVar20 + uVar14 * 10;
    uVar14 = uVar12;
    uVar10 = CONCAT44(uVar20,uVar12) & 0xff000000ff;
    if ((99 < (uVar12 & 0xff)) || (uVar10 = CONCAT44(uVar20,uVar12) & 0xff000000ff, uVar17 < 3))
    goto LAB_016d0704;
    uVar14 = pbVar15[2] - 0x30;
    uVar10 = CONCAT44(uVar14,uVar12) & 0xff000000ff;
    if ((9 < (uVar14 & 0xff)) || (uVar10 = CONCAT44(uVar14,uVar12) & 0xff000000ff, uVar17 == 3))
    goto LAB_016d0704;
    uVar20 = pbVar15[3] - 0x30;
    uVar10 = CONCAT44(uVar20,uVar12) & 0xffffffff000000ff;
    if (9 < (uVar20 & 0xff)) goto LAB_016d0704;
    uVar14 = uVar20 + uVar14 * 10;
    uVar10 = CONCAT44(uVar14,uVar12) & 0xff000000ff;
    if (99 < (uVar14 & 0xff)) goto LAB_016d0704;
    uVar20 = 4;
    uVar8 = (ulonglong)(uVar12 & 0xff) * 100;
  }
  else {
    uVar10 = CONCAT44(iVar13,uVar12);
    if (uVar17 == 0) goto LAB_016d0704;
    uVar14 = *pbVar15 - 0x30;
    uVar10 = CONCAT44(iVar13,uVar14) & 0xffffffff000000ff;
    if ((9 < (uVar14 & 0xff)) ||
       (uVar10 = CONCAT44(iVar13,uVar14) & 0xffffffff000000ff, uVar17 == 1)) goto LAB_016d0704;
    uVar20 = pbVar15[1] - 0x30;
    uVar10 = CONCAT44(uVar20,uVar20) & 0xffffffffff;
    if (9 < (uVar20 & 0xff)) goto LAB_016d0704;
    uVar14 = uVar20 + uVar14 * 10;
    uVar10 = CONCAT44(uVar14,uVar20) & 0xffffffffff;
    if (99 < (uVar14 & 0xff)) goto LAB_016d0704;
    uVar20 = 2000;
    if (0x31 < (uVar14 & 0xff)) {
      uVar20 = 0x76c;
    }
    uVar8 = (ulonglong)uVar20;
    uVar20 = 2;
  }
  lVar9 = uVar8 + (uVar14 & 0xff);
  iVar13 = (int)lVar9;
  uVar10 = uVar8;
  if (uVar17 <= uVar20) goto LAB_016d0704;
  uVar16 = pbVar15[uVar20] - 0x30;
  uVar21 = uVar16 & 0xff;
  bVar23 = 8 < uVar21;
  uVar12 = uVar21;
  if (uVar21 < 10) {
    uVar12 = uVar20 | 1;
  }
  if (uVar21 < 10) {
    bVar23 = uVar17 <= uVar12;
  }
  uVar10 = CONCAT44(uVar12,uVar16);
  if (bVar23) goto LAB_016d0704;
  uVar12 = pbVar15[uVar12] - 0x30;
  uVar10 = CONCAT44(uVar12,uVar16);
  if (9 < (uVar12 & 0xff)) goto LAB_016d0704;
  uVar12 = uVar12 + uVar16 * 10;
  uVar10 = CONCAT44(uVar12 - 0xd,uVar12) & 0xffffffffff;
  if ((uVar12 - 0xd & 0xff) < 0xf4) goto LAB_016d0704;
  uVar12 = uVar12 & 0xff;
  if (0xc < uVar12) {
LAB_016d0a84:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018af388);
  }
  uVar11 = 0x1f;
  uVar16 = 1;
  uVar21 = 0x15aa;
  if ((1 << uVar12 & 0x15aaU) == 0) {
    if ((1 << uVar12 & 0xa50U) == 0) {
      if (uVar12 != 2) goto LAB_016d0a84;
      if ((uVar14 & 3) == 0) {
        FUN_01846088(iVar13,0,400,0);
        lVar9 = lVar9 * 0xc28f5c29;
        uVar18 = (uint)lVar9;
        uVar14 = (uint)CARRY4((uint)uVar8,uVar14 & 0xff) * -0x3d70a3d7 +
                 iVar13 * -0x70a3d70b + (int)((ulonglong)lVar9 >> 0x20);
        uVar19 = uVar18 << 0x1e | uVar14 >> 2;
        uVar11 = 0x1d;
        uVar16 = extraout_r2;
        uVar21 = extraout_r3;
        if ((0x28f5c27 < uVar19 &&
             (uint)((uVar14 * 0x40000000 | uVar18 >> 2) < 0xf5c28f5d) <= 0x28f5c28 - uVar19) ||
           (extraout_r2 == 0 && extraout_r3 == 0)) goto LAB_016d05b4;
      }
      uVar11 = 0x1c;
    }
    else {
      uVar11 = 0x1e;
    }
  }
LAB_016d05b4:
  uVar14 = uVar20 + 2;
  if (uVar14 < uVar17) {
    uVar14 = pbVar15[uVar14] - 0x30;
    uVar16 = uVar14 & 0xff;
    bVar23 = 8 < uVar16;
    if (uVar16 < 10) {
      uVar16 = uVar20 + 3;
      bVar23 = uVar17 <= uVar16;
    }
    if (!bVar23) {
      uVar16 = pbVar15[uVar16] - 0x30;
      uVar21 = uVar16 & 0xff;
      if (uVar21 < 10) {
        uVar14 = uVar16 + uVar14 * 10;
        uVar16 = uVar14 & 0xff;
        if (((uVar16 != 0) && (uVar16 <= uVar11)) && (uVar20 + 4 < uVar17)) {
          uVar14 = pbVar15[uVar20 + 4] - 0x30 & 0xff;
          bVar23 = 8 < uVar14;
          if (uVar14 < 10) {
            uVar14 = uVar20 + 5;
            bVar23 = uVar17 <= uVar14;
          }
          if (!bVar23) {
            uVar14 = pbVar15[uVar14] - 0x30;
            uVar21 = uVar14 & 0xff;
            if (uVar21 < 10) {
              uVar11 = uVar14 + (pbVar15[uVar20 + 4] - 0x30) * 10;
              uVar14 = uVar11 & 0xff;
              bVar23 = 0x16 < uVar14;
              if (uVar14 < 0x18) {
                uVar11 = uVar20 + 6;
                bVar23 = uVar17 <= uVar11;
              }
              if (!bVar23) {
                uVar21 = pbVar15[uVar11] - 0x30 & 0xff;
                bVar23 = 8 < uVar21;
                if (uVar21 < 10) {
                  uVar21 = uVar20 + 7;
                  bVar23 = uVar17 <= uVar21;
                }
                if ((!bVar23) && (uVar21 = pbVar15[uVar21] - 0x30, (uVar21 & 0xff) < 10)) {
                  uVar11 = uVar21 + (pbVar15[uVar11] - 0x30) * 10 & 0xff;
                  bVar23 = 0x3a < uVar11;
                  if (uVar11 < 0x3c) {
                    uVar21 = uVar20 | 8;
                    bVar23 = uVar17 <= uVar21;
                  }
                  if (!bVar23) {
                    uVar21 = pbVar15[uVar21] - 0x30;
                    uVar18 = uVar21 & 0xff;
                    bVar23 = 8 < uVar18;
                    if (uVar18 < 10) {
                      uVar18 = uVar20 | 9;
                      bVar23 = uVar17 <= uVar18;
                    }
                    if (!bVar23) {
                      uVar19 = pbVar15[uVar18] - 0x30 & 0xff;
                      if (uVar19 < 10) {
                        uVar21 = (pbVar15[uVar18] - 0x30) + uVar21 * 10 & 0xff;
                        bVar23 = 0x3a < uVar21;
                        if (uVar21 < 0x3c) {
                          uVar19 = uVar20 + 10;
                          bVar23 = uVar17 <= uVar19;
                        }
                        if ((!bVar23) && (pbVar15[uVar19] == 0x5a)) {
                          FUN_016ca9ec(&local_48,uVar14,iVar13,0,uVar12,0,uVar16,0,uVar14,0,uVar11,0
                                       ,uVar21,0);
                          if (local_48 == -0x7fffffd3) {
                            if (uVar20 + 0xb == uVar17) {
                              param_1[2] = local_40;
                              param_1[3] = local_3c;
                              *param_1 = -0x7fffffd3;
                              FUN_016c3a1c(&local_88);
                              return;
                            }
                            *param_1 = (int)local_88;
                            param_1[1] = local_84;
                            param_1[2] = iStack_80;
                            param_1[3] = iStack_7c;
                            param_1[4] = local_78;
                            param_1[5] = iStack_74;
                            param_1[6] = iStack_70;
                            param_1[7] = iStack_6c;
                            return;
                          }
                          uVar14 = local_40;
                          uVar16 = local_3c;
                          uVar21 = local_44;
                          iVar22 = local_48;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar10 = CONCAT44(uVar21,uVar16);
LAB_016d0704:
  param_1[1] = (int)(uVar10 >> 0x20);
  *param_1 = iVar22;
  param_1[2] = uVar14;
  param_1[3] = (int)uVar10;
  param_1[4] = local_38;
  param_1[5] = local_34;
  param_1[6] = local_30;
  param_1[7] = local_2c;
  FUN_016c3a1c(&local_88);
  return;
}

