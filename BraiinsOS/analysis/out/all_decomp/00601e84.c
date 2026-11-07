// FUN_00601e84 @ 00601e84 size=2560 calls_out=5 calls_in=2
// strings: 

void FUN_00601e84(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  byte *pbVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uint local_40;
  byte *local_3c;
  uint local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (0x7fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  local_40 = param_3;
  if (param_3 == 0) {
    local_38 = 0;
    pbVar3 = &DAT_00000001;
  }
  else {
    pbVar3 = (byte *)thunk_FUN_016d4a50(param_3);
    if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
    uVar19 = 0;
    if (param_3 < 0x10) {
      pbVar10 = pbVar3;
    }
    else {
      local_38 = param_3 & 0x7ffffff0;
      uVar19 = 0;
      do {
        pbVar10 = param_2 + uVar19;
        bVar21 = *pbVar10;
        bVar9 = pbVar10[1];
        bVar8 = pbVar10[2];
        bVar7 = pbVar10[3];
        uVar13 = (~(int)(char)bVar21 & 0xffU) >> 7;
        bVar6 = pbVar10[4];
        if ((uint)(int)(char)bVar9 < 0x80000000) {
          uVar13 = ((int)(char)bVar21 >> 7) + 2;
        }
        if ((uint)(int)(char)bVar8 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        if ((uint)(int)(char)bVar7 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        if ((uint)(int)(char)bVar6 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        bVar5 = pbVar10[5];
        bVar22 = pbVar10[6];
        if ((uint)(int)(char)bVar5 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        bVar23 = pbVar10[7];
        bVar11 = pbVar10[8];
        if ((uint)(int)(char)bVar22 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        bVar18 = pbVar10[9];
        if ((uint)(int)(char)bVar23 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        bVar12 = pbVar10[10];
        if ((uint)(int)(char)bVar11 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        bVar16 = pbVar10[0xb];
        if ((uint)(int)(char)bVar18 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        bVar2 = pbVar10[0xc];
        if ((uint)(int)(char)bVar12 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        bVar24 = pbVar10[0xd];
        if ((uint)(int)(char)bVar16 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        bVar25 = pbVar10[0xe];
        if ((uint)(int)(char)bVar2 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        bVar4 = pbVar10[0xf];
        if ((uint)(int)(char)bVar24 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        if ((uint)(int)(char)bVar25 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        if ((uint)(int)(char)bVar4 < 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        if ((uVar13 & 0xff) != 0x10) {
          uVar13 = uVar19;
          goto LAB_006021d4;
        }
        if (bVar21 - 0x61 < 0x1a) {
          bVar21 = bVar21 ^ 0x20;
        }
        pbVar10 = pbVar3 + uVar19;
        *pbVar10 = bVar21;
        if (bVar4 - 0x61 < 0x1a) {
          bVar4 = bVar4 ^ 0x20;
        }
        pbVar10[0xf] = bVar4;
        if (bVar25 - 0x61 < 0x1a) {
          bVar25 = bVar25 ^ 0x20;
        }
        if (bVar24 - 0x61 < 0x1a) {
          bVar24 = bVar24 ^ 0x20;
        }
        if (bVar2 - 0x61 < 0x1a) {
          bVar2 = bVar2 ^ 0x20;
        }
        pbVar10[0xc] = bVar2;
        pbVar10[0xe] = bVar25;
        if (bVar16 - 0x61 < 0x1a) {
          bVar16 = bVar16 ^ 0x20;
        }
        if (bVar12 - 0x61 < 0x1a) {
          bVar12 = bVar12 ^ 0x20;
        }
        if (bVar18 - 0x61 < 0x1a) {
          bVar18 = bVar18 ^ 0x20;
        }
        if (bVar11 - 0x61 < 0x1a) {
          bVar11 = bVar11 ^ 0x20;
        }
        if (bVar23 - 0x61 < 0x1a) {
          bVar23 = bVar23 ^ 0x20;
        }
        if (bVar22 - 0x61 < 0x1a) {
          bVar22 = bVar22 ^ 0x20;
        }
        pbVar10[0xd] = bVar24;
        if (bVar5 - 0x61 < 0x1a) {
          bVar5 = bVar5 ^ 0x20;
        }
        pbVar10[5] = bVar5;
        uVar13 = uVar19 + 0x10;
        pbVar10[0xb] = bVar16;
        param_3 = param_3 - 0x10;
        pbVar10[10] = bVar12;
        pbVar10[9] = bVar18;
        if (bVar6 - 0x61 < 0x1a) {
          bVar6 = bVar6 ^ 0x20;
        }
        pbVar10[4] = bVar6;
        pbVar10[8] = bVar11;
        pbVar10[7] = bVar23;
        pbVar10[6] = bVar22;
        if (bVar7 - 0x61 < 0x1a) {
          bVar7 = bVar7 ^ 0x20;
        }
        pbVar10[3] = bVar7;
        if (bVar8 - 0x61 < 0x1a) {
          bVar8 = bVar8 ^ 0x20;
        }
        pbVar10[2] = bVar8;
        if (bVar9 - 0x61 < 0x1a) {
          bVar9 = bVar9 ^ 0x20;
        }
        pbVar10[1] = bVar9;
        uVar19 = uVar13;
      } while (0xf < param_3);
      if (param_3 == 0) goto LAB_00602214;
      uVar19 = local_38;
LAB_006021d4:
      param_2 = param_2 + uVar13;
      pbVar10 = pbVar3 + uVar13;
    }
    local_38 = param_3 + uVar19;
    do {
      bVar21 = *param_2;
      if ((char)bVar21 < '\0') {
        pbVar10 = param_2;
        local_3c = pbVar3;
        local_38 = uVar19;
        goto LAB_00602264;
      }
      param_2 = param_2 + 1;
      if (bVar21 - 0x61 < 0x1a) {
        bVar21 = bVar21 ^ 0x20;
      }
      *pbVar10 = bVar21;
      uVar19 = uVar19 + 1;
      param_3 = param_3 - 1;
      pbVar10 = pbVar10 + 1;
    } while (param_3 != 0);
  }
LAB_00602214:
  local_3c = pbVar3;
LAB_00602220:
  *param_1 = local_40;
  param_1[1] = (uint)local_3c;
  param_1[2] = local_38;
  return;
LAB_00602264:
  do {
    uVar19 = local_38;
    pbVar17 = pbVar10 + 1;
    uVar13 = (uint)*pbVar10;
    if (0x7fffffff < (uint)(int)(char)*pbVar10) {
      if (uVar13 < 0xe0) {
        uVar13 = pbVar10[1] & 0x3f | (uVar13 & 0x1f) << 6;
        pbVar17 = pbVar10 + 2;
      }
      else {
        uVar14 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
        if (uVar13 < 0xf0) {
          uVar13 = uVar14 | (uVar13 & 0x1f) << 0xc;
          pbVar17 = pbVar10 + 3;
        }
        else {
          pbVar17 = pbVar10 + 4;
          uVar13 = pbVar10[3] & 0x3f | uVar14 << 6 | (uVar13 & 7) << 0x12;
        }
      }
    }
    FUN_00fb77b8(&local_30,uVar13);
    uVar1 = local_28;
    uVar14 = local_2c;
    uVar13 = local_30;
    bVar21 = (byte)local_30;
    if (local_2c == 0) {
      uVar14 = 1;
      if (0x7f < local_30) {
        uVar14 = 2;
      }
      if ((0x7ff < local_30) && (uVar14 = 4, local_30 < 0x10000)) {
        uVar14 = 3;
      }
      if (local_40 - uVar19 < uVar14) {
        FUN_00600b08(&local_40,uVar19,uVar14);
        pbVar10 = local_3c + local_38;
        pbVar3 = local_3c;
      }
      else {
        pbVar10 = pbVar3 + uVar19;
      }
      if (uVar13 < 0x80) {
LAB_0060224c:
        *pbVar10 = (byte)uVar13;
      }
      else {
        bVar9 = bVar21 & 0x3f | 0x80;
        bVar21 = (byte)(uVar13 >> 6);
        if (0x7ff < uVar13) {
          bVar21 = bVar21 & 0x3f | 0x80;
          bVar8 = (byte)(uVar13 >> 0xc);
          if (uVar13 >> 0x10 == 0) {
            pbVar10[1] = bVar21;
            pbVar10[2] = bVar9;
            *pbVar10 = bVar8 | 0xe0;
          }
          else {
            pbVar10[3] = bVar9;
            pbVar10[2] = bVar21;
            pbVar10[1] = bVar8 & 0x3f | 0x80;
            *pbVar10 = (byte)(uVar13 >> 0x12) | 0xf0;
          }
          local_38 = uVar14 + uVar19;
          goto LAB_00602254;
        }
LAB_00602618:
        pbVar10[1] = bVar9;
        *pbVar10 = bVar21 | 0xc0;
      }
      local_38 = uVar14 + uVar19;
    }
    else {
      uVar15 = 1;
      bVar9 = (byte)local_2c;
      if (local_28 == 0) {
        if (0x7f < local_30) {
          uVar15 = 2;
        }
        if ((0x7ff < local_30) && (uVar15 = 4, local_30 < 0x10000)) {
          uVar15 = 3;
        }
        if (local_40 - uVar19 < uVar15) {
          FUN_00600b08(&local_40,uVar19,uVar15);
          pbVar3 = local_3c + local_38;
          if (uVar13 < 0x80) goto LAB_006023e4;
LAB_006026fc:
          bVar21 = bVar21 & 0x3f | 0x80;
          bVar8 = (byte)(uVar13 >> 6);
          if (uVar13 < 0x800) {
            pbVar3[1] = bVar21;
            *pbVar3 = bVar8 | 0xc0;
          }
          else {
            bVar8 = bVar8 & 0x3f | 0x80;
            bVar7 = (byte)(uVar13 >> 0xc);
            if (uVar13 >> 0x10 == 0) {
              pbVar3[1] = bVar8;
              pbVar3[2] = bVar21;
              *pbVar3 = bVar7 | 0xe0;
            }
            else {
              *pbVar3 = (byte)(uVar13 >> 0x12) | 0xf0;
              pbVar3[3] = bVar21;
              pbVar3[2] = bVar8;
              pbVar3[1] = bVar7 & 0x3f | 0x80;
            }
          }
        }
        else {
          pbVar3 = pbVar3 + uVar19;
          if (0x7f < local_30) goto LAB_006026fc;
LAB_006023e4:
          *pbVar3 = bVar21;
        }
        iVar20 = uVar15 + uVar19;
        uVar19 = 1;
        if (0x7f < uVar14) {
          uVar19 = 2;
        }
        if ((0x7ff < uVar14) && (uVar19 = 4, uVar14 < 0x10000)) {
          uVar19 = 3;
        }
        if (local_40 - iVar20 < uVar19) {
          local_38 = iVar20;
          FUN_00600b08(&local_40,iVar20,uVar19);
          pbVar10 = local_3c + local_38;
          pbVar3 = local_3c;
        }
        else {
          pbVar10 = local_3c + iVar20;
          pbVar3 = local_3c;
        }
        local_3c = pbVar3;
        if (uVar14 < 0x80) {
          *pbVar10 = bVar9;
          local_38 = uVar19 + iVar20;
        }
        else {
          bVar21 = bVar9 & 0x3f | 0x80;
          bVar9 = (byte)(uVar14 >> 6);
          if (uVar14 < 0x800) {
            pbVar10[1] = bVar21;
            *pbVar10 = bVar9 | 0xc0;
            local_38 = uVar19 + iVar20;
          }
          else {
            bVar9 = bVar9 & 0x3f | 0x80;
            bVar8 = (byte)(uVar14 >> 0xc);
            if (uVar14 >> 0x10 == 0) {
              pbVar10[1] = bVar9;
              pbVar10[2] = bVar21;
              *pbVar10 = bVar8 | 0xe0;
            }
            else {
              pbVar10[3] = bVar21;
              pbVar10[2] = bVar9;
              pbVar10[1] = bVar8 & 0x3f | 0x80;
              *pbVar10 = (byte)(uVar14 >> 0x12) | 0xf0;
            }
            local_38 = uVar19 + iVar20;
          }
        }
      }
      else {
        if (0x7f < local_30) {
          uVar15 = 2;
        }
        if ((0x7ff < local_30) && (uVar15 = 4, local_30 < 0x10000)) {
          uVar15 = 3;
        }
        if (local_40 - uVar19 < uVar15) {
          FUN_00600b08(&local_40,uVar19,uVar15);
          pbVar3 = local_3c + local_38;
          if (uVar13 < 0x80) goto LAB_00602334;
LAB_00602464:
          bVar21 = bVar21 & 0x3f | 0x80;
          bVar8 = (byte)(uVar13 >> 6);
          if (uVar13 < 0x800) {
            pbVar3[1] = bVar21;
            *pbVar3 = bVar8 | 0xc0;
          }
          else {
            bVar8 = bVar8 & 0x3f | 0x80;
            bVar7 = (byte)(uVar13 >> 0xc);
            if (uVar13 >> 0x10 == 0) {
              pbVar3[1] = bVar8;
              pbVar3[2] = bVar21;
              *pbVar3 = bVar7 | 0xe0;
            }
            else {
              *pbVar3 = (byte)(uVar13 >> 0x12) | 0xf0;
              pbVar3[3] = bVar21;
              pbVar3[2] = bVar8;
              pbVar3[1] = bVar7 & 0x3f | 0x80;
            }
          }
        }
        else {
          pbVar3 = pbVar3 + uVar19;
          if (0x7f < local_30) goto LAB_00602464;
LAB_00602334:
          *pbVar3 = bVar21;
        }
        iVar20 = uVar15 + uVar19;
        uVar19 = 1;
        if (0x7f < uVar14) {
          uVar19 = 2;
        }
        if ((0x7ff < uVar14) && (uVar19 = 4, uVar14 < 0x10000)) {
          uVar19 = 3;
        }
        if (local_40 - iVar20 < uVar19) {
          local_38 = iVar20;
          FUN_00600b08(&local_40,iVar20,uVar19);
          pbVar3 = local_3c + local_38;
          if (uVar14 < 0x80) goto LAB_00602518;
LAB_00602554:
          bVar21 = bVar9 & 0x3f | 0x80;
          bVar9 = (byte)(uVar14 >> 6);
          if (uVar14 < 0x800) {
            pbVar3[1] = bVar21;
            *pbVar3 = bVar9 | 0xc0;
          }
          else {
            bVar9 = bVar9 & 0x3f | 0x80;
            bVar8 = (byte)(uVar14 >> 0xc);
            if (uVar14 >> 0x10 == 0) {
              pbVar3[1] = bVar9;
              pbVar3[2] = bVar21;
              *pbVar3 = bVar8 | 0xe0;
            }
            else {
              pbVar3[3] = bVar21;
              pbVar3[2] = bVar9;
              pbVar3[1] = bVar8 & 0x3f | 0x80;
              *pbVar3 = (byte)(uVar14 >> 0x12) | 0xf0;
            }
          }
        }
        else {
          pbVar3 = local_3c + iVar20;
          if (0x7f < uVar14) goto LAB_00602554;
LAB_00602518:
          *pbVar3 = bVar9;
        }
        uVar19 = uVar19 + iVar20;
        uVar14 = 1;
        if (0x7f < uVar1) {
          uVar14 = 2;
        }
        if ((0x7ff < uVar1) && (uVar14 = 4, uVar1 < 0x10000)) {
          uVar14 = 3;
        }
        if (local_40 - uVar19 < uVar14) {
          local_38 = uVar19;
          FUN_00600b08(&local_40,uVar19,uVar14);
          pbVar10 = local_3c + local_38;
          pbVar3 = local_3c;
        }
        else {
          pbVar10 = local_3c + uVar19;
          pbVar3 = local_3c;
        }
        uVar13 = uVar1;
        local_3c = pbVar3;
        if (uVar1 < 0x80) goto LAB_0060224c;
        bVar9 = (byte)uVar1 & 0x3f | 0x80;
        bVar21 = (byte)(uVar1 >> 6);
        if (uVar1 < 0x800) goto LAB_00602618;
        bVar21 = bVar21 & 0x3f | 0x80;
        bVar8 = (byte)(uVar1 >> 0xc);
        if (uVar1 >> 0x10 == 0) {
          pbVar10[1] = bVar21;
          pbVar10[2] = bVar9;
          *pbVar10 = bVar8 | 0xe0;
        }
        else {
          pbVar10[3] = bVar9;
          pbVar10[2] = bVar21;
          pbVar10[1] = bVar8 & 0x3f | 0x80;
          *pbVar10 = (byte)(uVar1 >> 0x12) | 0xf0;
        }
        local_38 = uVar14 + uVar19;
      }
    }
LAB_00602254:
    pbVar10 = pbVar17;
  } while (pbVar17 != param_2 + param_3);
  goto LAB_00602220;
}

