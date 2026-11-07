// FUN_017a32bc @ 017a32bc size=2300 calls_out=0 calls_in=3
// strings: 

int FUN_017a32bc(uint *param_1,uint param_2,ushort *param_3,int param_4,ushort *param_5,int param_6,
                ushort *param_7,int param_8,int param_9,byte *param_10,int param_11)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint unaff_lr;
  uint uVar22;
  byte *local_5c;
  byte *local_58;
  byte *local_54;
  uint local_50;
  int local_38;
  uint local_30;
  uint local_2c;
  
  if (param_2 < 5) {
    return -0x46;
  }
  puVar21 = (uint *)((int)param_1 + (param_2 - 4));
  uVar3 = (uint)*param_3;
  iVar4 = 0;
  if (uVar3 != 0) {
    unaff_lr = uVar3 - 1;
    iVar4 = 4;
  }
  if (uVar3 == 0) {
    iVar4 = 8;
  }
  else {
    iVar4 = (iVar4 << (unaff_lr & 0xff)) + 4;
  }
  uVar13 = (uint)*param_5;
  iVar5 = *(int *)((int)param_3 + (uint)param_10[param_4 + -1] * 8 + iVar4 + 4);
  uVar8 = iVar5 + 0x8000;
  uVar6 = (uVar8 & 0xffff0000) - iVar5;
  iVar5 = (int)uVar6 >> (uVar8 >> 0x10 & 0xff);
  if (uVar13 != 0) {
    uVar6 = uVar13 - 1;
  }
  uVar8 = (uint)*param_7;
  uVar20 = (uint)param_3[*(int *)((int)param_3 + (uint)param_10[param_4 + -1] * 8 + iVar4) + iVar5 +
                         2];
  if (uVar13 != 0) {
    iVar5 = (4 << (uVar6 & 0xff)) + 4;
  }
  else {
    iVar5 = 8;
  }
  iVar7 = *(int *)((int)param_5 + (uint)param_10[param_6 + -1] * 8 + iVar5 + 4);
  uVar9 = iVar7 + 0x8000;
  uVar6 = (uVar9 & 0xffff0000) - iVar7;
  iVar7 = (int)uVar6 >> (uVar9 >> 0x10 & 0xff);
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
  }
  local_30 = (uint)param_5[*(int *)((int)param_5 + (uint)param_10[param_6 + -1] * 8 + iVar5) + iVar7
                           + 2];
  uVar9 = (uint)param_10[param_8 + -1];
  if (uVar8 != 0) {
    iVar7 = (4 << (uVar6 & 0xff)) + 4;
  }
  else {
    iVar7 = 8;
  }
  iVar14 = *(int *)((int)param_7 + uVar9 * 8 + iVar7 + 4);
  bVar1 = (&DAT_00451590)[uVar9];
  pbVar16 = param_10 + 0x1fffffff;
  uVar6 = iVar14 + 0x8000;
  uVar22 = bVar1 & 7;
  local_50 = (uint)param_7[*(int *)((int)param_7 + uVar9 * 8 + iVar7) +
                           ((int)((uVar6 & 0xffff0000) - iVar14) >> (uVar6 >> 0x10 & 0xff)) + 2];
  iVar14 = (int)pbVar16 * 8;
  uVar2 = *(ushort *)(param_9 + iVar14 + 6);
  uVar6 = (uint)*(ushort *)(param_9 + iVar14 + 4) & *(uint *)(&DAT_004515b4 + (uint)bVar1 * 4);
  puVar11 = (uint *)((int)param_1 + (uint)(bVar1 >> 3));
  *param_1 = uVar6;
  if (puVar21 < puVar11) {
    puVar11 = puVar21;
  }
  uVar15 = uVar22 + (byte)(&DAT_00451558)[param_10[param_4 + -1]];
  uVar9 = uVar6 >> ((uint)(bVar1 >> 3) << 3) |
          ((uint)uVar2 &
          *(uint *)(&DAT_004515b4 + (uint)(byte)(&DAT_00451558)[param_10[param_4 + -1]] * 4)) <<
          uVar22;
  uVar6 = uVar15 >> 3;
  uVar15 = uVar15 & 7;
  puVar12 = (uint *)((int)puVar11 + uVar6);
  *puVar11 = uVar9;
  uVar9 = uVar9 >> ((uVar6 & 0x1f) << 3);
  if (puVar21 < puVar12) {
    puVar12 = puVar21;
  }
  uVar6 = *(uint *)(param_9 + (int)pbVar16 * 8);
  uVar22 = (uint)param_10[param_6 + -1];
  if (param_11 == 0) {
    uVar9 = uVar9 | (uVar6 & *(uint *)(&DAT_004515b4 + uVar22 * 4)) << uVar15;
    uVar6 = uVar15 + uVar22 >> 3;
    uVar10 = uVar15 + uVar22 & 7;
    puVar11 = (uint *)((int)puVar12 + uVar6);
    *puVar12 = uVar9;
    local_2c = uVar9 >> ((uVar6 & 0x1f) << 3);
    if (puVar21 < puVar11) {
      puVar11 = puVar21;
    }
    if ((byte *)0x1 < param_10) {
      local_38 = param_9 + iVar14 + 8;
      local_58 = param_10 + param_6 + -1;
      local_5c = param_10 + param_4 + -1;
      local_54 = param_10 + param_8 + -1;
      do {
        local_58 = local_58 + -1;
        uVar15 = (uint)*local_58;
        uVar19 = (uint)local_54[-1];
        local_5c = local_5c + -1;
        uVar17 = (uint)*local_5c;
        uVar6 = local_30 + *(int *)((int)param_5 + uVar15 * 8 + iVar5 + 4) >> 0x10;
        uVar2 = param_5[*(int *)((int)param_5 + uVar15 * 8 + iVar5) +
                        ((int)local_30 >> (uVar6 & 0xff)) + 2];
        uVar9 = uVar20 + *(int *)((int)param_3 + uVar17 * 8 + iVar4 + 4) >> 0x10;
        uVar18 = (uint)(byte)(&DAT_00451558)[uVar17];
        uVar22 = uVar9 + uVar6 + uVar10;
        local_2c = (local_30 & *(uint *)(&DAT_004515b4 + uVar6 * 4)) << uVar10 |
                   (*(uint *)(&DAT_004515b4 + uVar9 * 4) & uVar20) << (uVar6 + uVar10 & 0xff) |
                   local_2c;
        uVar20 = (uint)param_3[*(int *)((int)param_3 + uVar17 * 8 + iVar4) +
                               ((int)uVar20 >> (uVar9 & 0xff)) + 2];
        uVar6 = uVar22 >> 3;
        uVar22 = uVar22 & 7;
        puVar12 = (uint *)((int)puVar11 + uVar6);
        *puVar11 = local_2c;
        if (puVar21 < puVar12) {
          puVar12 = puVar21;
        }
        uVar9 = local_50 + *(int *)((int)param_7 + uVar19 * 8 + iVar7 + 4) >> 0x10;
        uVar17 = (uint)(byte)(&DAT_00451590)[uVar19];
        uVar10 = uVar9 + uVar22;
        uVar22 = local_2c >> ((uVar6 & 0x1f) << 3) |
                 (*(uint *)(&DAT_004515b4 + uVar9 * 4) & local_50) << uVar22;
        uVar6 = uVar10 >> 3;
        uVar10 = uVar10 & 7;
        local_50 = (uint)param_7[*(int *)((int)param_7 + uVar19 * 8 + iVar7) +
                                 ((int)local_50 >> (uVar9 & 0xff)) + 2];
        puVar11 = (uint *)((int)puVar12 + uVar6);
        *puVar12 = uVar22;
        if (puVar21 < puVar11) {
          puVar11 = puVar21;
        }
        uVar6 = uVar22 >> ((uVar6 & 0x1f) << 3) |
                ((uint)*(ushort *)(local_38 + -0xc) & *(uint *)(&DAT_004515b4 + uVar17 * 4)) <<
                uVar10;
        uVar10 = uVar10 + uVar17;
        if (0x18 < uVar18 + uVar17) {
          uVar9 = uVar10 >> 3;
          uVar10 = uVar10 & 7;
          puVar12 = (uint *)((int)puVar11 + uVar9);
          *puVar11 = uVar6;
          uVar6 = uVar6 >> ((uVar9 & 0x1f) << 3);
          puVar11 = puVar12;
          if (puVar21 < puVar12) {
            puVar11 = puVar21;
          }
        }
        pbVar16 = local_54 + (-2 - param_8);
        uVar6 = uVar6 | ((uint)*(ushort *)(local_38 + -10) & *(uint *)(&DAT_004515b4 + uVar18 * 4))
                        << (uVar10 & 0xff);
        uVar9 = uVar10 + uVar18 >> 3;
        uVar10 = uVar10 + uVar18 & 7;
        uVar22 = *(uint *)(&DAT_004515b4 + uVar15 * 4);
        puVar12 = (uint *)((int)puVar11 + uVar9);
        *puVar11 = uVar6;
        uVar15 = uVar10 + uVar15;
        if (puVar21 < puVar12) {
          puVar12 = puVar21;
        }
        local_2c = uVar6 >> ((uVar9 & 0x1f) << 3) | (uVar22 & *(uint *)(local_38 + -0x10)) << uVar10
        ;
        local_38 = local_38 + -8;
        uVar6 = uVar15 >> 3;
        uVar10 = uVar15 & 7;
        puVar11 = (uint *)((int)puVar12 + uVar6);
        *puVar12 = local_2c;
        local_2c = local_2c >> ((uVar6 & 0x1f) << 3);
        if (puVar21 < puVar11) {
          puVar11 = puVar21;
        }
        local_54 = local_54 + -1;
        local_30 = (uint)uVar2;
      } while (pbVar16 < param_10);
    }
  }
  else {
    if (uVar22 < 0x18) {
      uVar10 = *(uint *)(&DAT_004515b4 + uVar22 * 4);
      local_2c = 0;
    }
    else {
      local_2c = uVar22 - 0x18;
      if (local_2c == 0) {
        uVar22 = 0x18;
        uVar10 = 0xffffff;
      }
      else {
        uVar9 = uVar9 | (*(uint *)(&DAT_004515b4 + local_2c * 4) & uVar6) << uVar15;
        uVar22 = uVar15 + local_2c;
        uVar15 = uVar22 & 7;
        uVar22 = uVar22 >> 3;
        puVar11 = (uint *)((int)puVar12 + uVar22);
        *puVar12 = uVar9;
        uVar6 = *(uint *)(param_9 + (int)pbVar16 * 8);
        uVar9 = uVar9 >> ((uVar22 & 0x1f) << 3);
        puVar12 = puVar11;
        if (puVar21 < puVar11) {
          puVar12 = puVar21;
        }
        uVar22 = 0x18;
        uVar10 = 0xffffff;
      }
    }
    uVar9 = uVar9 | (uVar10 & uVar6 >> (local_2c & 0xff)) << uVar15;
    uVar10 = uVar15 + uVar22 & 7;
    uVar6 = uVar15 + uVar22 >> 3;
    puVar11 = (uint *)((int)puVar12 + uVar6);
    *puVar12 = uVar9;
    local_2c = uVar9 >> ((uVar6 & 0x1f) << 3);
    if (puVar21 < puVar11) {
      puVar11 = puVar21;
    }
    if ((byte *)0x1 < param_10) {
      local_38 = param_9 + iVar14 + 8;
      local_58 = param_10 + param_6 + -1;
      local_54 = param_10 + param_4 + -1;
      local_5c = param_10 + param_8 + -1;
      do {
        local_58 = local_58 + -1;
        uVar22 = (uint)*local_58;
        uVar19 = (uint)local_5c[-1];
        local_54 = local_54 + -1;
        uVar17 = (uint)*local_54;
        uVar6 = local_30 + *(int *)((int)param_5 + uVar22 * 8 + iVar5 + 4) >> 0x10;
        uVar2 = param_5[*(int *)((int)param_5 + uVar22 * 8 + iVar5) +
                        ((int)local_30 >> (uVar6 & 0xff)) + 2];
        uVar9 = uVar20 + *(int *)((int)param_3 + uVar17 * 8 + iVar4 + 4) >> 0x10;
        uVar18 = (uint)(byte)(&DAT_00451558)[uVar17];
        uVar15 = uVar9 + uVar6 + uVar10;
        local_2c = (local_30 & *(uint *)(&DAT_004515b4 + uVar6 * 4)) << uVar10 |
                   (*(uint *)(&DAT_004515b4 + uVar9 * 4) & uVar20) << (uVar6 + uVar10 & 0xff) |
                   local_2c;
        uVar20 = (uint)param_3[*(int *)((int)param_3 + uVar17 * 8 + iVar4) +
                               ((int)uVar20 >> (uVar9 & 0xff)) + 2];
        uVar6 = uVar15 >> 3;
        uVar15 = uVar15 & 7;
        puVar12 = (uint *)((int)puVar11 + uVar6);
        *puVar11 = local_2c;
        if (puVar21 < puVar12) {
          puVar12 = puVar21;
        }
        uVar9 = local_50 + *(int *)((int)param_7 + uVar19 * 8 + iVar7 + 4) >> 0x10;
        uVar10 = (uint)(byte)(&DAT_00451590)[uVar19];
        uVar17 = uVar15 + uVar9;
        uVar15 = local_2c >> ((uVar6 & 0x1f) << 3) |
                 (*(uint *)(&DAT_004515b4 + uVar9 * 4) & local_50) << uVar15;
        uVar6 = uVar17 >> 3;
        uVar17 = uVar17 & 7;
        local_50 = (uint)param_7[*(int *)((int)param_7 + uVar19 * 8 + iVar7) +
                                 ((int)local_50 >> (uVar9 & 0xff)) + 2];
        puVar11 = (uint *)((int)puVar12 + uVar6);
        *puVar12 = uVar15;
        if (puVar21 < puVar11) {
          puVar11 = puVar21;
        }
        local_2c = uVar15 >> ((uVar6 & 0x1f) << 3) |
                   ((uint)*(ushort *)(local_38 + -0xc) & *(uint *)(&DAT_004515b4 + uVar10 * 4)) <<
                   uVar17;
        uVar17 = uVar10 + uVar17;
        if (0x18 < uVar10 + uVar18) {
          uVar6 = uVar17 >> 3;
          uVar17 = uVar17 & 7;
          puVar12 = (uint *)((int)puVar11 + uVar6);
          *puVar11 = local_2c;
          local_2c = local_2c >> ((uVar6 & 0x1f) << 3);
          puVar11 = puVar12;
          if (puVar21 < puVar12) {
            puVar11 = puVar21;
          }
        }
        local_2c = local_2c |
                   ((uint)*(ushort *)(local_38 + -10) & *(uint *)(&DAT_004515b4 + uVar18 * 4)) <<
                   (uVar17 & 0xff);
        uVar6 = uVar18 + uVar17 >> 3;
        uVar9 = uVar18 + uVar17 & 7;
        puVar12 = (uint *)((int)puVar11 + uVar6);
        *puVar11 = local_2c;
        local_2c = local_2c >> ((uVar6 & 0x1f) << 3);
        if (puVar21 < puVar12) {
          puVar12 = puVar21;
        }
        if (uVar22 < 0x18) {
          uVar6 = *(uint *)(&DAT_004515b4 + uVar22 * 4);
          uVar15 = 0;
        }
        else {
          uVar15 = uVar22 - 0x18;
          if (uVar15 == 0) {
            uVar22 = 0x18;
            uVar6 = 0xffffff;
          }
          else {
            local_2c = local_2c |
                       (*(uint *)(&DAT_004515b4 + uVar15 * 4) & *(uint *)(local_38 + -0x10)) <<
                       uVar9;
            uVar6 = uVar9 + uVar15 >> 3;
            uVar9 = uVar9 + uVar15 & 7;
            uVar22 = 0x18;
            puVar11 = (uint *)((int)puVar12 + uVar6);
            *puVar12 = local_2c;
            local_2c = local_2c >> ((uVar6 & 0x1f) << 3);
            puVar12 = puVar11;
            if (puVar21 < puVar11) {
              puVar12 = puVar21;
            }
            uVar6 = 0xffffff;
          }
        }
        pbVar16 = local_5c + (-2 - param_8);
        local_2c = local_2c | (uVar6 & *(uint *)(local_38 + -0x10) >> (uVar15 & 0xff)) << uVar9;
        uVar6 = uVar9 + uVar22 >> 3;
        local_38 = local_38 + -8;
        uVar10 = uVar9 + uVar22 & 7;
        puVar11 = (uint *)((int)puVar12 + uVar6);
        *puVar12 = local_2c;
        local_2c = local_2c >> ((uVar6 & 0x1f) << 3);
        if (puVar21 < puVar11) {
          puVar11 = puVar21;
        }
        local_5c = local_5c + -1;
        local_30 = (uint)uVar2;
      } while (pbVar16 < param_10);
    }
  }
  local_2c = local_2c | (*(uint *)(&DAT_004515b4 + uVar3 * 4) & uVar20) << uVar10;
  uVar6 = uVar3 + uVar10 >> 3;
  uVar3 = uVar3 + uVar10 & 7;
  puVar12 = (uint *)((int)puVar11 + uVar6);
  *puVar11 = local_2c;
  uVar20 = uVar13 + uVar3;
  if (puVar21 < puVar12) {
    puVar12 = puVar21;
  }
  uVar6 = local_2c >> ((uVar6 & 0x1f) << 3) |
          (local_30 & *(uint *)(&DAT_004515b4 + uVar13 * 4)) << uVar3;
  uVar3 = uVar20 >> 3;
  uVar13 = *(uint *)(&DAT_004515b4 + uVar8 * 4);
  uVar20 = uVar20 & 7;
  uVar8 = uVar8 + uVar20;
  puVar11 = (uint *)((int)puVar12 + uVar3);
  *puVar12 = uVar6;
  if (puVar21 < puVar11) {
    puVar11 = puVar21;
  }
  uVar13 = uVar6 >> ((uVar3 & 0x1f) << 3) | (uVar13 & local_50) << uVar20;
  uVar3 = uVar8 >> 3;
  uVar8 = uVar8 & 7;
  uVar6 = uVar8 + 1;
  puVar12 = (uint *)((int)puVar11 + uVar3);
  *puVar11 = uVar13;
  if (puVar21 < puVar12) {
    puVar12 = puVar21;
  }
  puVar11 = (uint *)((int)puVar12 + (uVar6 >> 3));
  *puVar12 = 1 << uVar8 | uVar13 >> ((uVar3 & 0x1f) << 3);
  if (((puVar21 < puVar11) || (puVar21 == puVar11)) ||
     (iVar4 = (int)puVar11 + ((uint)((uVar6 & 7) != 0) - (int)param_1), iVar4 == 0)) {
    return -0x46;
  }
  return iVar4;
}

