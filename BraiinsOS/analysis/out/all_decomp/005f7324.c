// FUN_005f7324 @ 005f7324 size=2044 calls_out=7 calls_in=2
// strings: 

void FUN_005f7324(uint *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  uint *puVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  uint local_cc;
  uint local_98 [15];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_3 == 0) {
    *(undefined1 *)((int)param_1 + 0x17d) = 0;
    return;
  }
  if (*(char *)((int)param_1 + 0x17d) != '\x01') {
    return;
  }
  uVar15 = param_1[0x5d];
  puVar6 = param_1 + 0x4d;
  param_1[0x4e] = param_1[0x4e] + 1;
  if (uVar15 < 4) {
    uVar21 = param_1[0x5c];
    uVar2 = (uint)*param_2;
    if (uVar21 <= uVar2) {
LAB_005f7b04:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,uVar21,&DAT_018572b8);
    }
    uVar12 = param_1[0x5b];
    if (*(char *)(uVar12 + uVar2) == '\0') {
      uVar15 = uVar15 + 1;
      uVar14 = param_1[0x5e];
      param_1[0x5d] = uVar15;
      bVar5 = (&DAT_003cf239)[uVar2];
      *(undefined1 *)(uVar12 + uVar2) = 1;
      *(ushort *)(param_1 + 0x5e) = (short)uVar14 + (ushort)bVar5;
    }
    if (*(char *)((int)param_1 + 0x17a) == '\x01') {
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      else if (uVar2 - 0x61 < 0x1a) {
        uVar2 = uVar2 & 0x5f;
      }
      if (uVar21 <= uVar2) goto LAB_005f7b04;
      if (*(char *)(uVar12 + uVar2) == '\0') {
        param_1[0x5d] = uVar15 + 1;
        bVar5 = (&DAT_003cf239)[uVar2];
        *(undefined1 *)(uVar12 + uVar2) = 1;
        *(ushort *)(param_1 + 0x5e) = (short)param_1[0x5e] + (ushort)bVar5;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x137) == '\x01') {
    local_cc = param_1[0x4c];
    bVar24 = 2 < local_cc;
    bVar23 = local_cc == 3;
    uVar15 = 1;
    if (local_cc < 4) {
      bVar24 = 0xfe < param_3;
      bVar23 = param_3 == 0xff;
      uVar15 = param_3;
    }
    if (!bVar24 || bVar23) {
      uVar2 = (uint)*param_2;
      bVar5 = *(byte *)((int)param_1 + 0x136);
      bVar11 = (&DAT_003cf239)[uVar2];
      if ((bVar5 & 1) == 0) {
        uVar21 = 0;
        do {
          bVar10 = param_2[uVar21];
          uVar14 = (uint)bVar10;
          puVar3 = (uint *)((int)param_1 + (bVar10 >> 3 & 0x10) + 0x110);
          local_2c = 0;
          local_30 = 0;
          local_34 = 0;
          local_38 = 0;
          local_48[0] = *puVar3;
          local_48[3] = puVar3[3];
          bVar10 = *(byte *)((int)param_1 + uVar14 + 0x10);
          local_48[2] = puVar3[2];
          local_48[1] = puVar3[1];
          uVar12 = local_48[(uVar14 & 0x7f) >> 5];
          if ((uint)bVar10 < (uVar21 & 0xff)) {
            bVar10 = (byte)uVar21;
          }
          *(byte *)((int)param_1 + uVar14 + 0x10) = bVar10;
          if ((uVar12 >> (uVar14 & 0x1f) & 1) != 0) {
            if (param_2 + uVar21 + 1 == param_2 + uVar15) goto LAB_005f7458;
            iVar7 = 0;
            iVar9 = (uVar15 - 1) - uVar21;
            goto LAB_005f7910;
          }
          uVar21 = uVar21 + 1;
          if ((byte)(&DAT_003cf239)[uVar14] < bVar11) {
            uVar2 = uVar14;
            bVar11 = (&DAT_003cf239)[uVar14];
          }
        } while (param_3 != uVar21);
      }
      else {
        uVar21 = 0;
        do {
          bVar10 = param_2[uVar21];
          uVar12 = (uint)bVar10;
          bVar8 = *(byte *)((int)param_1 + uVar12 + 0x10);
          if ((uint)bVar8 < (uVar21 & 0xff)) {
            bVar8 = (byte)uVar21;
          }
          *(byte *)((int)param_1 + uVar12 + 0x10) = bVar8;
          if ((uVar12 - 0x41 & 0xff) < 0x1a) {
            uVar14 = uVar12 | 0x20;
          }
          else {
            uVar14 = uVar12;
            if ((uVar12 - 0x61 & 0xff) < 0x1a) {
              uVar14 = uVar12 & 0x5f;
            }
          }
          puVar13 = (undefined4 *)((int)param_1 + (bVar10 >> 3 & 0xfffffff0) + 0x110);
          local_4c = 0;
          local_50 = 0;
          local_54 = 0;
          local_58 = 0;
          bVar10 = *(byte *)((int)param_1 + uVar14 + 0x10);
          local_98[0xc] = *puVar13;
          local_5c = puVar13[3];
          local_98[0xe] = puVar13[2];
          local_98[0xd] = puVar13[1];
          if ((uint)bVar10 < (uVar21 & 0xff)) {
            bVar10 = (byte)uVar21;
          }
          uVar4 = local_98[((uVar12 & 0x7f) >> 5) + 0xc];
          *(byte *)((int)param_1 + uVar14 + 0x10) = bVar10;
          if ((uVar4 >> (uVar12 & 0x1f) & 1) != 0) {
            if (param_2 + uVar21 + 1 != param_2 + uVar15) {
              iVar9 = 0;
              do {
                if (uVar21 + iVar9 == 0xff) {
LAB_005f7af8:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_0185724c);
                }
                uVar15 = uVar21 + iVar9 + 1;
                uVar2 = uVar15 & 0xff;
                bVar11 = (byte)uVar15;
                uVar15 = (uint)param_2[uVar21 + iVar9 + 1];
                bVar5 = *(byte *)((int)param_1 + uVar15 + 0x10);
                if (bVar5 < uVar2) {
                  bVar5 = bVar11;
                }
                *(byte *)((int)param_1 + uVar15 + 0x10) = bVar5;
                if (uVar15 - 0x41 < 0x1a) {
                  uVar15 = uVar15 | 0x20;
                }
                else if (uVar15 - 0x61 < 0x1a) {
                  uVar15 = uVar15 & 0x5f;
                }
                bVar5 = *(byte *)((int)param_1 + uVar15 + 0x10);
                if (bVar5 < uVar2) {
                  bVar5 = bVar11;
                }
                *(byte *)((int)param_1 + uVar15 + 0x10) = bVar5;
                iVar7 = (uVar21 - param_3) + iVar9;
                iVar9 = iVar9 + 1;
              } while (iVar7 != -2);
            }
            goto LAB_005f7458;
          }
          uVar21 = uVar21 + 1;
          if ((byte)(&DAT_003cf239)[uVar12] < bVar11) {
            uVar2 = uVar12;
            bVar11 = (&DAT_003cf239)[uVar12];
          }
        } while (uVar21 != uVar15);
      }
      local_98[8] = 1;
      local_98[0xb] = 0;
      uVar4 = uVar2 & 0x1f;
      local_98[10] = 0;
      uVar21 = uVar4 ^ 0x1f;
      local_98[9] = 0;
      local_98[7] = 0;
      local_98[6] = 0;
      local_98[5] = 0;
      local_98[4] = 0;
      iVar9 = -((uVar2 & 0x60) >> 3);
      uVar19 = *(uint *)((int)local_98 + iVar9 + 0x20);
      uVar15 = *(uint *)((int)local_98 + iVar9 + 0x24);
      uVar12 = *(uint *)((int)local_98 + iVar9 + 0x28);
      uVar16 = uVar15 << uVar4 | (uVar19 >> 1) >> uVar21;
      uVar20 = *(int *)((int)local_98 + iVar9 + 0x2c) << uVar4 | (uVar12 >> 1) >> uVar21;
      puVar3 = (uint *)((int)param_1 + ((uVar2 & 0x80) >> 3) + 0x110);
      uVar22 = *puVar3;
      uVar18 = puVar3[1];
      uVar14 = puVar3[3];
      uVar17 = puVar3[2];
      uVar15 = uVar12 << uVar4 | (uVar15 >> 1) >> uVar21;
      if (((uVar22 & uVar19 << uVar4) == 0 && (uVar17 & uVar15) == 0) &&
          ((uVar18 & uVar16) == 0 && (uVar14 & uVar20) == 0)) {
        local_cc = local_cc + 1;
        param_1[0x4c] = local_cc;
        *puVar3 = uVar22 | uVar19 << uVar4;
        bVar11 = (&DAT_003cf239)[uVar2];
        uVar21 = *puVar6;
        puVar3[1] = uVar18 | uVar16;
        puVar3[2] = uVar17 | uVar15;
        puVar3[3] = uVar14 | uVar20;
        *(ushort *)puVar6 = (short)uVar21 + (ushort)bVar11;
      }
      if ((bVar5 & 1) != 0) {
        if ((uVar2 - 0x41 & 0xff) < 0x1a) {
          uVar2 = uVar2 | 0x20;
        }
        else if ((uVar2 - 0x61 & 0xff) < 0x1a) {
          uVar2 = uVar2 & 0x5f;
        }
        local_98[0] = 1;
        local_98[3] = 0;
        local_98[2] = 0;
        uVar4 = uVar2 & 0x1f;
        local_98[1] = 0;
        iVar9 = -((uVar2 & 0x60) >> 3);
        uVar19 = *(uint *)((int)local_98 + iVar9);
        uVar15 = uVar4 ^ 0x1f;
        uVar21 = *(uint *)((int)local_98 + iVar9 + 4);
        uVar14 = *(uint *)((int)local_98 + iVar9 + 8);
        uVar20 = uVar21 << uVar4 | (uVar19 >> 1) >> uVar15;
        uVar22 = *(int *)((int)local_98 + iVar9 + 0xc) << uVar4 | (uVar14 >> 1) >> uVar15;
        puVar3 = (uint *)((int)param_1 + ((uVar2 & 0x80) >> 3) + 0x110);
        uVar12 = *puVar3;
        uVar17 = puVar3[1];
        uVar18 = puVar3[2];
        uVar16 = puVar3[3];
        uVar15 = uVar14 << uVar4 | (uVar21 >> 1) >> uVar15;
        if (((uVar12 & uVar19 << uVar4) == 0 && (uVar15 & uVar18) == 0) &&
            ((uVar20 & uVar17) == 0 && (uVar22 & uVar16) == 0)) {
          param_1[0x4c] = local_cc + 1;
          *puVar3 = uVar19 << uVar4 | uVar12;
          puVar3[1] = uVar20 | uVar17;
          puVar3[2] = uVar15 | uVar18;
          bVar5 = (&DAT_003cf239)[uVar2];
          uVar15 = *puVar6;
          puVar3[3] = uVar22 | uVar16;
          *(ushort *)puVar6 = (short)uVar15 + (ushort)bVar5;
        }
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x137) = 0;
    }
  }
  goto LAB_005f7458;
  while( true ) {
    uVar15 = uVar21 + iVar7 + 1;
    iVar1 = uVar21 + iVar7;
    iVar7 = iVar7 + 1;
    bVar5 = *(byte *)((int)param_1 + param_2[iVar1 + 1] + 0x10);
    if ((uint)bVar5 < (uVar15 & 0xff)) {
      bVar5 = (byte)uVar15;
    }
    iVar9 = iVar9 + -1;
    *(byte *)((int)param_1 + param_2[iVar1 + 1] + 0x10) = bVar5;
    if (iVar9 == 0) break;
LAB_005f7910:
    if (uVar21 + iVar7 == 0xff) goto LAB_005f7af8;
  }
LAB_005f7458:
  uVar15 = param_1[3];
  param_1[3] = uVar15 + 1;
  if (uVar15 == 0) {
    uVar15 = thunk_FUN_016d4a50();
    if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
    FUN_016dd1aa(uVar15,param_2,param_3);
    if ((*param_1 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    *param_1 = param_3;
    param_1[1] = uVar15;
    param_1[2] = param_3;
    uVar15 = param_1[0x4f];
  }
  else {
    if ((*param_1 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(param_1[1],0x7fffffff,param_3);
    }
    *param_1 = 0x80000000;
    uVar15 = param_1[0x4f];
  }
  if ((uVar15 == 0x80000000) || (*(char *)((int)param_1 + 0x165) != '\0')) {
    return;
  }
  uVar15 = param_1[0x51];
  if (uVar15 < 0x80) {
    FUN_005fd0c0(param_1 + 0x4f,param_2,param_3);
    return;
  }
  *(undefined1 *)(param_1 + 0x57) = 0;
  puVar13 = (undefined4 *)(param_1[0x50] + 4);
  *(undefined1 *)((int)param_1 + 0x165) = 1;
  param_1[0x51] = 0;
  do {
    if (puVar13[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar13);
    }
    puVar13 = puVar13 + 3;
    uVar15 = uVar15 - 1;
  } while (uVar15 != 0);
  param_1[0x54] = 0;
  param_1[0x55] = 0xffffffff;
  return;
}

