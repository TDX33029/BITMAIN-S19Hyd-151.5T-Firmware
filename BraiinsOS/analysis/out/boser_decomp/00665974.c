// FUN_00665974 @ 00665974 size=2796 calls_out=4 calls_in=4
// strings: 

void FUN_00665974(uint *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte *pbVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  byte bVar21;
  byte *pbVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  bool bVar26;
  uint local_30;
  byte *local_2c;
  uint local_28;
  
  if (0x7fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00664730();
  }
  local_30 = param_3;
  if (param_3 == 0) {
    local_28 = 0;
    pbVar2 = &DAT_00000001;
  }
  else {
    pbVar2 = (byte *)FUN_01298504(param_3,1);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
    uVar20 = 0;
    if (param_3 < 0x10) {
      pbVar15 = pbVar2;
    }
    else {
      uVar11 = 0;
      local_28 = param_3 & 0x7ffffff0;
      do {
        pbVar15 = param_2 + uVar11;
        bVar24 = *pbVar15;
        bVar10 = pbVar15[1];
        bVar9 = pbVar15[2];
        bVar8 = pbVar15[3];
        uVar20 = (~(int)(char)bVar24 & 0xffU) >> 7;
        bVar7 = pbVar15[4];
        if ((uint)(int)(char)bVar10 < 0x80000000) {
          uVar20 = ((int)(char)bVar24 >> 7) + 2;
        }
        if ((uint)(int)(char)bVar9 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        bVar6 = pbVar15[5];
        if ((uint)(int)(char)bVar8 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        if ((uint)(int)(char)bVar7 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        if ((uint)(int)(char)bVar6 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        bVar25 = pbVar15[6];
        bVar23 = pbVar15[7];
        bVar12 = pbVar15[8];
        if ((uint)(int)(char)bVar25 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        bVar17 = pbVar15[9];
        if ((uint)(int)(char)bVar23 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        bVar14 = pbVar15[10];
        if ((uint)(int)(char)bVar12 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        bVar5 = pbVar15[0xb];
        if ((uint)(int)(char)bVar17 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        bVar1 = pbVar15[0xc];
        if ((uint)(int)(char)bVar14 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        bVar13 = pbVar15[0xd];
        if ((uint)(int)(char)bVar5 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        bVar21 = pbVar15[0xe];
        if ((uint)(int)(char)bVar1 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        bVar19 = pbVar15[0xf];
        if ((uint)(int)(char)bVar13 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        if ((uint)(int)(char)bVar21 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        if ((uint)(int)(char)bVar19 < 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        if ((uVar20 & 0xff) != 0x10) {
          uVar20 = uVar11;
          goto LAB_00665cd0;
        }
        if (bVar24 - 0x61 < 0x1a) {
          bVar24 = bVar24 ^ 0x20;
        }
        pbVar15 = pbVar2 + uVar11;
        *pbVar15 = bVar24;
        if (bVar19 - 0x61 < 0x1a) {
          bVar19 = bVar19 ^ 0x20;
        }
        if (bVar21 - 0x61 < 0x1a) {
          bVar21 = bVar21 ^ 0x20;
        }
        if (bVar13 - 0x61 < 0x1a) {
          bVar13 = bVar13 ^ 0x20;
        }
        pbVar15[0xd] = bVar13;
        pbVar15[0xf] = bVar19;
        if (bVar1 - 0x61 < 0x1a) {
          bVar1 = bVar1 ^ 0x20;
        }
        pbVar15[0xc] = bVar1;
        if (bVar5 - 0x61 < 0x1a) {
          bVar5 = bVar5 ^ 0x20;
        }
        if (bVar14 - 0x61 < 0x1a) {
          bVar14 = bVar14 ^ 0x20;
        }
        if (bVar17 - 0x61 < 0x1a) {
          bVar17 = bVar17 ^ 0x20;
        }
        pbVar15[0xb] = bVar5;
        if (bVar12 - 0x61 < 0x1a) {
          bVar12 = bVar12 ^ 0x20;
        }
        if (bVar23 - 0x61 < 0x1a) {
          bVar23 = bVar23 ^ 0x20;
        }
        if (bVar25 - 0x61 < 0x1a) {
          bVar25 = bVar25 ^ 0x20;
        }
        param_3 = param_3 - 0x10;
        if (bVar6 - 0x61 < 0x1a) {
          bVar6 = bVar6 ^ 0x20;
        }
        pbVar15[5] = bVar6;
        pbVar15[0xe] = bVar21;
        pbVar15[10] = bVar14;
        pbVar15[9] = bVar17;
        if (bVar7 - 0x61 < 0x1a) {
          bVar7 = bVar7 ^ 0x20;
        }
        pbVar15[4] = bVar7;
        pbVar15[8] = bVar12;
        pbVar15[7] = bVar23;
        pbVar15[6] = bVar25;
        if (bVar8 - 0x61 < 0x1a) {
          bVar8 = bVar8 ^ 0x20;
        }
        pbVar15[3] = bVar8;
        if (bVar9 - 0x61 < 0x1a) {
          bVar9 = bVar9 ^ 0x20;
        }
        pbVar15[2] = bVar9;
        if (bVar10 - 0x61 < 0x1a) {
          bVar10 = bVar10 ^ 0x20;
        }
        pbVar15[1] = bVar10;
        uVar11 = uVar11 + 0x10;
      } while (0xf < param_3);
      if (param_3 == 0) goto LAB_00665d0c;
      uVar20 = local_28;
LAB_00665cd0:
      param_2 = param_2 + uVar11;
      pbVar15 = pbVar2 + uVar11;
    }
    local_28 = param_3 + uVar20;
    do {
      bVar24 = *param_2;
      if ((char)bVar24 < '\0') {
        pbVar15 = param_2;
        local_2c = pbVar2;
        local_28 = uVar20;
        goto LAB_00665d68;
      }
      param_2 = param_2 + 1;
      if (bVar24 - 0x61 < 0x1a) {
        bVar24 = bVar24 ^ 0x20;
      }
      *pbVar15 = bVar24;
      uVar20 = uVar20 + 1;
      param_3 = param_3 - 1;
      pbVar15 = pbVar15 + 1;
    } while (param_3 != 0);
  }
LAB_00665d0c:
  local_2c = pbVar2;
LAB_00665d18:
  *param_1 = local_30;
  param_1[1] = (uint)local_2c;
  param_1[2] = local_28;
  return;
LAB_00665d68:
  do {
    uVar11 = local_28;
    pbVar22 = pbVar15 + 1;
    uVar20 = (uint)*pbVar15;
    if ((char)*pbVar15 < '\0') {
      if (uVar20 < 0xe0) {
        uVar20 = pbVar15[1] & 0x3f | (uVar20 & 0x1f) << 6;
        pbVar22 = pbVar15 + 2;
      }
      else {
        uVar18 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
        if (uVar20 < 0xf0) {
          uVar20 = uVar18 | (uVar20 & 0x1f) << 0xc;
          pbVar22 = pbVar15 + 3;
        }
        else {
          pbVar22 = pbVar15 + 4;
          uVar20 = pbVar15[3] & 0x3f | uVar18 << 6 | (uVar20 & 7) << 0x12;
        }
      }
      if (uVar20 < 0x80) goto LAB_00665d7c;
      iVar3 = 0x309;
      if (uVar20 < 0x1fa8) {
        iVar3 = 0;
      }
      if (*(uint *)(&UNK_00428b90 + (iVar3 + 0x184) * 8) <= uVar20) {
        iVar3 = iVar3 + 0x184;
      }
      if (*(uint *)(&UNK_00428b90 + (iVar3 + 0xc2) * 8) <= uVar20) {
        iVar3 = iVar3 + 0xc2;
      }
      if (*(uint *)(&UNK_00428b90 + (iVar3 + 0x61) * 8) <= uVar20) {
        iVar3 = iVar3 + 0x61;
      }
      if (*(uint *)(&UNK_00428b90 + (iVar3 + 0x31) * 8) <= uVar20) {
        iVar3 = iVar3 + 0x31;
      }
      if (*(uint *)(&UNK_00428b90 + (iVar3 + 0x18) * 8) <= uVar20) {
        iVar3 = iVar3 + 0x18;
      }
      if (*(uint *)(&UNK_00428b90 + (iVar3 + 0xc) * 8) <= uVar20) {
        iVar3 = iVar3 + 0xc;
      }
      if (*(uint *)(&UNK_00428b90 + (iVar3 + 6) * 8) <= uVar20) {
        iVar3 = iVar3 + 6;
      }
      if (*(uint *)(&UNK_00428b90 + (iVar3 + 3) * 8) <= uVar20) {
        iVar3 = iVar3 + 3;
      }
      if (*(uint *)(&UNK_00428b90 + (iVar3 + 2) * 8) <= uVar20) {
        iVar3 = iVar3 + 2;
      }
      if (*(uint *)(&UNK_00428b90 + (iVar3 + 1) * 8) <= uVar20) {
        iVar3 = iVar3 + 1;
      }
      if (*(uint *)(&UNK_00428b90 + iVar3 * 8) != uVar20) {
        bVar26 = uVar20 < 0x80;
LAB_00666008:
        uVar18 = 2;
        if ((0x7ff < uVar20) && (uVar18 = 4, uVar20 < 0x10000)) {
          uVar18 = 3;
        }
        goto LAB_00665d98;
      }
      uVar20 = *(uint *)(&UNK_00428b94 + iVar3 * 8);
      if (0xffef07ff < (uVar20 ^ 0xd800) - 0x110000) {
LAB_00665ff4:
        bVar26 = uVar20 < 0x80;
        uVar18 = 1;
        if (!bVar26) goto LAB_00666008;
        goto LAB_00665d98;
      }
      iVar3 = (uVar20 & 0x3fffff) * 0xc;
      uVar20 = *(uint *)(&UNK_0042bc20 + iVar3);
      uVar18 = *(uint *)(&UNK_0042bc24 + iVar3);
      if (uVar18 == 0) goto LAB_00665ff4;
      uVar4 = *(uint *)(&UNK_0042bc28 + iVar3);
      uVar16 = 1;
      bVar24 = (byte)uVar20;
      bVar10 = (byte)uVar18;
      if (uVar4 == 0) {
        if (0x7f < uVar20) {
          uVar16 = 2;
        }
        if ((0x7ff < uVar20) && (uVar16 = 4, uVar20 < 0x10000)) {
          uVar16 = 3;
        }
        if (local_30 - local_28 < uVar16) {
          FUN_00664634(&local_30,local_28,uVar16);
          pbVar2 = local_2c;
        }
        pbVar2 = pbVar2 + local_28;
        if (uVar20 < 0x80) {
          *pbVar2 = bVar24;
        }
        else {
          bVar24 = bVar24 & 0x3f | 0x80;
          bVar9 = (byte)(uVar20 >> 6);
          if (uVar20 < 0x800) {
            bVar9 = bVar9 | 0xc0;
            pbVar2[1] = bVar24;
          }
          else {
            bVar8 = bVar9 & 0x3f | 0x80;
            bVar9 = (byte)(uVar20 >> 0xc);
            if (uVar20 >> 0x10 != 0) {
              pbVar2[3] = bVar24;
              pbVar2[2] = bVar8;
              pbVar2[1] = bVar9 & 0x3f | 0x80;
              *pbVar2 = (byte)(uVar20 >> 0x12) | 0xf0;
              goto LAB_006662d8;
            }
            pbVar2[1] = bVar8;
            bVar9 = bVar9 | 0xe0;
            pbVar2[2] = bVar24;
          }
          *pbVar2 = bVar9;
        }
LAB_006662d8:
        iVar3 = uVar16 + uVar11;
        uVar20 = 1;
        if (0x7f < uVar18) {
          uVar20 = 2;
        }
        if ((0x7ff < uVar18) && (uVar20 = 4, uVar18 < 0x10000)) {
          uVar20 = 3;
        }
        local_28 = iVar3;
        if (local_30 - iVar3 < uVar20) {
          FUN_00664634(&local_30,iVar3,uVar20);
        }
        pbVar15 = local_2c + local_28;
        pbVar2 = local_2c;
        if (uVar18 < 0x80) {
          *pbVar15 = bVar10;
          local_28 = uVar20 + iVar3;
        }
        else {
          bVar24 = bVar10 & 0x3f | 0x80;
          bVar10 = (byte)(uVar18 >> 6);
          if (uVar18 < 0x800) {
            bVar10 = bVar10 | 0xc0;
            pbVar15[1] = bVar24;
          }
          else {
            bVar9 = bVar10 & 0x3f | 0x80;
            bVar10 = (byte)(uVar18 >> 0xc);
            if (uVar18 >> 0x10 != 0) {
              pbVar15[3] = bVar24;
              pbVar15[2] = bVar9;
              local_28 = uVar20 + iVar3;
              pbVar15[1] = bVar10 & 0x3f | 0x80;
              *pbVar15 = (byte)(uVar18 >> 0x12) | 0xf0;
              goto LAB_00665d5c;
            }
            pbVar15[1] = bVar9;
            bVar10 = bVar10 | 0xe0;
            pbVar15[2] = bVar24;
          }
          *pbVar15 = bVar10;
          local_28 = uVar20 + iVar3;
        }
      }
      else {
        if (0x7f < uVar20) {
          uVar16 = 2;
        }
        if ((0x7ff < uVar20) && (uVar16 = 4, uVar20 < 0x10000)) {
          uVar16 = 3;
        }
        if (local_30 - local_28 < uVar16) {
          FUN_00664634(&local_30,local_28,uVar16);
          pbVar2 = local_2c;
        }
        pbVar2 = pbVar2 + local_28;
        if (uVar20 < 0x80) {
          *pbVar2 = bVar24;
        }
        else {
          bVar24 = bVar24 & 0x3f | 0x80;
          bVar9 = (byte)(uVar20 >> 6);
          if (uVar20 < 0x800) {
            bVar9 = bVar9 | 0xc0;
            pbVar2[1] = bVar24;
          }
          else {
            bVar8 = bVar9 & 0x3f | 0x80;
            bVar9 = (byte)(uVar20 >> 0xc);
            if (uVar20 >> 0x10 != 0) {
              pbVar2[3] = bVar24;
              pbVar2[2] = bVar8;
              pbVar2[1] = bVar9 & 0x3f | 0x80;
              *pbVar2 = (byte)(uVar20 >> 0x12) | 0xf0;
              goto LAB_0066611c;
            }
            pbVar2[1] = bVar8;
            bVar9 = bVar9 | 0xe0;
            pbVar2[2] = bVar24;
          }
          *pbVar2 = bVar9;
        }
LAB_0066611c:
        iVar3 = uVar16 + uVar11;
        uVar20 = 1;
        if (0x7f < uVar18) {
          uVar20 = 2;
        }
        if ((0x7ff < uVar18) && (uVar20 = 4, uVar18 < 0x10000)) {
          uVar20 = 3;
        }
        local_28 = iVar3;
        if (local_30 - iVar3 < uVar20) {
          FUN_00664634(&local_30,iVar3,uVar20);
        }
        pbVar2 = local_2c + local_28;
        if (uVar18 < 0x80) {
          *pbVar2 = bVar10;
        }
        else {
          bVar24 = bVar10 & 0x3f | 0x80;
          bVar10 = (byte)(uVar18 >> 6);
          if (uVar18 < 0x800) {
            pbVar2[1] = bVar24;
            *pbVar2 = bVar10 | 0xc0;
          }
          else {
            bVar10 = bVar10 & 0x3f | 0x80;
            bVar9 = (byte)(uVar18 >> 0xc);
            if (uVar18 >> 0x10 == 0) {
              pbVar2[1] = bVar10;
              pbVar2[2] = bVar24;
              *pbVar2 = bVar9 | 0xe0;
            }
            else {
              pbVar2[3] = bVar24;
              pbVar2[2] = bVar10;
              pbVar2[1] = bVar9 & 0x3f | 0x80;
              *pbVar2 = (byte)(uVar18 >> 0x12) | 0xf0;
            }
          }
        }
        iVar3 = uVar20 + iVar3;
        uVar20 = 1;
        if (0x7f < uVar4) {
          uVar20 = 2;
        }
        if ((0x7ff < uVar4) && (uVar20 = 4, uVar4 < 0x10000)) {
          uVar20 = 3;
        }
        local_28 = iVar3;
        if (local_30 - iVar3 < uVar20) {
          FUN_00664634(&local_30,iVar3,uVar20);
        }
        pbVar15 = local_2c + local_28;
        pbVar2 = local_2c;
        if (uVar4 < 0x80) {
LAB_00666224:
          *pbVar15 = (byte)uVar4;
          local_28 = uVar20 + iVar3;
        }
        else {
          bVar24 = (byte)uVar4 & 0x3f | 0x80;
          bVar10 = (byte)(uVar4 >> 6);
          if (uVar4 < 0x800) {
            bVar10 = bVar10 | 0xc0;
            pbVar15[1] = bVar24;
          }
          else {
            bVar9 = bVar10 & 0x3f | 0x80;
            bVar10 = (byte)(uVar4 >> 0xc);
            if (uVar4 >> 0x10 != 0) {
              uVar4 = uVar4 >> 0x12 | 0xfffffff0;
              pbVar15[3] = bVar24;
              pbVar15[2] = bVar9;
              pbVar15[1] = bVar10 & 0x3f | 0x80;
              goto LAB_00666224;
            }
            pbVar15[2] = bVar24;
            bVar10 = bVar10 | 0xe0;
            pbVar15[1] = bVar9;
          }
          *pbVar15 = bVar10;
          local_28 = uVar20 + iVar3;
        }
      }
    }
    else {
LAB_00665d7c:
      bVar26 = false;
      uVar18 = 1;
      if (uVar20 - 0x61 < 0x1a) {
        uVar20 = uVar20 ^ 0x20;
      }
      if (uVar20 < 0x80) {
        bVar26 = true;
      }
LAB_00665d98:
      if (local_30 - local_28 < uVar18) {
        FUN_00664634(&local_30,local_28,uVar18);
        pbVar2 = local_2c;
      }
      pbVar15 = pbVar2 + local_28;
      if (!bVar26) {
        bVar24 = (byte)uVar20 & 0x3f | 0x80;
        bVar10 = (byte)(uVar20 >> 6);
        if (uVar20 < 0x800) {
          bVar10 = bVar10 | 0xc0;
          pbVar15[1] = bVar24;
LAB_00665e44:
          *pbVar15 = bVar10;
        }
        else {
          bVar9 = bVar10 & 0x3f | 0x80;
          bVar10 = (byte)(uVar20 >> 0xc);
          if (uVar20 >> 0x10 == 0) {
            pbVar15[1] = bVar9;
            bVar10 = bVar10 | 0xe0;
            pbVar15[2] = bVar24;
            goto LAB_00665e44;
          }
          pbVar15[3] = bVar24;
          pbVar15[2] = bVar9;
          pbVar15[1] = bVar10 & 0x3f | 0x80;
          *pbVar15 = (byte)(uVar20 >> 0x12) | 0xf0;
        }
        local_28 = uVar18 + uVar11;
      }
      else {
        local_28 = uVar18 + uVar11;
        *pbVar15 = (byte)uVar20;
      }
    }
LAB_00665d5c:
    pbVar15 = pbVar22;
  } while (pbVar22 != param_2 + param_3);
  goto LAB_00665d18;
}

