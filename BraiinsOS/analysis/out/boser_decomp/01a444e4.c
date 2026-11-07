// FUN_01a444e4 @ 01a444e4 size=2128 calls_out=3 calls_in=1
// strings: 

void FUN_01a444e4(int *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  short sVar4;
  byte *pbVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *extraout_r2;
  byte *extraout_r2_00;
  undefined1 unaff_r5;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  undefined1 unaff_r9;
  undefined2 uVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  uint6 uVar26;
  uint6 uVar27;
  byte *local_4c;
  undefined1 local_44;
  undefined2 local_40;
  undefined1 local_3c;
  undefined1 *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  
  if (param_3 < 3) goto LAB_01a44ba0;
  local_30 = param_2 + param_3;
  uVar11 = 0;
  pbVar5 = param_2;
  do {
    local_34 = param_2;
    if (local_30 == pbVar5) goto LAB_01a445fc;
    bVar17 = uVar11 == 0;
    uVar11 = 1;
    pbVar5 = pbVar5 + (byte)(&DAT_0052cffe)[*pbVar5];
  } while (bVar17);
  if (pbVar5 == local_30) {
LAB_01a445fc:
    uVar26 = FUN_01a44d40(&local_34);
    unaff_r5 = (undefined1)(uVar26 >> 0x20);
    if ((uVar26 & 1) != 0) goto LAB_01a44ba0;
    uVar27 = FUN_01a44d40(&local_34);
    if ((uVar27 & 1) != 0) goto LAB_01a44ba0;
    uVar19 = FUN_01a44d40(&local_34);
    if ((uVar19 & 1) != 0) goto LAB_01a44ba0;
    uVar20 = FUN_01a44d40(&local_34);
    if (((uVar20 & 1) != 0) || (local_34 == local_30)) goto LAB_01a44ba0;
    uVar11 = (uint)*local_34;
    pbVar5 = local_34 + 1;
    if (0x7fffffff < (uint)(int)(char)*local_34) {
      if (uVar11 < 0xe0) {
        uVar11 = local_34[1] & 0x3f | (uVar11 & 0x1f) << 6;
        pbVar5 = local_34 + 2;
      }
      else {
        uVar8 = local_34[2] & 0x3f | (local_34[1] & 0x3f) << 6;
        if (uVar11 < 0xf0) {
          uVar11 = uVar8 | (uVar11 & 0x1f) << 0xc;
          pbVar5 = local_34 + 3;
        }
        else {
          uVar11 = local_34[3] & 0x3f | uVar8 << 6 | (uVar11 & 7) << 0x12;
          pbVar5 = local_34 + 4;
        }
      }
    }
    local_34 = pbVar5;
    if (uVar11 != 0x2d) goto LAB_01a44ba0;
    uVar21 = FUN_01a44d40(&local_34);
    unaff_r9 = (undefined1)(uVar21 >> 0x20);
    if ((uVar21 & 1) != 0) goto LAB_01a44ba0;
    uVar22 = FUN_01a44d40(&local_34);
    if (((uVar22 & 1) != 0) || (iVar12 = FUN_00734c78(&local_34), iVar12 != 0x2d))
    goto LAB_01a44ba0;
    uVar23 = FUN_01a44d40(&local_34);
    if ((uVar23 & 1) != 0) goto LAB_01a44ba0;
    uVar24 = FUN_01a44d40(&local_34);
    if ((uVar24 & 1) != 0) goto LAB_01a44ba0;
    uVar8 = (int)(uVar22 >> 0x20) + (int)(uVar21 >> 0x20) * 10;
    local_3c = (undefined1)uVar8;
    if ((uVar8 - 0xd & 0xff) < 0xf4) goto LAB_01a44ba0;
    uVar11 = (uint)(uVar20 >> 0x20) & 0xff;
    iVar12 = (int)(uVar24 >> 0x20) + (int)(uVar23 >> 0x20) * 10;
    local_44 = (undefined1)iVar12;
    uVar16 = (short)((ushort)(uVar26 >> 0x20) & 0xff) * 1000 +
             (short)((ushort)(uVar27 >> 0x20) & 0xff) * 100 + ((uint)(uVar19 >> 0x20) & 0xff) * 10 +
             uVar11;
    local_40 = (undefined2)uVar16;
    if ((uVar16 & 3) == 0) {
      if (((uVar16 * 0x5c29 & 0xffff) >> 2 | uVar16 * 0x170a4000 & 0xffff) < 0x290) {
        uVar8 = uVar8 & 0xff;
        uVar15 = 0x1f;
        if (uVar8 < 0xc) {
          uVar11 = 1;
          if ((1 << uVar8 & 0xa50U) == 0) {
            if ((uVar8 == 2) &&
               (uVar15 = 0x1c,
               ((uVar16 * 0x5c29 & 0xffff) >> 4 | uVar16 * 0x5c29000 & 0xffff) < 0xa4)) {
              uVar15 = 0x1d;
            }
          }
          else {
            uVar15 = 0x1e;
          }
        }
      }
      else {
        uVar8 = uVar8 - 2 & 0xff;
        uVar15 = 0x1f;
        if (uVar8 < 10) {
          puVar6 = &DAT_0053952a;
          goto LAB_01a44aec;
        }
      }
    }
    else {
      uVar8 = uVar8 - 2 & 0xff;
      uVar15 = 0x1f;
      if (uVar8 < 10) {
        puVar6 = &DAT_00539520;
LAB_01a44aec:
        uVar15 = (uint)(byte)puVar6[uVar8];
      }
    }
    uVar10 = (undefined1)uVar11;
    if (uVar15 <= (iVar12 - 1U & 0xff)) goto LAB_01a44ba0;
    iVar12 = 0;
    sVar14 = 1;
    sVar4 = 1;
    if (local_34 != local_30) goto LAB_01a445a8;
    uVar13 = 2;
    pbVar5 = local_30;
    goto LAB_01a447dc;
  }
  uVar8 = (uint)*pbVar5;
  if (0x7fffffff < (uint)(int)(char)*pbVar5) {
    uVar11 = pbVar5[1] & 0x3f;
    if (uVar8 < 0xe0) {
      uVar8 = uVar11 | (uVar8 & 0x1f) << 6;
    }
    else {
      uVar11 = pbVar5[2] & 0x3f | uVar11 << 6;
      if (uVar8 < 0xf0) {
        uVar8 = uVar11 | (uVar8 & 0x1f) << 0xc;
      }
      else {
        uVar8 = pbVar5[3] & 0x3f | uVar11 << 6 | (uVar8 & 7) << 0x12;
      }
    }
  }
  if (uVar8 != 0x3a) goto LAB_01a445fc;
  iVar12 = 1;
  sVar4 = 0;
LAB_01a445a8:
  sVar14 = sVar4;
  bVar1 = *local_34;
  pbVar5 = (byte *)(uint)bVar1;
  pbVar9 = pbVar5;
  if (0x7fffffff < (uint)(int)(char)bVar1) {
    if (pbVar5 < &DAT_000000e0) {
      pbVar9 = (byte *)(local_34[1] & 0x3f | ((uint)pbVar5 & 0x1f) << 6);
    }
    else {
      uVar11 = local_34[2] & 0x3f;
      uVar8 = uVar11 | (local_34[1] & 0x3f) << 6;
      if (pbVar5 < &DAT_000000f0) {
        pbVar9 = (byte *)(uVar8 | ((uint)pbVar5 & 0x1f) << 0xc);
      }
      else {
        uVar11 = local_34[3] & 0x3f;
        pbVar9 = (byte *)(uVar11 | uVar8 << 6 | ((uint)pbVar5 & 7) << 0x12);
      }
    }
  }
  uVar10 = (undefined1)uVar11;
  pbVar3 = local_34;
  if (iVar12 == 0) {
    if ((pbVar9 != &DAT_00000020) && (pbVar9 != &DAT_00000054 && pbVar9 != &DAT_00000074)) {
      uVar13 = 2;
      iVar12 = 0;
      goto LAB_01a447dc;
    }
    pbVar3 = local_34 + 1;
    if (((0x7fffffff < (uint)(int)(char)bVar1) && (pbVar3 = local_34 + 2, (byte *)0xdf < pbVar5)) &&
       (pbVar3 = local_34 + 3, (byte *)0xef < pbVar5)) {
      pbVar3 = local_34 + 4;
    }
  }
  local_34 = pbVar3;
  uVar19 = FUN_01a44d40(&local_34);
  if ((uVar19 & 1) != 0) goto LAB_01a44ba0;
  uVar20 = FUN_01a44d40(&local_34);
  if (((uVar20 & 1) != 0) || (local_34 == local_30)) goto LAB_01a44ba0;
  uVar11 = (uint)*local_34;
  pbVar5 = local_34 + 1;
  if (0x7fffffff < (uint)(int)(char)*local_34) {
    if (uVar11 < 0xe0) {
      uVar11 = local_34[1] & 0x3f | (uVar11 & 0x1f) << 6;
      pbVar5 = local_34 + 2;
    }
    else {
      uVar8 = local_34[2] & 0x3f | (local_34[1] & 0x3f) << 6;
      if (uVar11 < 0xf0) {
        uVar11 = uVar8 | (uVar11 & 0x1f) << 0xc;
        pbVar5 = local_34 + 3;
      }
      else {
        uVar11 = local_34[3] & 0x3f | uVar8 << 6 | (uVar11 & 7) << 0x12;
        pbVar5 = local_34 + 4;
      }
    }
  }
  local_34 = pbVar5;
  if (uVar11 != 0x3a) goto LAB_01a44ba0;
  uVar21 = FUN_01a44d40(&local_34);
  if ((uVar21 & 1) != 0) goto LAB_01a44ba0;
  uVar22 = FUN_01a44d40(&local_34);
  if (((uVar22 & 1) != 0) || (iVar12 = FUN_00734c78(&local_34), iVar12 != 0x3a)) goto LAB_01a44ba0;
  uVar23 = FUN_01a44d40(&local_34);
  if ((uVar23 & 1) != 0) goto LAB_01a44ba0;
  uVar24 = FUN_01a44d40(&local_34);
  pbVar5 = local_34;
  if ((uVar24 & 1) != 0) goto LAB_01a44ba0;
  local_4c = local_30;
  local_28 = local_30;
  local_2c = local_34;
  iVar12 = FUN_00734c78(&local_2c);
  local_38 = (undefined1 *)0x0;
  pbVar9 = extraout_r2;
  if (iVar12 == 0x2e) {
    FUN_00734c78(&local_34);
    uVar11 = (int)local_30 - (int)local_34;
    if (uVar11 == 0) goto LAB_01a44ba0;
    uVar8 = 0;
    local_38 = (undefined1 *)0x0;
    pbVar5 = local_34;
    do {
      pbVar9 = pbVar5 + 1;
      uVar16 = *pbVar5 - 0x30 & 0xff;
      if (9 < uVar16) goto LAB_01a44b28;
      if (uVar8 < 9) {
        iVar12 = 1;
        if (uVar8 != 8) {
          iVar7 = 10;
          for (uVar15 = 8 - uVar8; ((uVar15 & 1) == 0 || (iVar12 = iVar7 * iVar12, uVar15 != 1));
              uVar15 = uVar15 >> 1) {
            iVar7 = iVar7 * iVar7;
          }
        }
        local_38 = local_38 + iVar12 * uVar16;
      }
      uVar8 = uVar8 + 1;
      pbVar5 = pbVar9;
    } while (pbVar9 != local_30);
    uVar8 = uVar11;
LAB_01a44b28:
    if (uVar8 == 0) goto LAB_01a44ba0;
    uVar25 = FUN_01a44dec(local_34,uVar11);
    pbVar5 = (byte *)uVar25;
    local_4c = pbVar5 + (int)((ulonglong)uVar25 >> 0x20);
    pbVar9 = extraout_r2_00;
    local_34 = pbVar5;
    local_30 = local_4c;
  }
  uVar11 = (int)(uVar20 >> 0x20) + (int)(uVar19 >> 0x20) * 10;
  unaff_r9 = (undefined1)uVar11;
  uVar11 = uVar11 & 0xff;
  bVar18 = 0x17 < uVar11;
  bVar17 = uVar11 == 0x18;
  uVar10 = SUB41(pbVar5,0);
  local_2c = pbVar9;
  if (uVar11 < 0x19) {
    uVar11 = (int)(uVar22 >> 0x20) + (int)(uVar21 >> 0x20) * 10;
    uVar10 = (undefined1)uVar11;
    uVar11 = uVar11 & 0xff;
    bVar18 = 0x3a < uVar11;
    bVar17 = uVar11 == 0x3b;
    local_2c = pbVar5;
  }
  if (bVar18 && !bVar17) goto LAB_01a44ba0;
  uVar11 = (int)(uVar24 >> 0x20) + (int)(uVar23 >> 0x20) * 10;
  unaff_r5 = (undefined1)uVar11;
  pbVar5 = (byte *)(uVar11 & 0xff);
  bVar18 = (byte *)0x3b < pbVar5;
  bVar17 = pbVar5 == &DAT_0000003c;
  if (pbVar5 < &DAT_0000003d) {
    pbVar5 = &DAT_3b9ac9ff;
    bVar18 = &DAT_3b9ac9fe < local_38;
    bVar17 = local_38 == &DAT_3b9ac9ff;
  }
  if (bVar18 && !bVar17) goto LAB_01a44ba0;
  uVar13 = 2;
  uVar2 = 2;
  if (sVar14 == 0) {
LAB_01a44bf4:
    uVar13 = uVar2;
    iVar12 = 1;
  }
  else {
    local_28 = local_4c;
    pbVar5 = (byte *)FUN_00734c78(&local_2c);
    iVar12 = 1;
    if ((int)pbVar5 < 0x5a) {
      if (pbVar5 != &DAT_0000002b) {
        if (pbVar5 != &DAT_0000002d) goto LAB_01a44ba0;
        iVar12 = 0xffff;
      }
      FUN_00734c78(&local_34);
      uVar19 = FUN_01a44d40(&local_34);
      if ((uVar19 & 1) != 0) goto LAB_01a44ba0;
      uVar20 = FUN_01a44d40(&local_34);
      if (((uVar20 & 1) != 0) || (iVar7 = FUN_00734c78(&local_34), iVar7 != 0x3a))
      goto LAB_01a44ba0;
      uVar21 = FUN_01a44d40(&local_34);
      uVar11 = (uint)(uVar21 >> 0x20);
      if ((uVar21 & 1) != 0) goto LAB_01a44ba0;
      uVar21 = FUN_01a44d40(&local_34);
      if (((uVar21 & 1) != 0) ||
         (pbVar5 = (byte *)((((uVar11 & 0xff) * 4 + (uVar11 & 0xff)) * 2 +
                             (((uint)(uVar20 >> 0x20) & 0xff) + ((uint)(uVar19 >> 0x20) & 0xff) * 10
                             ) * 0x3c + ((uint)(uVar21 >> 0x20) & 0xff)) * iVar12),
         0xb40 < ((uint)(pbVar5 + 0x5a0) & 0xffff))) goto LAB_01a44ba0;
      iVar12 = 1;
      uVar13 = 1;
    }
    else {
      if (pbVar5 == (byte *)0x5a || pbVar5 == (byte *)0x7a) {
        pbVar5 = (byte *)FUN_00734c78(&local_34);
        uVar2 = 0;
        goto LAB_01a44bf4;
      }
      if (pbVar5 != &DAT_00110000) goto LAB_01a44ba0;
    }
  }
LAB_01a447dc:
  if ((local_34 == local_30) ||
     (((bVar1 = *local_34, 0x7fffffff < (uint)(int)(char)bVar1 && (0xef < bVar1)) &&
      ((undefined1 *)
       ((local_34[2] & 0x3f) << 6 | (local_34[1] & 0x3f) << 0xc | local_34[3] & 0x3f |
       (bVar1 & 7) << 0x12) == &DAT_00110000)))) {
    *(undefined1 *)((int)param_1 + 0x15) = local_44;
    *(undefined1 *)(param_1 + 5) = local_3c;
    *(short *)((int)param_1 + 0xe) = (short)pbVar5;
    *param_1 = iVar12;
    *(undefined2 *)((int)param_1 + 0x12) = local_40;
    *(short *)(param_1 + 4) = sVar14;
    *(undefined2 *)(param_1 + 3) = uVar13;
    *(undefined1 *)((int)param_1 + 10) = unaff_r5;
    *(undefined1 *)((int)param_1 + 9) = uVar10;
    *(undefined1 *)(param_1 + 2) = unaff_r9;
    param_1[1] = (int)local_38;
    return;
  }
LAB_01a44ba0:
  *param_1 = 2;
  return;
}

