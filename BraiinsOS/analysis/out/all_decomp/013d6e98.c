// FUN_013d6e98 @ 013d6e98 size=1272 calls_out=8 calls_in=1
// strings: 

void FUN_013d6e98(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  iVar15 = *param_2;
  if (*(int *)(iVar15 + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894be8);
  }
  *(undefined4 *)(iVar15 + 0x4c) = 0;
  *(undefined4 *)(iVar15 + 0x40) = 0xffffffff;
  piVar12 = (int *)(iVar15 + 0x50);
  iVar14 = param_2[2];
  while (*piVar12 != iVar14) {
    uVar4 = FUN_013d2518(param_2);
    if ((4 < uVar4 - 9) && (uVar4 != 0x20)) {
      if (uVar4 < 0x80) break;
      uVar8 = uVar4 >> 8;
      if (uVar8 < 0x20) {
        if (uVar8 == 0) {
          bVar1 = (&DAT_0041951b)[uVar4 & 0xff] & 1;
joined_r0x013d6eec:
          if (bVar1 == 0) break;
        }
        else if ((uVar8 != 0x16) || (uVar4 != 0x1680)) break;
      }
      else {
        if (uVar8 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar4 & 0xff] & 2;
          goto joined_r0x013d6eec;
        }
        if (uVar8 != 0x30 || uVar4 != 0x3000) break;
      }
    }
    FUN_013d2d20(param_2);
  }
  local_40 = *piVar12;
  uStack_3c = *(undefined4 *)(iVar15 + 0x54);
  uStack_38 = *(undefined4 *)(iVar15 + 0x58);
  if (local_40 == iVar14) {
    local_40 = *piVar12;
    uStack_3c = *(undefined4 *)(iVar15 + 0x54);
    uStack_38 = *(undefined4 *)(iVar15 + 0x58);
    local_34 = local_40;
    uStack_30 = uStack_3c;
    local_2c = uStack_38;
  }
  else {
    do {
      uVar4 = FUN_013d2518(param_2);
      if ((uVar4 < 0x30) || (uVar4 = FUN_013d2518(param_2), 0x39 < uVar4)) break;
      uVar8 = FUN_013d2518(param_2);
      iVar11 = *(int *)(iVar15 + 0x4c);
      uVar4 = 1;
      if (0x7f < uVar8) {
        uVar4 = 2;
      }
      if ((0x7ff < uVar8) && (uVar4 = 4, uVar8 < 0x10000)) {
        uVar4 = 3;
      }
      if ((uint)(*(int *)(iVar15 + 0x44) - iVar11) < uVar4) {
        FUN_01401968((int *)(iVar15 + 0x44),iVar11,uVar4,1,1);
        pbVar7 = (byte *)(*(int *)(iVar15 + 0x48) + *(int *)(iVar15 + 0x4c));
        if (0x7f < uVar8) goto LAB_013d7060;
LAB_013d7018:
        *pbVar7 = (byte)uVar8;
      }
      else {
        pbVar7 = (byte *)(*(int *)(iVar15 + 0x48) + iVar11);
        if (uVar8 < 0x80) goto LAB_013d7018;
LAB_013d7060:
        bVar1 = (byte)uVar8 & 0x3f | 0x80;
        bVar2 = (byte)(uVar8 >> 6);
        if (uVar8 < 0x800) {
          pbVar7[1] = bVar1;
          *pbVar7 = bVar2 | 0xc0;
        }
        else {
          bVar2 = bVar2 & 0x3f | 0x80;
          bVar3 = (byte)(uVar8 >> 0xc);
          if (uVar8 >> 0x10 == 0) {
            pbVar7[1] = bVar2;
            pbVar7[2] = bVar1;
            *pbVar7 = bVar3 | 0xe0;
          }
          else {
            pbVar7[3] = bVar1;
            pbVar7[2] = bVar2;
            pbVar7[1] = bVar3 & 0x3f | 0x80;
            *pbVar7 = (byte)(uVar8 >> 0x12) | 0xf0;
          }
        }
      }
      *(uint *)(iVar15 + 0x4c) = uVar4 + iVar11;
      iVar11 = FUN_013d2d20(param_2);
      if (iVar11 != 0) {
        FUN_013d2168(param_2);
      }
    } while (*piVar12 != iVar14);
    local_2c = *(undefined4 *)(iVar15 + 0x58);
    uStack_30 = *(undefined4 *)(iVar15 + 0x54);
    local_34 = *piVar12;
    iVar11 = local_34;
    while (iVar11 != iVar14) {
      uVar4 = FUN_013d2518(param_2);
      if ((4 < uVar4 - 9) && (uVar4 != 0x20)) {
        if (uVar4 < 0x80) break;
        uVar8 = uVar4 >> 8;
        if (uVar8 < 0x20) {
          if (uVar8 == 0) {
            bVar1 = (&DAT_0041951b)[uVar4 & 0xff] & 1;
joined_r0x013d7240:
            if (bVar1 == 0) break;
          }
          else if ((uVar8 != 0x16) || (uVar4 != 0x1680)) break;
        }
        else {
          if (uVar8 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar4 & 0xff] & 2;
            goto joined_r0x013d7240;
          }
          if (uVar8 != 0x30 || uVar4 != 0x3000) break;
        }
      }
      iVar11 = FUN_013d2d20(param_2);
      if (iVar11 != 0) {
        FUN_013d2168(param_2);
      }
      iVar11 = *piVar12;
    }
  }
  uVar4 = *(uint *)(iVar15 + 0x4c);
  if (uVar4 == 0) {
    if (-1 < iVar14) {
      iVar11 = param_2[1];
      if (iVar14 == 0) {
        iVar6 = 0;
        iVar13 = 1;
      }
      else {
        iVar13 = thunk_FUN_016d4a50(iVar14);
        if (iVar13 == 0) goto LAB_013d738c;
        iVar6 = iVar14;
      }
      FUN_016dd1aa(iVar13,iVar11,iVar14);
      param_1[10] = local_40;
      param_1[0xb] = uStack_3c;
      param_1[0xc] = uStack_38;
      param_1[0xd] = local_34;
      param_1[0xe] = uStack_30;
      param_1[0xf] = local_2c;
      param_1[7] = iVar6;
      param_1[8] = iVar13;
      param_1[9] = iVar14;
      uVar5 = 5;
      goto LAB_013d7368;
    }
  }
  else {
    pbVar7 = *(byte **)(iVar15 + 0x48);
    bVar1 = *pbVar7;
    if ((uVar4 != 1) || (bVar1 != 0x2b && bVar1 != 0x2d)) {
      if (bVar1 == 0x2b) {
        pbVar7 = pbVar7 + 1;
        uVar4 = uVar4 - 1;
      }
      if (uVar4 < 9) {
        uVar8 = 0;
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          bVar1 = *pbVar7;
          if (9 < bVar1 - 0x30) goto LAB_013d72b8;
          pbVar7 = pbVar7 + 1;
          uVar8 = (bVar1 - 0x30) + uVar8 * 10;
        }
LAB_013d7184:
        *param_1 = 0x22;
        param_1[1] = uVar8;
        goto LAB_013d736c;
      }
      uVar8 = 0;
      while( true ) {
        if (uVar4 == 0) goto LAB_013d7184;
        uVar9 = (uint)((ulonglong)uVar8 * 10);
        if ((int)((ulonglong)uVar8 * 10 >> 0x20) != 0) break;
        uVar10 = *pbVar7 - 0x30;
        uVar8 = uVar10 + uVar9;
        if ((9 < uVar10) || (uVar4 = uVar4 - 1, pbVar7 = pbVar7 + 1, CARRY4(uVar10,uVar9))) break;
      }
    }
LAB_013d72b8:
    if (-1 < iVar14) {
      iVar11 = param_2[1];
      if (iVar14 == 0) {
        iVar6 = 1;
        iVar13 = 0;
      }
      else {
        iVar6 = thunk_FUN_016d4a50(iVar14);
        if (iVar6 == 0) {
LAB_013d738c:
          uVar5 = 1;
          goto LAB_013d72c4;
        }
        iVar13 = iVar14;
      }
      FUN_016dd1aa(iVar6,iVar11,iVar14);
      param_1[10] = local_40;
      param_1[0xb] = uStack_3c;
      param_1[0xc] = uStack_38;
      param_1[0xd] = local_34;
      param_1[0xe] = uStack_30;
      param_1[0xf] = local_2c;
      param_1[7] = iVar13;
      param_1[8] = iVar6;
      param_1[9] = iVar14;
      uVar5 = 6;
LAB_013d7368:
      *param_1 = uVar5;
LAB_013d736c:
      *(int *)(iVar15 + 0x40) = *(int *)(iVar15 + 0x40) + 1;
      return;
    }
  }
  uVar5 = 0;
LAB_013d72c4:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar5,iVar14);
}

